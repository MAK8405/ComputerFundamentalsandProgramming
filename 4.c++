// خواندن ۱۰۰ عدد و محاسبه میانگین
#include <iostream>
using namespace std;
int main()
{ // x for getting value from user.
    // sum is 0 because if user enter only zero numbers we could show zero to user.
    float x, sum = 0, ave;
    int i;
    for (i = 1; i <= 10; i++)
    {
        cout << "Enter " << i << "th Number\n";
        cin >> x;
        sum = sum + x;
    }
    ave = sum / 10;
    cout << "Ave is: " << ave << endl;
    return 0;
}