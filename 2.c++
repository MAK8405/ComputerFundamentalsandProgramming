// خواندن ۳ عدد و برسی نامساوی مثلث
#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter 3 Numbers: \n";
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a))
        cout << "True\n";
    else
        cout << "False\n";
    return 0;
}