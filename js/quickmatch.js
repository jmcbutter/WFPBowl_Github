underlineFilters = (labels, selected_label) =>
{
    for (label in labels)
    {
        console.log(labels)
        console.log(`Filter--${label}`)
        var element = document.getElementById(`Filter--${labels[label]}`);
        element.style.textDecoration = "none";
    }

    var selected_element = document.getElementById(`Filter--${selected_label}`)
    selected_element.style.textDecoration = "underline";
}

scrollTop = () =>
{
    document.getElementById("selectedIngredients").scrollIntoView(false)
}

clearSearch = () =>
{
    document.getElementById('ingredientSearchBar').value = '';
}