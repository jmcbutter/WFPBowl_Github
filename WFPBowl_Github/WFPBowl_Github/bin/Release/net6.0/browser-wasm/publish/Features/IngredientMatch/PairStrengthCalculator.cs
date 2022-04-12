namespace WFPBowl_Github.Features
{
    public class IngredientRatingCalculator
    {
        private List<IngredientPair> GetPairs(Ingredient ingredientToMatch, List<Ingredient> ingredientsInBowl)
        {
            List<IngredientPair> pairs = new List<IngredientPair>();
            foreach (Ingredient ingredient in ingredientsInBowl)
            {
                pairs.Add(new IngredientPair(ingredientToMatch, ingredient));
            }

            return pairs;
        }

        private float CalculateAverageFactoredStrength(List<IngredientPair> pairs)
        {
            float factoredStrength = 0;

            foreach (IngredientPair pair in pairs)
            {
                factoredStrength += pair.PairingStrength * pair.PairingFactor;
            }

            return factoredStrength / pairs.Count();
        }

        private void UpdateUnmatchedPairs(List<IngredientPair> pairs)
        {
            float factoredStrength = CalculateAverageFactoredStrength(pairs);
            IEnumerable<IngredientPair> unmatchedPairs = pairs.Where(x => x.PairingStrength == 0);

            foreach (IngredientPair pair in unmatchedPairs)
                pair.PairingStrength = factoredStrength;
        }

        private int CalculateTotalStrength(List<IngredientPair> pairs)
        {
            float totalStrength = 0;

            foreach (IngredientPair pair in pairs)
            {
                totalStrength += pair.PairingStrength;
            }

            return (int)(totalStrength / pairs.Count() * 100);
        }

        public int CalculateRating(Ingredient ingredientToMatch, List<Ingredient> ingredientsInBowl)
        {
            List<IngredientPair> pairs = GetPairs(ingredientToMatch, ingredientsInBowl);
            UpdateUnmatchedPairs(pairs);
            return CalculateTotalStrength(pairs);

        }
    }

    public class IngredientPair
    {
        public float PairingStrength { get; set; } = 0;
        public float PairingFactor { get; set; } = 0;

        public IngredientPair(Ingredient ingredientToMatch, Ingredient ingredientInBowl)
        {
            Pair match = ingredientToMatch.PairedIngredients.Where(x => x.IngredientId == ingredientInBowl.Id).FirstOrDefault();

            if (match != null)
            {
                PairingStrength = match.Strength / 100;
                PairingFactor = match.Factor / 100;
            }
        }
    }
}
