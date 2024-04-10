# CONSTANTS: PATH SETTINGS
# ------------------------------
CODE_INPUT = "codeFile"
XML_OUTPUT = "codeFile"
JSON_FILE = "quality_metrics.json"

# Define the namespace
NAMESPACE_CPP = {'cpp': 'http://www.srcML.org/srcML/cpp'}
NAMESPACE_SRC = {'src': 'http://www.srcML.org/srcML/src'}

FUNCTION_MAP = {
    'NF': 'count_function_declarations_excluding_main',
    'NP': 'get_parameter_count_in_functions',
    'NPt-s': 'count_simple_pointers',
    'NAdd-s': 'count_simple_addresses',
    'NPt-ds': 'count_array_pointers',
    'NStr': 'count_structs',
    'NStrM': 'count_struct_members',
    'NStrT': 'count_struct_typedefs',
    'NStrI': 'count_struct_instances',
    'NStrC': 'count_struct_calls',
    'NFRec': 'count_recursive_functions',
    'NCRec': 'count_recursive_function_calls',
    'NIFPar': 'count_parameters_in_conditional',
    'NRRec': 'count_recursive_returns',
    'NRNRec': 'count_non_recursive_returns',
    'NMalloc': 'count_malloc_functions',
    'NSizeof': 'count_sizeof',
    'NFree': 'count_free_functions'
}

