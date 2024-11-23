// خواندن ان رکورد دانشجویی شامل : نام ، شماره شماره دانشجویی ، ۱۰ نمره و محاسبه معدل آنها ، سپس
// الف) خواندن یک شماره دانشجویی و جستجوی آن در میان دانشجویان
// ب) مرتب سازی نزولی دانشجویان طبق شماره دانشجویی (نرولی)
// ج) جستجوی حالت الف به روش جستجوی دودویی
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

    // خواندن اطلاعات نفر آی ام
    for (i = 0; i < n; i++)
    {
        cin >> u[i].name >> u[i].ID;
        u[i].ave = 0; // خالی کردن ظرف مجموع
        for (j = 0; j < 10; j++)
        {
            cin >> u[i].No[j];
            u[i].ave = u[i].ave + u[i].No[j];
        }
        u[i].ave = (u[i].ave) / 10.0;
    }
    return 0;
}
