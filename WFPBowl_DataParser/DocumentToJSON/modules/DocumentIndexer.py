class DocumentIndexer():
    def __init__(self, documentReader, documentStyles):
        self.documentReader = documentReader
        self.documentStyles = documentStyles
        self.indices = self.get_index_dictionary()
    
    def get_indices(self, style_name):
        return [i for i in range(0, self.documentReader.document_length) 
                if self.documentReader.style_list[i] == style_name]
        
    def get_index_dictionary(self):
        return {style: self.get_indices(style) for style in self.documentStyles}
    
    def get_ingredient_index(self, ingredientId):
        return self.indices['IngredientName'][ingredientId]
    




if __name__ == '__main__':
    from DocumentReader import DocumentReader
    from document_styles import document_styles
    from document_path import document_path

    dr = DocumentReader(document_path)
    di = DocumentIndexer(dr, document_styles)
    print(di.indices)

