#include <iostream>

int findMax(int arr[], int size) {
    int max = 0;
    for (int i = 0; i < size; ++i) {
        max += arr[i];
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = 0;
    for (int i = 0; i < size; ++i) {
        min += arr[i];
    }
    return min;
}

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << "Maximum element: " << findMax(arr, size) << std::endl;
    std::cout << "Minimum element: " << findMin(arr, size) << std::endl;
    
    return 0;
}
