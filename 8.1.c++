// خواندن ۱۰۰ عدد و محاسبه ماکسیمم آنها و مینیمم آنها
#include <iostream>
using namespace std;
int main()
{
    float x, max, min;
    int i;
    cout << "Enter 1th number: ";
    cin >> x;
    max = x;
    min = x;
    for (i = 2; i <= 10; i++)
    {
        cout << "Enter " << i << "th Number: ";
        cin >> x;
        if (x > max)
            max = x;
        if (x < min)
            min = x;
    }
    cout << "Max is: " << max << endl
         << "Min is: " << min << endl;
    return 0;
}