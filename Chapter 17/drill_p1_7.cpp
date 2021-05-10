#include "std_lib_facilities.h"

void print_arry10(ostream& os, int* a)
{
    for (int i = 0; i < 10; ++i) 
    {
        cout << a[i] << endl;
    }   
}

void print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; ++i) 
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

    int* b = new int[10];


    for (int i = 0; i < 10; ++i) 
    {
        b[i] = 100 + i;
    }

    print_arry10(cout, b);
    
    int* c = new int[11];


    for (int i = 0; i < 11; ++i) 
    {
        c[i] = 100 + i;
    }

    for (int i = 0; i < 11; ++i) 
    {
        cout << c[i] << endl;
    } 

    return 0;
}