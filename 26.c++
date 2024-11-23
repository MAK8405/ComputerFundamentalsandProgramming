// خواندن آرایه‌ای ان * ان و برسی متقارن بودن آن
#include <iostream>
using namespace std;
#define n 3
int main()
{
    float x[n][n];
    int i, j;
    char flag = 'y'; // فرض اولیه بر متقارن بودن
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Enter the " << i + 1 << "th and " << j + 1 << "th numbers: ";
            cin >> x[i][j];
        }
    }
    for (i = 1; i < n && flag == 'y'; i++)
        for (j = 0; j < i; j++)
            if (x[i][j] != x[j][i])
            {
                flag = 'N'; // باطل شدن فرض اولیه
                break;
            }
    if (flag == 'y')
        cout << "mothegharen ast";
    else
        cout << "motegharen nist";
    return 0;
}