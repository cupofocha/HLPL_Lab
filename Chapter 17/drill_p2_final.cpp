#include "std_lib_facilities.h"

void print_vector(ostream& os, vector<int>& v)
{
    for (int i = 0; i < v.size(); ++i) 
    {
        cout << v[i] << " ";
    }   
}

int main()
{
    vector<int> v1(10);

    vector<int> *p1 = &v1;

    for (int i = 0; i < 10; ++i) 
    {
        v1[i] = 2*i;
    }    

    vector<int> v2(10);

    vector<int> *p2 = &v2;

    for (int i = 0; i < 10; ++i) 
    {
        v2[i] = v1[i];
    }   

    print_vector (cout, *p1);

    cout << p1 << endl;

    print_vector (cout, *p2);

    cout << p2 << endl;

    return 0;
}