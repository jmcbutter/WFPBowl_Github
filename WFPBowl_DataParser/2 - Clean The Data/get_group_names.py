# Get a list of group names (EX: ["beans", "oil", "squash", "winter", etc.]) -- Use the brackets as a guide
# Get a count of the number of times the group name appears on its own throughout the document (not in brackets, also not in a cuisine)

import docx
import os
import json
from docx.text.paragraph import Paragraph
from docx.oxml.xmlchemy import OxmlElement


def get_paragraphs(document):
    return [paragraph for paragraph in document.paragraphs]

def get_group_names_and_count(paragraphs):
    names = [paragraph.text for paragraph in paragraphs if "GroupMatch" in paragraph.style.name]
    set_of_names = sorted(set(names))
    name_and_count = dict()
    for name in set_of_names:
        count = names.count(name)
        name_and_count[name] = count
    return name_and_count

def write_groups_to_file(group_names_and_counts, file_name):
    with open(file_name, 'w') as outfile:
        json.dump({name:count for name, count in group_names_and_counts.items()}, outfile, separators=(",", ":"), indent=4) 

def run(path, save_file):
    doc = docx.Document(path)
    groups = get_group_names_and_count(get_paragraphs(doc))
    write_groups_to_file(groups, 'json-data/'+save_file)


if __name__ == '__main__':
    path = "../1 - Style The Document/UngroupedIngredients.docx"
    print(os.path.abspath(path))
    run(path, 'group_names.json')