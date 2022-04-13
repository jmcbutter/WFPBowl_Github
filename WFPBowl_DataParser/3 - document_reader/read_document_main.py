import docx
import json

#####################################   Classes   ##################################################
class Ingredient:
    def __init__(self, currentCount, name):
        self.id = currentCount
        self.name = name
        self.alternate_names = ""
        self.category = ""
        self.groups = list()
        self.cuisines = list()
        self.dishes = list()
        self.matches = list()
        self.group_matches = list()

    def update_matches(self, match_list):
        for match in match_list:
            try:
                if match.is_group:
                    self.group_matches.append(match)
                else:
                    self.matches.append(match)
            except:
                pass
    

        
    def __repr__(self):
        return (f"\n\nIngredient: {self.name} \n"
                f"Other Names: {self.alternate_names}\n"
                f"ID: {self.id} \n"
                f"Category: {self.category} \n"
                f"Groups: {self.groups} \n"
                f"Cuisines: {self.cuisines} \n"
                f"Dishes: {self.dishes} \n"
                f"Matches: {self.matches}\n"
                f"Group Matches: {self.group_matches} \n\n" )


class Match:
    def __init__(self, name, match_is_group, strength):
        self.name = name
        self.is_group = match_is_group
        self.strength = strength
        self.set_match_factor(strength)

    def set_match_factor(self, strength):
        match int(strength):
            case 1:
                self.match_factor = 0.8
            case 2:
                self.match_factor = 0.6
            case 3:
                self.match_factor = 0.4
            case 4:
                self.match_factor = 0.2
   
    def __repr__(self):
       return f"{self.name}: {self.strength} : {self.match_factor}"


class IngredientEncoder(json.JSONEncoder):
    def default(self, o):
        if isinstance(o, (Ingredient, Match)):
            return o.__dict__





#####################################   Program   ##################################################
def get_document_paragraphs(document):
    return [paragraph for paragraph in document.paragraphs]

def create_ingredients(paragraphs):
    count = 0
    ingredient_list = list()
    current_ingredient = None
    for paragraph in paragraphs:
        style = paragraph.style.name
        if style == "IngredientName":
            if current_ingredient:
                ingredient_list.append(current_ingredient)
            current_ingredient = Ingredient(count, paragraph.text)
            count += 1
        elif style == "AlternateName":
            current_ingredient.alternate_names.append(paragraph.text)
        elif style == "Cuisine":
            current_ingredient.cuisines.append(paragraph.text)
        elif style == "IngredientProperties":
            if "Category:" in paragraph.text:
                current_ingredient.category = paragraph.text.strip("Category: ")
        elif style == "Group":
            current_ingredient.groups.append(paragraph.text)
        elif style == "Dish":
            current_ingredient.dishes.append(paragraph.text)
        elif "GroupMatch" in style:
            strength = paragraph.style.name.strip("GroupMatch")
            current_ingredient.group_matches.append(Match(paragraph.text, True, strength))
        elif "Match" in style:
            strength = paragraph.style.name.strip("Match")
            current_ingredient.matches.append(Match(paragraph.text, False, strength))
    return ingredient_list

def get_ingredients(document):
    paragraphs = get_document_paragraphs(document)
    return create_ingredients(paragraphs)


#####################################  DATA VALIDATION  #################################################
def cross_check(ingredients): 
    for ingredient in ingredients:
        for match in ingredient.matches:
            matched_ingredient = list(filter(lambda x: x.name.lower() == match.name.lower(), ingredients))
            if len(matched_ingredient) > 0:
                if ingredient not in matched_ingredient[0].matches:
                    matched_ingredient[0].matches.append(Match(ingredient.name, False, match.strength))
                    print(f"{ingredient.name} : {ingredient.matches}\n{matched_ingredient[0].name} : {matched_ingredient[0].matches}\n")





if __name__ == '__main__':
    doc = docx.Document("../../../IngredientPairs--Ungrouped.docx")

    ingredients = get_ingredients(doc)
    cross_check(ingredients)


    with open('unvalidated_ingredient_json_data.json', 'w') as outfile:
        json.dump([ingredient for ingredient in ingredients], outfile, separators=(",", ":"), indent=4, cls=IngredientEncoder) 
