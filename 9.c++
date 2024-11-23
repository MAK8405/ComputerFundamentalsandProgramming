/* Print this
 *
 **
 ***
 ****
 *****
 ******
 *******
 */
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    // i in ro neshon mide ke to har khat cheghadr bayad setare chap beshe.
    for (i = 1; i <= 7; i++)
    {   // j baraye in injast ke i maro hey bebare khat badi.
        // j aval miyad to har khat ye setare chap mikone va badesh i miyad karo tamom mikone.
        for (j = 1; j <= i; j++)
            cout << '*';
        cout << "\n";
    }
    return 0;
}