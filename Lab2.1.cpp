#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input c: ";
    cin >> c;
    cout << "Input d: ";
    cin >> d;
    int res1 = (((a << 4) + a) + ((c << 8) + (c << 6) - (c << 3)) >> 5) - ((b << 7) - (b << 3)) + ((d << 7) - d);
    int res2 = ((17 * a + 312 * c) / 32) - b * 120 + d * 127;
    cout << "Result: " << res1 << endl;
    cout << "Mathematical result of ((17 * a + 312 * c) / 32) - b * 120 + d  * 127: " << res2 << endl;
    return 0;
}