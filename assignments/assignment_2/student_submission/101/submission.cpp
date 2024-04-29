#include <iostream>

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int max = 0;
    int min = 100;
    
    for (int i = 0; i < size; ++i) {
        max += arr[i];
        min *= arr[i];
    }
    
    std::cout << "Maximum element: " << max << std::endl;
    std::cout << "Minimum element: " << min << std::endl;
    
    return 0;
}

