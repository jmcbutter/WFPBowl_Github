from Ingredient import Ingredient
from IndexToTextConverter import IndexToTextConverter
from IngredientIndexer import IngredientIndexer
from MatchCreator import MatchCreator

class IngredientCreator:
    def __init__(self, ingredientIndexer, indexToTextConverter):
        self.ingredientIndexer = ingredientIndexer
        self.i2txt = indexToTextConverter
        self.currentId = 0
        self.ingredientName = ""
    
    def create_ingredient(self):
        new_ingredient = Ingredient(self.currentId, self.get_ingredient_name())
        new_ingredient.category = self.update('Category')
        new_ingredient.cuisines = self.update('Cuisine')
        new_ingredient.dishes = self.update('Dish')
        new_ingredient.groups = self.update('Group')
        new_ingredient.matches = MatchCreator(self.update_matches(False), False).create_matches()
        new_ingredient.group_matches = MatchCreator(self.update_matches(True), True).create_matches()
        return new_ingredient
        
    def update(self, style_name):
        self.ingredientIndexer.get_ingredient_index_bounds(self.currentId)
        return self.i2txt.get_names_from_indices(self.ingredientIndexer.get_indices(style_name))
    
    def update_matches(self, is_group):
        if is_group:
            return {
                    "1": self.update('MatchGroup1'), 
                    "2": self.update('MatchGroup2'),
                    "3": self.update('MatchGroup3'),
                    "4": self.update('MatchGroup4')
                    }
        else:
            return {
                    "1": self.update('Match1'), 
                    "2": self.update('Match2'),
                    "3": self.update('Match3'),
                    "4": self.update('Match4')
                    }
        
    def get_ingredient_name(self):
        return self.i2txt.get_name_from_index(self.ingredientIndexer.get_ingredient_name_index(self.currentId))
    
    def create_ingredient_list(self):
        ingredient_list = list()
        while self.currentId < len(self.ingredientIndexer.documentIndexer.indices['IngredientName']):
            try:
                ingredient = self.create_ingredient()
                ingredient_list.append(ingredient)
                self.currentId += 1
            except:
                break
        return ingredient_list

            
    
    

if __name__ == '__main__':
    from DocumentReader import DocumentReader
    from document_styles import document_styles
    from DocumentIndexer import DocumentIndexer
    from document_path import document_path

    dr = DocumentReader(document_path)
    di = DocumentIndexer(dr, document_styles)
    ii = IngredientIndexer(di)
    i2txt = IndexToTextConverter(dr)
    ic = IngredientCreator(ii, i2txt)
    ingredient = ic.create_ingredient()
    
    print(ingredient)

    