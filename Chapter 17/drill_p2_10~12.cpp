#include "std_lib_facilities.h"

int main()
{
    int* p1 = new int(7);

    cout << p1 << " " << *p1 << endl;

    int* p2 = new int[7];

    for (int i = 0; i < 7; ++i) 
    {
        p2[i] = 2*i;
    }

    cout << p2 << endl;

    for (int i = 0; i < 7; ++i) 
    {
        cout << p2[i] << " ";
    }

    cout << endl;

    int* p3 = p2;

    p2 = p1;

    p2 = p3;

    cout << p1 << " " << p2 << endl;

    delete[] p1, p2, p3;

    int* p1 = new int[10];

    for (int i = 0; i < 10; ++i) 
    {
        p1[i] = 2*i;
    }

    int* p1 = new int[10];

    for (int i = 0; i < 10; ++i) 
    {
        p1[i] = 2*i;
    }    

    int* p2 = new int[10];

    for (int i = 0; i < 10; ++i) 
    {
        p2[i] = p1[i];
    }

    return 0;
}