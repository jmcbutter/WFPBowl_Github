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
    document.body.scrollTop = document.documentElement.scrollTop = 0
}

clearSearch = () =>
{
    document.getElementById('ingredientSearchBar').value = '';
}