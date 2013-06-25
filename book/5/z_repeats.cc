#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;
#include <fstream>
using std::ifstream;
#include <iterator>
using std::istream_iterator;
#include <algorithm>
using std::copy;

vector<string> read_text()  // reads a text file into vector and returns
{                           // that vector, v.
    vector<string> v;
    ifstream myfile("iceland.txt");  // name of text file to read into vector
    copy(istream_iterator<string>(myfile),
         istream_iterator<string>(),
         back_inserter(v));
    return v;
}

void dupes()
{
    int i = 0, counter = 0, sequence = 0;
    vector<string> v = read_text();
    string word = v[i];

    while (i != v.size()) {
        string word = v[i];
        if (word == v[i+1]) {
            cout << "Same word, son!" << endl;
//            sequence++;
//            counter++;
//            i++;
        }
        else
            cout << "Different words." << endl;
    i++;       
    } 

}

int main()
{
    dupes();
//    vector<string> v = read_text();
//    cout << "Fourth element of vector is: " << v[4] << endl;
    return 0;
}
