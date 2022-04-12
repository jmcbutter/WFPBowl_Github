import json

class Ingredient:
    def __init__(self):
        self.id = 0
        self.name = ""
        self.alternate_names = ""
        self.category = ""
        self.groups = list()
        self.cuisines = list()
        self.dishes = list()
        self.pairedIngredients = list()
        self.pairedGroups = list()

    def __repr__(self):
        return (f"\n\nIngredient: {self.name} \n"
                f"ID: {self.id} \n"
                f"Category: {self.category} \n"
                f"Groups: {self.groups} \n"
                f"Cuisines: {self.cuisines} \n"
                f"Dishes: {self.dishes} \n"
                f"pairedIngredients: {self.pairedIngredients}\n"
                f"pairedGroups: {self.pairedGroups} \n\n" )


class Match:
    def __init__(self, ingredient_id, strength, match_factor):
        self.ingredientId = ingredient_id
        self.strength = 100
        self.factor = int(match_factor * 100)
   
    def __repr__(self):
       return f"{self.ingredientId}: {self.strength} : {self.factor}"


class GroupMatch:
    def __init__(self, ingredient_id, strength, match_factor):
        self.ingredientId = ingredient_id
        self.strength = 100 - 5*strength
        self.factor = int(match_factor * 100)
   
    def __repr__(self):
       return f"{self.name}: {self.strength} : {self.match_factor}"


class IngredientEncoder(json.JSONEncoder):
    def default(self, o):
        if isinstance(o, (Ingredient, Match, GroupMatch)):
            return o.__dict__

#######################################################################

def get_ingredients_from_json(json_file):
    f = open(json_file)
    data = json.load(f)
    ingredients = {}
    new_ingredients = []
    for ingredient in data:
        ingredients[ingredient["name"].lower()] = ingredient["id"]
    for i in data:
        new_ingredient = Ingredient()
        new_ingredient.id = i["id"]
        new_ingredient.name = i["name"]
        new_ingredient.alternate_names = i["alternate_names"]
        new_ingredient.category = i["category"]
        new_ingredient.groups = i["groups"]
        new_ingredient.cuisines = i["cuisines"]
        new_ingredient.dishes = i["dishes"]
        for match in i["matches"]:
            if match["name"].lower() in ingredients.keys():
                match_ingredient_id = ingredients[match["name"].lower()]
                strength = match["strength"]
                match_factor = match["match_factor"]
                new_ingredient.pairedIngredients.append(Match(match_ingredient_id, strength, match_factor))
        new_ingredient.pairedIngredients.append(Match(new_ingredient.id, 100, 1))
        print(new_ingredient)
        new_ingredients.append(new_ingredient)
    return new_ingredients



ingredients = get_ingredients_from_json("../4 - document_reader/unvalidated_ingredient_json_data.json")

with open('ingredient-data.json', 'w') as outfile:
        json.dump([ingredient for ingredient in ingredients], outfile, separators=(",", ":"), indent=4, cls=IngredientEncoder) 

