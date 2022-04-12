using System.Collections.ObjectModel;
using System.Collections.Specialized;
using System.Text.RegularExpressions;

namespace WFPBowl_Github.Features.IngredientMatch
{
    public class IngredientFilter
    {
        private string _category = "all";
        private string _searchText = "";
        private List<Ingredient> _ingredients;

        public string Category { 
            get
            {
                return _category;
            } 
            set
            {
                _category = value;
                FilterIngredients();
            } 
        }
        public string SearchText
        {
            get
            {
                return _searchText;
            }
            set
            {
                _searchText = value;
                RegexPattern = $@"(?i)\b({value}.+?)(?:,|$)";
                FilterIngredients();
            }
        }
        public string RegexPattern { get; set; }

        public List<Ingredient> Ingredients { 
            get
            {
                return _ingredients;
            }
            set
            {
                _ingredients = value;
                VisibleIngredients = value;
            } 
        }
        public List<Ingredient> Selected { get; set; }
        public List<Ingredient>? VisibleIngredients { get; set; }

        private void FilterIngredients()
        {
            if(_category != "all" && _searchText != "")
            {
                VisibleIngredients = Ingredients.Where(i => Regex.IsMatch(i.Name, RegexPattern) && i.Category == Category).OrderByDescending(x => x.Rating).ThenBy(x => x.Name).ToList();
            }
            else if(_category != "all")
            {
                VisibleIngredients = Ingredients.Where(i => i.Category == Category).OrderByDescending(x => x.Rating).ThenBy(x => x.Name).ToList();
            }
            else if(_searchText != "")
            {
                VisibleIngredients = Ingredients.Where(i => Regex.IsMatch(i.Name, RegexPattern)).OrderByDescending(x => x.Rating).ThenBy(x => x.Name).ToList();
            }
            else
            {
                VisibleIngredients = Ingredients.OrderByDescending(x => x.Rating).ThenBy(x => x.Name).ToList();
            }
        }

        private void UpdateRatings()
        {
            if (Selected.Count() != 0)
            {
                foreach (Ingredient ingredient in Ingredients) ingredient.GetRating(Selected);
                foreach (Ingredient ingredient in Selected) ingredient.GetRating(Selected);
            }
            else
            {
                foreach (Ingredient ingredient in Ingredients) ingredient.Rating = 100;
            }
        }

        public void AddIngredientToSelection(Ingredient ingredient)
        {
            Selected.Add(ingredient);
            Ingredients.Remove(ingredient);
            UpdateRatings();
            FilterIngredients();
        }

        public void RemoveIngredientFromSelection(Ingredient ingredient)
        {
            Selected.Remove(ingredient);
            Ingredients.Add(ingredient);
            UpdateRatings();
            FilterIngredients();
        }

        public IngredientFilter(List<Ingredient> ingredients)
        {
            Ingredients = ingredients;
            RegexPattern = "";
            Selected = new List<Ingredient>();
        }

    }
}
