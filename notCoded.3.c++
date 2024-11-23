// چاپ ۱۰۰ جمله فیبوناچی
#include <iostream>
using namespace std;
int main()
{
    long long int a = 1, b = 1, i, c;
    cout << a << " " << b << " ";
    c = a + b;
    for (i = 3; i <= 100; i++)
    {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
    cout << endl;
    return 0;
}