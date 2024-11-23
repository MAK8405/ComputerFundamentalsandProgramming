// خواندن ۱۰۰ عدد و میانگین اعداد مثبت
// محاسبه تعداد صفر ها
// محاسبه حاصل ضرب اعداد منفی
#include <iostream>
using namespace std;
int main()
{ // mul_n is 1 because if it was zero the result going to be 0.
    float x, sum_p = 0, ave_p = 0, mul_n = 1;
    // count_p is zero because we will check it at the end.
    int i, count_z = 0, count_p = 0;
    for (i = 1; i <= 10; i++)
    {
        cout << "Enter a number: \n";
        cin >> x;
        if (x > 0)
        {
            sum_p = sum_p + x;
            count_p++;
        }
        else if (x == 0)
            count_z++;
        else
            mul_n = mul_n * x;
    }
    if (count_p > 0)
        ave_p = sum_p / count_p;
    cout << "Ave of Positive is: " << ave_p << endl
         << "Count zero: " << count_z << endl
         << "Mult negative: " << mul_n << endl;
    return 0;
}