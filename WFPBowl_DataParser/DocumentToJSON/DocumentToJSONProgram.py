import datetime
import json
import csv
from modules.IngredientEncoder import IngredientEncoder
from modules.SetupIngredientCreator import ingredientCreator
    
ingredient_list = ingredientCreator.create_ingredient_list()

with open('json_test1.json', 'w') as outfile:
    json.dump([ingredient for ingredient in ingredient_list], outfile, separators=(",", ":"), indent=4, cls=IngredientEncoder) 

print(datetime.datetime.now().strftime("%H:%M:%S"))