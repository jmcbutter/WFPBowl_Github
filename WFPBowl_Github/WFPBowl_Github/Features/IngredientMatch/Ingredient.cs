using System.Collections;

namespace WFPBowl_Github.Features
{

    public class Ingredient
    {
        public int Id { get; set; }
        public string Name { get; set; } = "";
        public int Rating { get; set; } = 100;
        public string Category { get; set; } = "";
        public List<Pair> PairedIngredients { get; set; } = new List<Pair>();
        public bool IsSelected { get; set; } = false;

        public void GetRating(List<Ingredient> selectedIngredients)
        {
            IngredientRatingCalculator calculator = new IngredientRatingCalculator();
            Rating = calculator.CalculateRating(this, selectedIngredients);       
        }
    }

    public class Pair
    {
        public int IngredientId { get; set; }
        public int Strength { get; set; }
        public int Factor { get; set; }
    }
}


