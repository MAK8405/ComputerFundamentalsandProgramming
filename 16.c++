// خواندن ۲ عدد و محاسبه ب.م.م و ک.م.م آنها
#include <iostream>
using namespace std;
int main()
{
    int a, b, x, y, z, BMM, KMM;
    cin >> a >> b;
    // x = 5 , y = 3
    x = a;
    y = b;
    while (y != 0)
    {
        // temp = 5
        z = x;
        // x = 3
        x = y;
        y = z % y;
    }
    // e.g: (5,3) BMM is 1 | (5,0) BMM is 5
    BMM = x;
    // e.g: (5,3) KMM is 15 | (5,0) KMM is 0
    KMM = (a * b) / BMM;
    cout << BMM << endl
         << KMM;
    return 0;
}