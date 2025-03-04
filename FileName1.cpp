#include <iostream>
#include <limits>

int main() {
    int n;
    std::cout << "Input array size: ";
    std::cin >> n;

    int *A = new int[n];
    std::cout << "Input array elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }

    int minPositive = std::numeric_limits<int>::max();
    int minIndex = -1;

    for (int i = 0; i < n; ++i) {
        if (A[i] > 0 && A[i] < minPositive) {
            minPositive = A[i];
            minIndex = i;
        }
    }

    if (minIndex != -1) {
        std::cout << "Minimal positive element: " << minPositive << " with an index " << minIndex << std::endl;
    }
    else {
        std::cout << "There are no positive elements in the array" << std::endl;
    }

    return 0;
}