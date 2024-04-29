#include <iostream>
#include <algorithm> // For std::min_element and std::max_element

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Using std::min_element and std::max_element (STL approach)
    int minElement = *std::min_element(arr, arr + size);
    int maxElement = *std::max_element(arr, arr + size);

    std::cout << "Maximum element: " << maxElement << std::endl;
    std::cout << "Minimum element: " << minElement << std::endl;

    return 0;
}