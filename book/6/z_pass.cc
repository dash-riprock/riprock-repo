#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <string>
using std::string;

void reset(int &i)  // i is just another name for the object passed to reset
{
    i = 0;
}

void pass()
{
    int j = 42;
    cout << "j = " << j << endl;
    reset(j);   // j is passed by reference; the value of j is changed
    cout << "j = " << j << endl;
}

bool is_shorter(const string &s1, const string &s2)
{
    return s1.size() > s2.size();
}




int main()
{
    string s1, s2;
    cout << "Sentence 1: ";
    cin >> s1;
    cout << "Sentence 2: ";
    cin >> s2;

    int j = is_shorter(s1, s2);

    if(j == 1)
        cout << "1st is longer." << endl;
    else
        cout << "2nd is longer." << endl;
//    pass();
    return 0;
}
