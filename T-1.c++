// Mahdi Ahmadi Kafshani, Student number: 40211530117086, Class start time: 10:10, Major: Computer science
#include <iostream>
using namespace std;

int main()
{
    // معرفی متغیر و سپس دریافت آن از کاربر
    int number;
    cout << "Please enter a number (between 1 and 20): ";
    cin >> number;

    // درحالی که عدد وارد شده توسط کاربر بین 1 تا 20 نبود دستورات زیر رو انحام بده
    while (number > 20 || number < 1)
    {
        // درخواست دوباره به کاربر جهت وارد کردن عددی بین 1 تا 20
        cout << "The number isn't between 1 and 20." << endl
             << "Please enter a number between 1 and 20: ";
        cin >> number;
    }
    // تعریف ‌حلقه تکرار، شروع نمایش عدد 1 از سطر آی‌ام، تا زمانی که با عدد داده شده کاربر برابر شود، یکی یکی به آن اضافه شود
    for (int i = 1; i <= number; i++)
    {
        // تعریف ‌حلقه تکرار، شروع نمایش جی از مقدار آی‌، تا زمانی که با جمع عدد داده شده کاربر و آی برابر نشده است، یکی یکی به آن اضافه شود
        for (int j = i; j < number + i; j++)
        {
            // نمایش مقدار جی و سپس نمایش یک فاصله
            cout << j << " ";
        }
        // خط بعدی
        cout << "\n";
    }

    return 0;
}
