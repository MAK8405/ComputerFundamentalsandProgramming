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
    } // ج
    for (i = 0; i < n; i++)
    { // تعیین نفر ‌‌آی ام لیست
        int indexMax = i;
        for (j = i + 1; j < n; j++)
            if (u[j].ID > u[indexMax].ID)
                indexMax = j; // تعیین نفر دارای شماره دانشجویی بین آی تا آخر
        student temp;
        temp = u[i];
        u[i] = u[indexMax];
        u[indexMax] = temp;
    }

    int id;
    cin >> id;
    int low = 0, mid, up = n - 1;
    while (low <= up)
    {
        mid = (low + up) / 2;
        if (u[mid].ID == id)
            break;
        if (u[mid].ID < id)
            low = mid + 1;
        else
            up = mid - 1;
    }
    if (low > up)
        cout << "Not Found";

    else
        cout << "Found in poition" << mid;
    return 0;
}
