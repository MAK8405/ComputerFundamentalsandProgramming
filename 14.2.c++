/* Print this
1
21
321
4321
54321
654321
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = i - 1; j >= 1; j--)
            cout << j;
        cout << endl;
    }
}