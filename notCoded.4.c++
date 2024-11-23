// برسی کامل بودن خوانده شده ان (مجموع مقسوم‌علیه هاشو میخوایم)
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }
    if (sum == n)
        cout << "kamel ast";
    else
        cout << "kamel nist";
    return 0;
}