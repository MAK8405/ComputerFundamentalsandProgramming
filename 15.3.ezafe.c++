/* Print this
 *7654321
 *1765432
 *1276543
 *1237654
 *1234765
 *1234576
 *1234567
 */
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        cout << '*';
        for (j = 1; j <= i - 1; j++)
            cout << j;
        for (j = 7; j >= i; j--)
            cout << j;
        cout << endl;
    }
    return 0;
}