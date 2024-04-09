import xml.etree.ElementTree as ET

def get_lines_in_function(xml_file):
    tree = ET.parse(xml_file)
    root = tree.getroot()
    
    function_lines = {}
    # Define the namespace
    namespace = {'src': 'http://www.srcML.org/srcML/src'}

    # Iterate through all function elements
    for function in root.findall('.//src:function', namespaces=namespace):
        #print(type(function))
        #print("printing:", ET.tostring(function))
        #print("Hahaha: ",ET.tostring(function.findall('.//src:name')))
        function_name = function.find("./src:name", namespaces=namespace).text
        function_body = function.find("./src:parameter_list/src:parameter", namespaces=namespace)
        #print("testing:", ET.tostring(function_body))
        #print("Count: "+ function_body.text)
        param_count = sum(1 for _ in function_body)
        
        # Store the number of lines for the function
        function_lines[function_name] = param_count
    
    return function_lines

# Example usage
xml_file = "codeFile/ast.xml"  # Provide the path to your srcML XML file
lines_in_functions = get_lines_in_function(xml_file)
for function_name, lines_count in lines_in_functions.items():
    print(f"Function {function_name} has {lines_count} lines.")