#include <iostream>
using namespace std;

int main()
{
    int n, f, i;
    float sum, seri;
    cout << "Enter a number: ";
    cin >> n;
    f = 1;
    i = 0;
    sum = 0.0;
    while (i <= n)
    {
        seri = f * 1.0 / (2 * i + 1); // Corrected the placement of 1.0 / (2 * i + 1)
        sum = sum + seri;
        i = i + 1;
        f = f * -1;
    }
    sum = 4 * sum;
    cout << sum << endl;
    return 0;
}
