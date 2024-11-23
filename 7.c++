// خواندن عدد ان و برسی اول بودن آن
// Nokte: hatman n bayad int bashe vagarna baghi mande omran dasthe bashim.
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    char flag = 'y'; // farz bar aval bodan n
    cin >> n;
    if (n % 2 == 0)
        flag = 'N'; // farz avaliye batel astl
    else
    {
        for (i = 3; i <= n / 2; i = i + 2)
            if (n % i == 0)
            {
                flag = 'N'; // farz avaliye batel ast
                break;
            }
    }
    if (flag == 'y')
        cout << "aval ast \n";
    else
        cout << "aval nist" << endl;
    return 0;
}