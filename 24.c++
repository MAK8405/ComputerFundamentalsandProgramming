// خواندن ان (تعریف شده) عدد و ‌ذخیره سازی سپس مرتب سازی (انتخابی) آنها
#include <iostream>
using namespace std;
#define n 5
int main()
{
    float x[n], temp;
    int i, j, indexMin;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th number: ";
        cin >> x[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        indexMin = i;
        for (j = i + 1; j < n; j++)
            if (x[j] < x[indexMin])
                indexMin = j;
        temp = x[i];
        x[i] = x[indexMin];
        x[indexMin] = temp;
    } // cout ro man neveshtam
    cout << "Sorted Numbers: ";
    for (i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    return 0;
}