// خواندن ۳ عدد و برسی وجود مثلث قاعم الزاویه
#include <iostream>
using namespace std;
int main()
{
    float x, y, z, a, b, c;
    cout << "Enter 3 numbers: \n";
    cin >> x >> y >> z;
    if (x >= y)
    {
        if (x >= z)
        {
            c = x;
            a = y;
            b = z;
        }
        else
        {
            c = z;
            a = x;
            b = y;
        }
    }
    else
    {
        if (y >= z)
        {
            c = y;
            a = x;
            b = z;
        }
        else
            c = z;
        a = x;
        b = y;
    }
    if (c * c == a * a + b * b)
        cout << "Ghaemol Zaviyast \n";
    else
        cout << "Ghaemol Zaviye Nist \n";
    return 0;
}