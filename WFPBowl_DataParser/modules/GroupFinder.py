from DocumentReader import DocumentReader
from document_path import document_path

class GroupFinder:
    def __init__(self):
        self.document_path = "../" + document_path 
        self.documentReader = DocumentReader(self.document_path)

    def find_group_based_on_text(self, text):
        return [self.trim_string_at_text_start(item, text) for item in self.documentReader.text_list if item.find(text) != -1]

    def trim_string_at_text_start(self, item_string, text):
        return item_string[0:item_string.index(text)]

    def eliminate_duplicates(self, list_of_items):
        return list(set(list_of_items))

    def get_list_of_groups(self, text):
        list_of_items = self.find_group_based_on_text(text)
        return sorted(self.eliminate_duplicates(list_of_items))

    def write_groups_to_file(self, list_of_groups, file_name):
        with open(file_name, 'w', encoding="utf-8") as file:
            for item in list_of_groups:
                file.write(f"{item}\n")

    def write(self, text, file_name):
        self.write_groups_to_file(self.get_list_of_groups(text), file_name)


gf = GroupFinder()
gf.write(', e.g', 'test.txt')





