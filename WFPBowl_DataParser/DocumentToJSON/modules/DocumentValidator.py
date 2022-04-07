class DocumentValidator:
    def __init__(self, documentReader, documentStyles):
        self.acceptable_styles_list = document_styles
        self.documentReader = documentReader

    def get_unnacceptable_style_indices(self):
        return [i for i in range(0, self.documentReader.document_length)
                if self.documentReader.style_list[i] not in self.acceptable_styles_list]

if __name__ == '__main__':
    from DocumentReader import DocumentReader
    from document_styles import document_styles
    from document_path import document_path
    
    documentReader = DocumentReader(document_path)
    documentValidator = DocumentValidator(documentReader, document_styles)
    print(documentValidator.get_unnacceptable_style_indices())