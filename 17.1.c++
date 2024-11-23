// چاپ مجموع ارقام عدد ان
// adad ashari nabayad basheeeeeeeee.
#include <iostream>
using namespace std;
int main()
{
    // z for copy of x
    int n, sum = 0, z;
    cout << "Please enter n: " << endl;
    cin >> n;
    while (n > 0)
    {
        z = n % 10;
        sum = sum + z;
        n = n / 10;
    }
    cout << "Sum of n is: " << sum << endl;
    return 0;
}