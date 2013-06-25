#include <iostream>
using std::cout; using std::cin; using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;

void stringy()
{
    int b, c;
    string s1 = "a string", *p = &s1;
    auto a = s1.size();     // run the size member of the string s1
    b = (*p).size();        // run size on the object to which p points
    c = p->size();          // equivalent to (*p).size()

    cout << s1 << endl;
    cout << "s1.size(): " << a << endl;
    cout << "(*p).size(): " << b << endl;
    cout << "p->size(): " << c << endl;
}

void conditional()
{
    int grade;
    cout << "What was your grade? ";
    cin >> grade;
    cout << ((grade >= 60) ? "pass" : "fail");
    cout << endl;
}

void vec()  //double and odd elements of a vector
{
    vector<int> v;
    for (vector<int>::size_type i = 0; i != 10; ++i)    // fill vector
        v.push_back(i);

    for (auto i = 0; i != v.size(); ++i)
        v[i] % 2 != 0 ? v[i] = v[i] * 2 : v[i] = v[i];  // double odds

    for (auto j = 0; j != v.size(); ++j)                // print vector
        cout << v[j] << " ";
    cout << endl;
}

int main()
{
    //stringy();
    //conditional();
    //vec();
    return 0;
}

