// خواندن آرایه‌ای ان * ان از اعداد صفر و یک و برسی
// برسی رابطه متعدی
#include <iostream>
using namespace std;
#define n 3
int main()
{
    int x[n][n], i, j, k,
        flag = 1; // فرض اولیه بر متعدی بودن
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Enter the " << i + 1 << "th and " << j + 1 << "th numbers: ";
            cin >> x[i][j];
        }
    }
    for (i = 0; i < n && flag; i++)
        for (j = 0; j < n && flag; j++)
            for (k = 0; k < n && flag; k++)
                if (x[i][j] == 1 && x[j][k] == 1 && x[i][k] == 0)
                    flag = 0;
    if (flag == 1)
        cout << "متعدی است";
    else
        cout << "متعدی نیست";
    return 0;
}