import docx
import os
import json

class Group:
    def __init__(self, name, items):
        self.name = name
        self.items = items

    def __repr__(self):
        return (f"\n\nGroup: {self.name}"
                f"\nitems: {self.items}\n")

class GroupEncoder(json.JSONEncoder):
    def default(self, o):
        if isinstance(o, Group):
            return o.__dict__



def get_paragraphs(document):
    return [paragraph for paragraph in document.paragraphs]

def get_ingredient_paragraphs(paragraphs):
    return [paragraph for paragraph in paragraphs
            if len(paragraph.runs) > 0 and not paragraph.runs[0].italic]

def get_dish_paragraphs(paragraphs):
    return [paragraph for paragraph in paragraphs
            if len(paragraph.runs) > 0 and paragraph.runs[0].italic and "cuisine" not in paragraph.text]

######################## Group Creation ##########################
def create_group(paragraph):
    text = paragraph.text
    group_name = text[0:text.index(", e.g.")].lower().lstrip("*").strip() 
    group_items = text[text.index(", e.g.") + len(", e.g., "):].lower().strip().split(", ")
    return Group(group_name, group_items)

def create_groups(paragraphs):
    return [create_group(paragraph) for paragraph in paragraphs
            if ", e.g." in paragraph.text]

def remove_duplicate(groups):
    print(len(groups))
    for i in range(len(groups)):
        for j in range(i + 1, len(groups)):
            original = groups[i]
            try:
                if groups[j].name in original.name:
                    duplicate = groups.pop(j)
                    for ingredient in duplicate.items:
                        if ingredient not in original.items:
                            original.items.append(ingredient)
            except IndexError:
                continue



def run(paragraphs, file_name):
    groups = create_groups(paragraphs)
    remove_duplicate(groups)
    for group in groups:
        group.items.sort()
    groups.sort(key = lambda x: x.name)
    write_groups_to_file(groups, 'json/'+file_name)

def run_for_ingredients(document):
    paragraphs = get_ingredient_paragraphs(get_paragraphs(document))
    run(paragraphs, 'ingredient_groups.json')


def run_for_dishes(document):
    paragraphs = get_dish_paragraphs(get_paragraphs(document))
    run(paragraphs, 'dish_groups.json')


def write_groups_to_file(list_of_groups, file_name):
    with open(file_name, 'w') as outfile:
        json.dump([group for group in list_of_groups], outfile, separators=(",", ":"), indent=4, cls=GroupEncoder) 

path = "../../../IngredientPairs.docx"
print(os.path.abspath(path))
doc = docx.Document(path)
run_for_ingredients(doc)
run_for_dishes(doc)





