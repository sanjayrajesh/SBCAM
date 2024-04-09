#include <iostream>

// Function that takes an array pointer as a parameter
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function that takes two array pointers as parameters
void printArrays(int arr1[], int size1, char arr2[], int size2) {
    std::cout << "Array 1: ";
    for (int i = 0; i < size1; ++i) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array 2: ";
    for (int i = 0; i < size2; ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    printArray(array, 5);

     int array1[5] = {1, 2, 3, 4, 5};
    char array2[3] = {'a', 'b', 'c'};

    printArrays(array1, 5, array2, 3);

    return 0;
}
