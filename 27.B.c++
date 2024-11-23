// خواندن آرایه‌ای ان * ان از اعداد صفر و یک و برسی
// متقارنی
#include <iostream>
using namespace std;

#define n 3

int main()
{
    int x[n][n], i, j;
    char flag = '1'; // اولیه فرض: ماتریس تقارنی است

    // وارد کردن اعداد به ماتریس
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            cout << "عدد " << i + 1 << " و " << j + 1 << " را وارد کنید (0 یا 1): ";
            cin >> x[i][j];
        }

    // بررسی اینکه آیا ماتریس تقارنی است یا نه
    for (i = 0; i < n && flag; i++)
        for (j = 0; j < n; j++)
            if (x[i][j] != x[j][i])
            {
                flag = '0'; // فرض ابطال می‌شود
                break;
            }

    // نتیجه را چاپ کنید
    if (flag == '1')
        cout << "mothegharen";
    else
        cout << "na mothegharen";

    return 0;
}
