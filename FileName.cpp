#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int n, T;
    cout << "Input array size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Input array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Input T: ";
    cin >> T;

    int first_greater_idx = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > T) {
            first_greater_idx = i;
            break;
        }
    }

    if (first_greater_idx == -1) {
        cout << "There is no element in the array larger than T." << endl;
        return 0;
    }

    int max_neg = numeric_limits<int>::min();
    int max_neg_idx = -1;

    for (int i = 0; i < first_greater_idx; i++) {
        if (arr[i] < 0 && arr[i] > max_neg) {
            max_neg = arr[i];
            max_neg_idx = i;
        }
    }

    if (max_neg_idx != -1) {
        cout << "The number of the first maximum negative element: " << max_neg_idx + 1 << std::endl;
    }
    else {
        cout << "There are no negative numbers among the elements up to the first one greater than T." << std::endl;
    }

    return 0;
}
