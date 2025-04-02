#include <iostream>
#include <vector>
#include <limits>

int main()

{
    std::vector<int> arr;
    int n, T;

    std::cout << "Enter the number of array elements: ";
    std::cin >> n;

    std::cout << "Enter the array elements: ";
    for (int i = 0; i < n; ++i)
    {
        int value;
        std::cin >> value;
        arr.push_back(value);
    }

    std::cout << "Enter the number T: ";
    std::cin >> T;

    int maxNegative = std::numeric_limits<int>::min();
    int maxNegativeIndex = -1;

    for (size_t i = 0; i < arr.size(); ++i)
    {
        if (arr[i] > T)
        {
            break;
        }
        if (arr[i] < 0 && arr[i] > maxNegative)
        {
            maxNegative = arr[i];
            maxNegativeIndex = i;
        }
    }

    if (maxNegativeIndex != -1)
    {
        std::cout << "Index of the first maximum negative element before the first >T: " << maxNegativeIndex << std::endl;
    }
    else
    {
        std::cout << "No negative elements found before the first >T." << std::endl;
    }

    return 0;
}