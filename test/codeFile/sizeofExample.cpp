#include <iostream>

int main() {
    int size_int = sizeof(int);
    int size_float = sizeof(float);
    int size_double = sizeof(double);
    int size_char = sizeof(char);

    std::cout << "Size of int: " << size_int << std::endl;
    std::cout << "Size of float: " << size_float << std::endl;
    std::cout << "Size of double: " << size_double << std::endl;
    std::cout << "Size of char: " << size_char << std::endl;

    return 0;
}
