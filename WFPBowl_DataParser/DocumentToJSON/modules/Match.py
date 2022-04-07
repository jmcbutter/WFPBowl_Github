class Match:
    def __init__(self, name, match_is_group, strength):
        self.name = name
        self.match_is_group = match_is_group
        self.strength = strength
        self.set_match_factor()

    def set_match_factor(self):
        if self.strength == 1:
            self.match_factor = 0.8
        elif self.strength == 2:
            self.match_factor = 0.6
        elif self.strength == 3:
            self.match_factor = 0.4
        elif self.strength == 4:
            self.match_factor = 0.2
   
    def __repr__(self):
       return f"{self.name}: {self.strength}"