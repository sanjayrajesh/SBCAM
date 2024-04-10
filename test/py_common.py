import xml.etree.ElementTree as ET
import subprocess

def parse_xml(xml_file):
    """Parse the XML file and return the root element."""
    tree = ET.parse(xml_file)
    return tree.getroot()

def generate_ast(source_code_file, output_file):
    subprocess.run(['srcml', source_code_file, '-o', output_file])