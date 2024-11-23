/* Print this
      1
     121
    12321
   1234321
  123454321
 12345654321
1234567654321
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7 - i; j++)
            cout << ' ';
        for (j = 1; j <= i; j++)
            cout << j;
        for (j = i - 1; j >= 1; j--)
            cout << j;
        cout << '\n';
    }
    return 0;
}