// خواندن ان (تعریف شده) نام و ذخیره سازی و سپس جستجوی مینیمم آن
#include <iostream>
#include <string.h>
using namespace std;
#define n 5
int main()
{
    char s[n][50], min[n];
    int i, indexMin;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th name: ";
        cin >> s[i];
    }
    indexMin = 0;
    for (i = 1; i < n; i++)
    {
        if (strcmp(s[i], s[indexMin]) < 0)
            indexMin = i;
    }
    strcpy(min, s[indexMin]);
    cout << "Min: " << min;
    return 0;
}