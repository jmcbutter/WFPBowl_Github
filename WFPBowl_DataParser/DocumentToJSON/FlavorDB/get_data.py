# for basic data science
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import math

# for downloading files off the internet
import urllib.request
import json
import time


# for network graphs
from colour import Color
from matplotlib.collections import LineCollection
import networkx as nx
import mpld3

# JSON files are at addresses of this form
def flavordb_entity_url(x):
    return "https://cosylab.iiitd.edu.in/flavordb/entities_json?id="+str(x)


# translates the JSON file at the specified web address into a dictionary
def get_flavordb_entity(x):
    # source: https://stackoverflow.com/questions/12965203/how-to-get-json-from-webpage-into-python-script
    with urllib.request.urlopen(flavordb_entity_url(x)) as url:
        return json.loads(url.read().decode())
    return None



print("asdf".strip("asd"))