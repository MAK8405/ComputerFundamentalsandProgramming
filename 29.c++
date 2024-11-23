// خواندن ماتریس های عدد‌ آ و ب و محاسبه حاصلضرب داخلی آنها
#include <iostream>
using namespace std;
#define m 2
#define p 3
#define n 5
int main()
{
    int A[m][n], B[n][p], C[m][p], i, j, k;

    // تولید (خواندن آ)
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];

    // تولید (خواندن ب)
    for (i = 0; i < n; i++)
        for (j = 0; j < p; j++)
            cin >> B[i][j];

    // تولید سی (با محاسبه درایه‌های سی)
    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
        }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
            cout << C[i][j] << " ";
        cout << endl; // Move to the next row
    }
    return 0;
}