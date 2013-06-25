// Program to print the size and contents of various vectors using iterator

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

    cout << "v1 has " << v1.size() << " elements." << endl;
    for (auto it = v1.begin(); it != v1.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "v1 has " << v2.size() << " elements." << endl;
    for (auto it = v2.begin(); it != v2.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "v1 has " << v3.size() << " elements." << endl;
    for (auto it = v3.begin(); it != v3.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "v1 has " << v4.size() << " elements." << endl;
    for (auto it = v4.begin(); it != v4.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "v1 has " << v5.size() << " elements." << endl;
    for (auto it = v5.begin(); it != v5.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "v1 has " << v6.size() << " elements." << endl;
    for (auto it = v6.begin(); it != v6.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "v7 has " << v7.size() << " elements." << endl;
    for (auto it = v7.begin(); it != v7.end(); ++it)
        cout << *it << " ";
    cout << endl;

}
