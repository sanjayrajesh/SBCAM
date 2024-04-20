import xml.etree.ElementTree as ET
import subprocess
from py_constants import INSTRUCTOR_BASE_PATH, INSTRUCTOR_JSON_FILE

#Generate XML File using srcML which generates AST representation of a source code in XML Format
def generate_ast(source_code_file, output_file):
    subprocess.run(['srcml', source_code_file, '-o', output_file])

#Parse the XML file and return the root element of the XML tree.
def parse_xml(xml_file):
    tree = ET.parse(xml_file)
    return tree.getroot()
