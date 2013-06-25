#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <string>
using std::string;
#include <fstream>
using std::ifstream;
#include <iterator>
using std::istream_iterator;
#include <algorithm>
using std::copy;
#include <vector>
using std::vector;

void upper()
{
    string s("capitalize first letter of first word.");
    if (s.begin() != s.end()) {     // make sure s is not empty
        auto it = s.begin();        // it denotes the 1st character in s
        *it = toupper(*it);         // deref it and pass char to toupper()
    }
    cout << s << endl;              // print capitalized string
}

void iterate()
{
    string s("capitalizeeach char until white space or no more chars.");
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) // deref to pass
        *it = toupper(*it);  // capitalize the current character
    cout << s << endl;
}

void print_text()
{
    vector<string> v1;

    ifstream myfile("string_input.txt");
    
    copy(istream_iterator<string>(myfile),
         istream_iterator<string>(),
         back_inserter(v1));

    for (auto it = v1.cbegin(); it != v1.cend() && !it->empty(); ++it)
        cout << *it << endl;
}

void double_int()
{
    vector<int> v1;
    for (vector<int>::size_type i = 1; i != 11; ++i)
        v1.push_back(i);     // create 10 element vector elements 1 thru 10

    for (auto it = v1.begin(); it !=v1.end(); ++it)
        cout << *it << " "; // print out contents of vector
    cout << endl;

    cout << "Now we will double all the elements in that vector." << endl;

    for (auto it = v1.begin(); it !=v1.end(); ++it) {
        *it = (*it * 2);
        cout << *it << " "; } 
    cout << endl;
   
}

int main()
{
    //upper();
    //iterate();
    //print_text();
    double_int();
    return 0;
}
