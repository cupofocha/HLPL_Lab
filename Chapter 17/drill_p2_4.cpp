#include "std_lib_facilities.h"

int main()
{
    int* p1 = new int(7);

    cout << p1 << endl << *p1 << endl;

    cout << endl;

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

    return 0;
}