// خواندن تعدادی عدد تا ورود عدد منفی و محاسبه میانگین
#include <iostream>
using namespace std;
int main()
{ // sum is 0 because if user enter only zero numbers we could show zero to user.
    // ave is zero if the first number that user enter was less than zero say ave of 0/0 is zero.
    float x, sum = 0, ave = 0;
    int count;
    for (count = 0;; count++)
    {
        cout << "Enter a number: \n";
        cin >> x;
        if (x < 0)
            break;
        sum = sum + x;
    }
    if (count > 0)
        ave = sum / count;
    // ostad in flochart said if x < 0 and count = 0 print error.
    cout << "Ave is: " << ave << endl;
    return 0;
}