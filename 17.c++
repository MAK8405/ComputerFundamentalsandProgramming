// چاپ مجموع ارقام عدد ان
// همراه با مجموع ان و معکوسش(از ابتدا به انتها)
#include <iostream>
using namespace std;
int main()
{
    // m for inverse , x/10 = z, s1 for sum of n, s2 for sum of invers numbers + n.
    int n, x, m = 0, s1 = 0, s2, z;
    cin >> n;
    x = n;
    while (x > 0)
    {
        z = x % 10;
        s1 = s1 + z;
        // m * 10 is for 175 should be 571 (5 should be the 100 gun)
        m = m * 10 + z;
        x = x / 10;
    }
    s2 = n + m;
    cout << "sum of argham n is: " << s1 << endl
         << "sum of argham m is: " << s2;
    return 0;
}