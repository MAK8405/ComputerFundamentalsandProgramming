/* Print this
*234567
1*34567
12*4567
123*567
1234*67
12345*7
123456*
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    { // first round: i - 1 = 0 : 1<=0 so j in first round woult print.
        for (j = 1; j <= i - 1; j++)
            cout << j;
        // in the first round Pirnt the first *
        cout << '*';
        // in the first round Print 234567
        for (j = i + 1; j <= 7; j++)
            cout << j;
        cout << "\n";
    }
    return 0;
}