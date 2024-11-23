// خواندن دو بردار ان تایی از اعداد و محاسبه حاصل ضرب داخلی آنها
#include <iostream>
using namespace std;
#define n 5
int main()
{
    int x[n], y[n], i, m = 0;

    for (i = 0; i < n; i++)
        cin >> x[i];

    for (i = 0; i < n; i++)
        cin >> y[i];

    for (i = 0; i < n; i++)
        m = m + x[i] * y[i];

    cout << "(x^t).y = " << m;
}