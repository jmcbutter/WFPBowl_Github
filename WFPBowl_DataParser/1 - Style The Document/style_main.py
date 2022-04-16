import style_document
import style_group_names
import docx
import os


intermediate_file = "StyledIngredients.docx"


def run_style_document():
    read_file = "../../../IngredientPairs.docx"
    save_file = intermediate_file

    print(os.path.abspath(read_file))

    style_document.write_paragraphs_to_file(read_file, save_file)


def run_style_group():
    read_file = intermediate_file
    save_file = "UngroupedIngredients.docx"

    print(os.path.abspath(read_file))

    style_group_names.run(read_file, save_file)


def run():
    run_style_document()
    run_style_group()
    os.remove(intermediate_file)


if __name__ == '__main__':
    run()