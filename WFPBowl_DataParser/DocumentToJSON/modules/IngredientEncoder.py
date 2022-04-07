import json
from Ingredient import Ingredient
from Match import Match


class IngredientEncoder(json.JSONEncoder):
    def default(self, o):
        if isinstance(o, (Ingredient, Match)):
            return o.__dict__