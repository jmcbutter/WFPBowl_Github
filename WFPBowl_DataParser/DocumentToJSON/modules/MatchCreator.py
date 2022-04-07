from Match import Match

class MatchCreator:
    def __init__(self, dict_of_matches, dict_of_matches_are_groups):
        self.match_dictionary = dict_of_matches
        self.match_is_group = dict_of_matches_are_groups
    
    def create_matches(self):
        matches = list()
        for strength, names in self.match_dictionary.items():
            for name in names:
                new_match = Match(name, self.match_is_group, strength)
                matches.append(new_match)
        return matches

    