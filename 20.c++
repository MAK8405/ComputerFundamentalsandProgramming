// خواندن و ذخیره سازی ۱۰ نام و سپس جستجوی علی در آنها
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[10][20];
    int i, index;
    for (i = 0; i <= 9; i++)
    {
        cout << "Enter a name: ";
        cin >> s[i];
    }
    index = -1; // فرض بر عدم وجود "Ali"
    for (i = 0; i <= 9; i++)
        if (strcmp(s[i], "Ali") == 0)
        { // مقایسه رشته نام با "Ali"
            index = i;
            break;
        }
    if (index == -1)
        cout << "Not Found";
    // inja i + 1 nabod i bod ma behtaresh kardim.
    else
        cout << "Found in " << i + 1 << "th position";
    return 0;
}