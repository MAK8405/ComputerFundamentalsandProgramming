// خواندن ان (تعریف شده) عدد و ذخیره سازی، سپس جستجو مینیمم آنها
#include <iostream>
using namespace std;
#define n 5
int main()
{
    float x[n], min;
    int i, indexMin;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th number: ";
        cin >> x[i];
    }
    indexMin = 0; // اولین عدد داخل آرایه ما مینیمم هست چونکه باید به صورت خطی برسی کنیم
    for (i = 1; i < n; i++)
    {
        if (x[i] < x[indexMin])
        {
            indexMin = i;
        }
    }
    min = x[indexMin];
    cout << "Min: " << min << endl;

    return 0;
}