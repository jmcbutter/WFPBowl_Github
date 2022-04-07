class IngredientIndexer:
    def __init__(self, documentIndexer):
        self.documentIndexer = documentIndexer

    def get_ingredient_index_bounds(self, ingredientId):
        self.current_ingredient_index = self.documentIndexer.get_ingredient_index(ingredientId)
        if ingredientId <= self.documentIndexer.documentReader.document_length:
            self.next_ingredient_index = self.documentIndexer.get_ingredient_index(ingredientId + 1)
        else:
            self.next_ingredient_index = self.documentIndexer.documentReader.document_length + 1
     
    def get_ingredient_name_index(self, ingredientId):
         return self.documentIndexer.indices['IngredientName'][ingredientId]           
    
    def get_indices(self, style_name):
        return [g for g in self.documentIndexer.indices[style_name]
                if self.current_ingredient_index < g < self.next_ingredient_index]
        
            
            
    
    

if __name__ == '__main__':
    from DocumentReader import DocumentReader
    from document_styles import document_styles
    from DocumentIndexer import DocumentIndexer
    from document_path import document_path

    dr = DocumentReader(document_path)
    di = DocumentIndexer(dr, document_styles)
    ii = IngredientIndexer(di)
    
    ii.get_ingredient_index_bounds(0)
    print(ii.get_indices('Dish'))