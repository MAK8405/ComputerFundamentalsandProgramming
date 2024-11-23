// خواندن روز هفته و ساعت کارکرد و محاسبه دستمزد طبق
// شنبه و یکشنه ساعتی ۳۰ تومان
// دوشنبه تا چهارشنبه ساغتی ۲۵ تومن
// پنحشنبه و جمعه ساعتی ۶۵ تومن
#include <iostream>
using namespace std;
int main()
{
    float t, s;
    int d;
    cout << "Enter the day and time: \n";
    cin >> d >> t;
    if (t >= 0 && t <= 10)
    {
        switch (d)
        {
        case 0:
            s = 30 * t;
            break;
        case 1:
            s = 30 * t;
            break;
        case 2:
            s = 25 * t;
            break;
        case 3:
            s = 25 * t;
            break;
        case 4:
            s = 25 * t;
            break;
        case 5:
            s = 65 * t;
            break;
        case 6:
            s = 65 * t;
            break;
        default:
            cout << "Eror in day\n";
        }
    }
    // time is wrong so the switch never will started.
    else
        cout << "Error in time\n";
    return 0;
}
