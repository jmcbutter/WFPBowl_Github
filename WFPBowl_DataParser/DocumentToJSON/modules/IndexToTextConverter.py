class IndexToTextConverter:
    def __init__(self, documentReader):
        self.documentReader = documentReader
        
    def get_names_from_indices(self, index_list):
        return [self.documentReader.text_list[i] for i in index_list]
    
    def get_name_from_index(self, index):
        return self.documentReader.text_list[index]