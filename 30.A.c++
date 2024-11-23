// الف) خواندن یک شماره دانشجویی و جستجوی آن در میان دانشجویان
#include <iostream>
using namespace std;
#define n 10
struct student
{
    char name[20];
    int ID;
    float No[10];
    float ave;
};
int main()
{
    student u[n];
    int i, j;
    cout << "Enter information of " << n << " student: ";
    cout << "\n Name ID 10_Numbers \n";
    for (i = 0; i < n; i++)
    { // خواندن اطلاعات نفر آی ام
        cin >> u[i].name >> u[i].ID;
        u[i].ave = 0; // خالی کردن ظرف مجموع
        for (j = 0; j < 10; j++)
        {
            cin >> u[i].No[j];
            u[i].ave = u[i].ave + u[i].No[j];
        }
        u[i].ave = (u[i].ave) / 10.0;
    } // الف
    int id;
    cin >> id;
    for (i = 0; i < n; i++)
        if (u[i].ID == id)
            break;
    if (i < n)
        cout << u[i].name << "\n"
             << u[i].ID << "\n"
             << u[i].ave;
    else
        cout << "Not found";

    return 0;
}
