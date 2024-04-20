# CONSTANTS: PATH SETTINGS
# ------------------------------
# INSTRUCTOR
INSTRUCTOR_BASE_PATH = "../assignments/assignment_{}/teachers_solution/"
INSTRUCTOR_SOLUTION = INSTRUCTOR_BASE_PATH + "{}"
INSTRUCTOR_XML_OUTPUT = INSTRUCTOR_BASE_PATH + "{}.xml"
INSTRUCTOR_JSON_FILE = INSTRUCTOR_BASE_PATH + "quality_metrics.json"

# STUDENT_SUBMISSION
STUDENT_BASE_PATH = "../assignments/assignment_{}/student_submission/"
STUDENT_INDIVIDUAL = STUDENT_BASE_PATH + "{}/"
STUDENT_SUBMISSION = STUDENT_INDIVIDUAL + "{}"
STUDENT_XML_OUTPUT = STUDENT_INDIVIDUAL + "{}.xml"

#RESULTS
RESULTS_BASE_PATH = "../results/"
RESULTS_ASSIGNMENT = RESULTS_BASE_PATH + "Assignment_{}_Results.xlsx"

PENALTY_FACTOR = 0.95


# Define the namespace
NAMESPACE_CPP = {'cpp': 'http://www.srcML.org/srcML/cpp'}
NAMESPACE_SRC = {'src': 'http://www.srcML.org/srcML/src'}

FUNCTION_MAP = {
    'NF': 'count_function_declarations_excluding_main',
    'NP': 'get_parameter_count_in_functions',
    'NC': 'count_function_calls',
    'NR': 'count_returns',
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
