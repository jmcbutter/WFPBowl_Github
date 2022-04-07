import json

class Ingredient:
    def __init__(self, currentCount, name):
        self.id = currentCount
        self.name = name
        self.category = ""
        self.groups = list()
        self.cuisines = list()
        self.dishes = list()
        self.matches = dict()
        self.group_matches = dict()
    

        
    def __repr__(self):
        return (f"\n\nIngredient: {self.name} \n"
                f"ID: {self.id} \n"
                f"Category: {self.category} \n"
                f"Groups: {self.groups} \n"
                f"Cuisines: {self.cuisines} \n"
                f"Dishes: {self.dishes} \n"
                f"Matches: {self.matches}\n"
                f"Group Matches: {self.group_matches} \n\n" )