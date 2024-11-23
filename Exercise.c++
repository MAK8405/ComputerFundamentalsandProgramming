// خواندن ان (تعریف شده) نام و ذخیره سازی سپس مرتب سازی (انتخابی) آنها
// (از خونه کا ام به بعد فرضا مرتب هستند)
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main()
{
    int n, m = -1;
    float s1 = 0, s2 = 0;
    cin >> n;
    if (n > 0)
    {
        for (int i = 2; i <= 2 * n; i = i + 2)
        {
            m = m * 1;
            s1 = s1 + m / i;
        }
        s2 = 5 * s1;
        cout << s2;
    }

    return 0;
}