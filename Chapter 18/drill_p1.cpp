#include "std_lib_facilities.h"

int ga[10]{1, 2, 4, 8, 16, 32, 64, 128, 256, 512};


void f(int a[], int x)
{
    int la[10];

    for (int i = 0; i < 10; i++)
    {
        la[i] = a[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << la[i] << " ";
    }

    cout << endl;

    int* p = new int[10];

    for (int i = 0; i < 10; i++)
    {
        p[i] = a[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " ";
    }

    cout << endl;

    delete[] p;
}

int main()
{
    f(ga, 10);

    int aa[10];

    int x = 1;

    for (int i = 0; i < 10; i++)
    {
        x = x * (i + 1);
        aa[i] = 1 * x;
    } 

    f(aa, 10);

    return 0;
}