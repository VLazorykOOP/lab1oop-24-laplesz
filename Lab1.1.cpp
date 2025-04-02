#include <iostream>
#include <limits>

int main()
{
    int N;
    std::cout << "Input array size: ";
    std::cin >> N;

    int A[N];
    std::cout << "Input " << N << " element: ";
    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
    }

    int minPos = std::numeric_limits<int>::max();
    int minIndex = -1;

    for (int i = 0; i < N; i++)
    {
        if (A[i] > 0 && A[i] < minPos)
        {
            minPos = A[i];
            minIndex = i;
        }
    }

    if (minIndex != -1)
    {
        std::cout << "Мінімальний додатний елемент: " << minPos << std::endl;
        std::cout << "Його індекс: " << minIndex << std::endl;
    }
    else
    {
        std::cout << "У масиві немає додатних елементів." << std::endl;
    }

    return 0;
}