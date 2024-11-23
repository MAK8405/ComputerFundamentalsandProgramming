// خواندن ۱۰۰ عدد و محاسبه ماکسیمم آنها
#include <iostream>
using namespace std;
int main()
{
    int i;
    float x, max;
    cout << "Enter a number: ";
    cin >> max; // cin >> x; max = x ;
    for (i = 2; i <= 100; i++)
    {
        cout << "Enter " << i << "th number: ";
        cin >> x;
        if (x > max)
            max = x;
    }
    cout << "Max: " << max << endl;
    return 0;
}