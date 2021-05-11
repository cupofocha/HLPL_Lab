#include "std_lib_facilities.h"

template<typename A>
void f(A&a, int n)
{
    for (auto b : a)
    {
        b += n;
    }
}

template<typename Iter1, typename Iter2>
Iter2 lame_copy(Iter1 f1, Iter1 e1, Iter2 f2)
{
    for (Iter1 p = f1; p != e1; ++p)
    {
        *f2++;
        *f2 = *p;
    }

    return f2;
}

int main()
{
    array<int, 10> a {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int> v {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    list<int> l {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    array<int, 10> a2 {a};

    vector<int> v2 {v};

    list<int> l2 {l};

    f(a, 2);
    f(v, 3);
    f(l, 5);

    lame_copy (a2.begin(), a2.end(), v2.begin());
    lame_copy (l2.begin(), l2.end(), a2.begin());

    vector<int>::iterator it1;
    list<int>::iterator it2;

    it1 = find(v2.begin(), v2.end(), 3);
    it2 = find(l2.begin(), l2.end(), 0);

    if (it1 != v2.end())
        std::cout << "Found at: " << distance(v2.begin(), it1) << '\n';
    else
        std::cout << "Not found" << endl;

    if (it2 != l2.end())
        std::cout << "Found at: " << distance(l2.begin(), it2) << '\n';
    else
        std::cout << "Not found" << endl;

    return 0;
}