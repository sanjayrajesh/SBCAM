#include <iostream>
#include <cstdlib>

int main() {
    // Allocate memory using malloc
    int *ptr1 = (int*)malloc(sizeof(int));
    int *ptr2 = (int*)malloc(sizeof(int));
    char *ptr3 = (char*)malloc(sizeof(char) * 10);

    // Check if memory allocation was successful
    if (ptr1 == nullptr || ptr2 == nullptr || ptr3 == nullptr) {
        std::cout << "Memory allocation failed." << std::endl;
        return 1;
    }

    // Deallocate memory
    free(ptr1);
    free(ptr2);
    free(ptr3);
    std::cout << "Exiting";
    return 0;
}
