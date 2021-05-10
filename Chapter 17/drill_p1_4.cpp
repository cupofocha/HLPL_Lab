#include "std_lib_facilities.h"

void print_arry10(ostream& os, int* a)
{
    for (int i = 0; i < 10; ++i) 
    {
        cout << a[i] << endl;
    }   
}

int main()
{
    int* a = new int[20];

    for (int i = 0; i < 20; ++i) 
    {
        a[i] = 2*i;
    }

    for (int i = 0; i < 20; ++i) 
    {
        cout << a[i] << endl;
    }   

    delete[] a;

    return 0;
}