// Program to print the size and contents of various vectors

#include <string>
using std::string;

#include <vector>
using std::vector; 

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
    vector<int> v1;             // empty
    vector<int> v2(10);         // 10 elements with value 0
    vector<int> v3(10, 41);     // 10 elements with value 41
    vector<int> v4{10};         // one element with value 10
    vector<int> v5{10, 41};     // two elements with value 10 & 41
    vector<string> v6{10};      // 10 default initalized elements
    vector<string> v7{10, "hi"};// 10 elements with value "hi"

    cout << "Vector v1 has " << v1.size() << " elements." << endl;
    for (std::vector<int>::const_iterator i = v5.begin(); i != v5.end(); ++i)
        std::cout << *i << " ";
    cout << endl;

    cout << "Vector v2 has " << v2.size() << " elements." << endl;
    for (std::vector<int>::const_iterator i = v5.begin(); i != v5.end(); ++i)
        std::cout << *i << " ";
    cout << endl;

    cout << "Vector v3 has " << v3.size() << " elements." << endl;
    for (std::vector<int>::const_iterator i = v5.begin(); i != v5.end(); ++i)
        std::cout << *i << " ";
    cout << endl;

    cout << "Vector v4 has " << v4.size() << " elements." << endl;
    for (std::vector<int>::const_iterator i = v5.begin(); i != v5.end(); ++i)
        std::cout << *i << " ";
    cout << endl;
   
    cout << "Vector v5 has " << v5.size() << " elements." << endl;
    for (std::vector<int>::const_iterator i = v5.begin(); i != v5.end(); ++i)
        std::cout << *i << " ";
    cout << endl;

    cout << "Vector v6 has " << v6.size() << " elements." << endl;
    for (std::vector<string>::const_iterator i = v6.begin(); i != v6.end(); ++i)
        std::cout << *i << " ";
    cout << endl;

    cout << "Vector v7 has " << v7.size() << " elements." << endl;
    for (std::vector<string>::const_iterator i = v7.begin(); i != v7.end(); ++i)
        std::cout << *i << " ";
    cout << endl;

}



