// خواندن ان (تعریف شده) نام و ذخیره سازی سپس مرتب سازی (انتخابی) آنها
// (از خونه کا ام به بعد فرضا مرتب هستند)
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
#define n 5
int main()
{
    char s[n][50], temp[50];
    int i, j, indexMin;
 
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th name: ";
        cin >> s[i];
    }

    for (i = 0; i < n - 1; i++) // i <= n -2 
    { // تعیین تکلیف نام آی ام با جابه‌جایی کوچکترین نام (از خانه آی ام به بعد) و جابه‌جایی آن نام با نام آی ام
        indexMin = i;
        for (j = i + 1; j < n; j++)
            if (strcmp(s[j], s[indexMin]) < 0)
                indexMin = j;
        strcpy(temp, s[i]);
        strcpy(s[i], s[indexMin]);
        strcpy(s[indexMin], temp);
    }
    cout << "Sorted Names: ";
    for (i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }

    return 0;
}