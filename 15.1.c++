/* Print this.
 *234567
 *34567
 *4567
 *567
 *67
 *7
 *
 */
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        // in the first round Pirnt the first *
        cout << '*';
        // in the first round Print 234567
        for (j = i + 1; j <= 7; j++)
            cout << j;
        cout << "\n";
    }
    return 0;
}