// خواندن آرایه‌ای ان * ان و محاسبه مجموع عناصر قطر اصلی و محاسبه عناصر قطر فرعی
#include <iostream>
using namespace std;
#define n 2 
int main()
{
  float x[n][n], sum1 = 0, sum2 = 0;
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      cout << "Enter the " << i + 1 << "th and " << j + 1 << "th numbers: ";
      cin >> x[i][j];
    }
  }
  for (i = 0; i < n; i++)
  {
    sum1 = sum1 + x[i][i];
    sum2 = sum2 + x[i][n-i-1];
  }
  cout << sum1 << endl
       << sum2 << endl;
}