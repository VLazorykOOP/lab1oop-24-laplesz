#include <iostream>
#include <limits>

int main() {
    int n;
    std::cout << "������ ����� ������: ";
    std::cin >> n;
    
    int *A = new int[n];
    std::cout << "������ �������� ������: ";
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
        std::cout << "̳�������� �������� �������: " << minPositive << " � �������� " << minIndex << std::endl;
    }
    else {
        std::cout << "� ����� ���� �������� ��������." << std::endl;
    }

    return 0;
}