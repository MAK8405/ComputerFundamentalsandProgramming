// Read x and n then calculate this series
// 1 + x + x^2 / 2! + x^3 / 3! + ... + x ^ n / n!
#include <iostream>
using namespace std;

int main()
{
    int x, n, i = 1;
    float p, sum = 1, f = 1;

    cout << "Enter the value of x and n: ";
    cin >> x >> n;

    p = x;

    while (i <= n)
    {
        sum = sum + (p / f);
        i = i + 1;
        p = p * x;
        f = f * i;
    }

    cout << "Result of the series: " << sum << endl;

    return 0;
}
