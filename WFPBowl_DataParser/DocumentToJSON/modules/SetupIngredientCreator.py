from IngredientCreator import IngredientCreator
from DocumentReader import DocumentReader
from document_styles import document_styles
from DocumentIndexer import DocumentIndexer
from IngredientIndexer import IngredientIndexer
from IndexToTextConverter import IndexToTextConverter
from document_path import document_path

documentReader = DocumentReader(document_path)
documentIndexer = DocumentIndexer(documentReader, document_styles)
ingredientIndexer = IngredientIndexer(documentIndexer)
i2txt = IndexToTextConverter(documentReader)
ingredientCreator = IngredientCreator(ingredientIndexer, i2txt)