// Mahdi Ahmadi Kafshani, Student number: 40211530117086, Class start time: 10:10, Major: Computer science
#include <iostream>
using namespace std;

int main()
{
    const int maxLength = 5;           // تعیین حداکثر طول قابل دریافت
    char numericString[maxLength + 1]; // \0 بعلاوه یک برای
    int numericValue = 0;

    // دریافت رشته عددی از کاربر
    cout << "Enter a numeric string (up to 5 characters): ";
    cin >> numericString;

    // انجام عملیات های تبدیل رشته عددی به عدد
    int i = 0;
    // درحالی که ورودی ما مساوی \0 نیست و آی ما از حداکثر طول کوچک‌تر هستش دستورات زیر رو انحام بده
    while (numericString[i] != '\0' && i < maxLength)
    {
        // اگر ورودی ما عددی بین 0 تا 9 هستش
        if (numericString[i] >= '0' && numericString[i] <= '9')
        {
            // عدد قبلی رو ۱۰ برابر کن و عدد جدید رو بهش اضافه کن
            numericValue = numericValue * 10 + (numericString[i] - '0');
        }
        else
        // درصورتی که ورودی عدد نبود
        {
            cout << "Invalid character encountered. Exiting." << endl;
            return 0; // خارج شدن همراه نمایش ارور
        }
        ++i;
    }

    // نمایش عدد تبدیل شده
    cout << "Converted number: " << numericValue << endl;

    return 0;
}
