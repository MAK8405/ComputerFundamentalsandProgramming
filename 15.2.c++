/* Print this
*
1*
12*
123*
1234*
12345*
123456*
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j;

    for (i = 1; i <= 7; i++)
    { // first round: i - 1 = 0 : 1<=0 so j in first round wouldn't print.
        for (j = 1; j <= i - 1; j++)
            cout << j;
        // in the first round Pirnt the first *
        cout << '*';
        cout << "\n";
    }
    return 0;
}