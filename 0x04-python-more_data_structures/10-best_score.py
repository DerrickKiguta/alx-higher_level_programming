#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary:
        values = a_dictionary.values()
        max_value = max(values)
        for i, j in a_dictionary.items():
            if j == max_value:
                return i
    return None
