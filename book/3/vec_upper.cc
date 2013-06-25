// Program to read a string, store words in a vector, uppercase them
// and print them out 8 words to a line

#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <fstream>
using std::ifstream;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <iterator>
using std::istream_iterator;
#include <algorithm>
using std::copy;

int main()
{
    vector<string> v1;

    ifstream myfile("string_input.txt");    

    copy(istream_iterator<string>(myfile),
         istream_iterator<string>(),
         back_inserter(v1));

    for (auto &s : v1)
    {
        for (auto &c : s) c = toupper(c); 
        cout << s << " ";
    }
    cout << '\n';
    cout << '\n';

    const unsigned per_line = 8;
    decltype(v1.size()) word_count;

    for (word_count = 0; word_count != v1.size(); ++ word_count)
    {
        cout << v1[word_count] << ' ';
        if ( (word_count + 1) % per_line == 0 )
            cout << '\n';
    }

    if (word_count % per_line != 0)
        cout << '\n';

    return 0;
}
