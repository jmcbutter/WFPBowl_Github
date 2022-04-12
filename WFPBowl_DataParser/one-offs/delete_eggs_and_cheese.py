import docx

def delete_animal_products(path):
    document = docx.Document(path)
    for paragraph in document.paragraphs:
        if not paragraph.style.name == "IngredientName":
            if "cheese" in paragraph.text[0:6].lower() and "cheesecake" not in paragraph.text:
                delete_paragraph(paragraph)
            if "eggs" in paragraph.text[0:4].lower():
                delete_paragraph(paragraph)
            if "honey" in paragraph.text[0:5].lower():
                delete_paragraph(paragraph)
            if "butter" in paragraph.text[0:6].lower():
                delete_paragraph(paragraph)
            if "cream" in paragraph.text[0:5].lower():
                delete_paragraph(paragraph)
            if "ghee" in paragraph.text[0:4].lower():
                delete_paragraph(paragraph)
    document.save(path)

def delete_paragraph(paragraph):
    p = paragraph._element
    p.getparent().remove(p)
    p._p = p._element = None

path = "../../../IngredientPairs.docx"
delete_animal_products(path)