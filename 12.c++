/* Print this
1
22
333
4444
55555
666666
7777777
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= i; j++)
            cout << i;
        cout << "\n";
    }
    return 0;
}
