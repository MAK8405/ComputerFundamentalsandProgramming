// خواندن آرایه‌ای ان * ان از اعداد صفر و یک و برسی
// پاد متقارنی
#include <iostream>
using namespace std;
#define n 3
int main()
{
   int x[n][n] , i, j , 
   flag = 1; // فرض اولیه بر پاد متقارن بودن
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
      {
         cout << "Enter the " << i + 1 << "th and " << j + 1 << "th numbers: ";
         cin >> x[i][j];
      }
   }
   for (i = 1; i < n && flag; i++)
      for (j = 0; j < i; j++)
         if (x[i][j] + x[j][i] != 1)
         {
            flag = 0; // باطل شدن فرض اولیه
            break;
         }
   if (flag == 1)
      cout << "pod mothegharen ast";
   else
      cout << "pod mothegharen nist";
   return 0;
}