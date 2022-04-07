import docx

class DocumentReader:
    def __init__(self, document_path):
        self.doc = docx.Document(document_path)
        self.set_document_lists()
        self.set_document_length()

    def set_document_items_list(self):
        self.paragraph_items = [paragraph for paragraph in self.doc.paragraphs if paragraph.text != '']

    def set_document_text_list(self):
        self.text_list = [paragraph.text.strip().lower() for paragraph in self.paragraph_items]

    def set_document_styles_list(self):
        self.style_list = [paragraph.style.name for paragraph in self.paragraph_items]

    def set_document_lists(self):
        self.set_document_items_list()
        self.set_document_text_list()
        self.set_document_styles_list()

    def set_document_length(self):
        self.document_length = len(self.paragraph_items)



if __name__ == '__main__':
    
    from document_path import document_path
    dr = DocumentReader(document_path)
    print(dr.text_list)
    print(dr.text_list.index('adobo sauce'))