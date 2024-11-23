// ب) مرتب سازی نزولی دانشجویان طبق شماره دانشجویی (نرولی)
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
    } 
    // ب
    // تعیین نفری که در جایگاه 0 آی ام می‌نشیند
    for (i = 0; i < n; i++){ // تعیین نفر ‌‌آی ام لیست
       int indexMax = i;
    for (j = i + 1; j < n; j++)
        if (u[j].ID > u[indexMax].ID)
            indexMax = j; // تعیین نفر دارای شماره دانشجویی بین آی تا آخر
    student temp;
    temp = u[i];
    u[i] = u[indexMax];
    u[indexMax] = temp;
    }
    // Display the sorted information
    cout << "\nSorted Students (Descending Order based on ID):\n";
    for (i = 0; i < n; i++)
    {
        cout << "Name: " << u[i].name << ", ID: " << u[i].ID << ", Average: " << u[i].ave << endl;
    }
    return 0;
}
