export function underlineFilters(label, selected = true)
{
    console.log("Testing Testing Testing you idiot")
    var element = document.getElementById(`Filter--${label}`);
    if (selected == true) {
        element.style.textDecoration = "underline";
    } else {
        element.style.textDecoration = "none";
    }
}