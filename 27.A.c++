// خواندن آرایه‌ای ان * ان از اعداد صفر و یک و برسی
// رابطه انعکاسی
#include <iostream>
using namespace std;
#define n 5
int main()
{
    float x[n][n];
    int i, j, flag = 1; // فرض اولیه بر انعکاسی بودن
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Enter the " << i + 1 << "th and " << j + 1 << "th numbers: ";
            cin >> x[i][j];
        }
    }
    for (i = 0; i < n; i++)
        if (x[i][i] != 1)
        {
            flag = 0; // باطل شدن فرض اولیه
            break;
        }
    if (flag == 1)
        cout << "enekasi ast";
    else
        cout << "enekasi nist";
    return 0;
}