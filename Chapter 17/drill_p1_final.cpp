#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; ++i) 
    {
        cout << a[i] << " ";
    }   
}

void print_vector(ostream& os, vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i) 
    {
        cout << v[i] << " ";
    }   
}

int main()
{
    int* a = new int[20];

    for (int i = 0; i < 20; ++i) 
    {
        a[i] = 2*i;
    }

    print_array(cout, a, 20);

    cout << endl;

    vector<int> b(10);

    for (int i = 0; i < 10; ++i) 
    {
        b[i] = 100 + i;
    }

    print_vector(cout, b);

    cout << endl;
    
    vector<int> c(11);

    for (int i = 0; i < 11; ++i) 
    {
        c[i] = 100 + i;
    }

    print_vector(cout, c);

    cout << endl;

    vector<int> d(20);

    for (int i = 0; i < 20; ++i) 
    {
        d[i] = 100 + i;
    }

    print_vector(cout, d);

    delete[] a;

    return 0;
}
