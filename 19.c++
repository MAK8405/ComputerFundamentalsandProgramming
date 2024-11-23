// خواندن یک رشته و تبدیل حروف کوچک آن به بزرگ
#include <iostream>
using namespace std;
int main()
{
    char s[20];
    int i;
    cout << "Enter a name: ";
    cin >> s;
    for (i = 0; s[i] != '\0'; i++)
        if ('a' <= s[i] && s[i] <= 'z')
            s[i] = (s[i] - 'a') + 'A';
    cout << "upper: " << s;
    return 0;
}
