#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main()
{
    int n, m;
    cout << "Input n (rows) and m (columns): ";
    cin >> n >> m;

    if (n <= 0 || m <= 0 || n > 100 || m > 10)
    {
        cout << "Wrong array size" << endl;
        return 1;
    }

    vector<double> matrix(n * m);
    cout << "Input array elements (" << n * m << " numbers):\n";

    for (int i = 0; i < n * m; i++)
    {
        cin >> matrix[i];
    }

    vector<double> minValues;
    for (int i = 0; i < n * m; i += m)
    {
        double minVal = numeric_limits<double>::max();
        for (int j = i; j < min(i + m, n * m); j++)
        {
            if (matrix[j] < minVal)
            {
                minVal = matrix[j];
            }
        }
        minValues.push_back(minVal);
    }

    double Z = minValues[0];
    for (double minValue : minValues)
    {
        if (minValue > Z)
        {
            Z = minValue;
        }
    }

    cout << "Z: " << Z << endl;
    return 0;
}
