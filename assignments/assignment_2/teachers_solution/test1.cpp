#include <iostream>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
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
