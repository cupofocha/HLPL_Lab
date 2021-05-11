#include "std_lib_facilities.h"

template<typename T>
struct S
{
    S(T vv = 0) : val{vv} { }

    T& get();

    S& operator=(const T&);

    const T& get() const;

private:
    
    T val;
};

template<typename T>
T& S<T>::get()
{
    return val;
}

template<typename T>
S<T>& S<T>::operator=(const T& s)
{
    val = s;
    return *this;
}

template<typename T>
const T& S<T>::get() const
{
    return val;
}

template<typename T> 
void read_val(T& v)
{
    std::cin >> v;
}

template<typename T>
std::ostream& operator<<(ostream& os, vector<T>& v)
{
    os << "{ ";
    for (int i = 0; i < v.size(); ++i) {
        os << v[i] << (i < v.size() - 1 ? ", " : " ");
    }
    os << "}" << endl;

    return os;
}

template<typename T>
std::istream& operator>>(istream& is, vector<T>& v)
{
    char ch = 0;
    is >> ch;
    if (ch != '{') {
        is.unget();
        return is;
    }

    for (T val; is >> val; ) {
        v.push_back(val);
        is >> ch;
        if (ch != ',') break;
    }

    return is;
}

int main()
{
    S<int> si {64};

    S<char> sc {'a'};

    S<double> sd {3.14};

    S<string> ss {"Siza!"};

    S<vector<int>> sv {vector<int>{1, 4, 5, 3}};

    cout << si.get() << " "
            << sc.get() << " "
            << sd.get() << " "
            << ss.get() << " "
            << sv.get() << endl;

    cout << "int: " << endl;
    int i;
    read_val(i);
    S<int> si2 {i};

    cout << "char: " << endl;
    char c;
    read_val(c);
    S<char> sc2 {c};

    cout << "double: " << endl;
    double d;
    read_val(d);
    S<double> sd2 {d};

    cout << "string: " << endl;
    string s;
    read_val(s);
    S<string> ss2 {s};

    cout << si2.get() << " "
            << sc2.get() << " "
            << sd2.get() << " "
            << ss2.get() << endl;

    cout << "vector: " << endl;
    vector<int> v2;
    read_val(v2);
    S<vector<int>> sv2 {v2};
    cout << sv2.get();

    return 0;
}

