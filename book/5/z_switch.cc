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

void snitch()
{
    unsigned a_count = 0, e_count = 0, i_count = 0, o_count = 0, u_count = 0;
    vector<char> vec;
    int i = 0;

    ifstream myfile("string.txt");
    copy(istream_iterator<char>(myfile),
         istream_iterator<char>(),
         back_inserter(vec));
    
    cout << vec[3] << endl;
    cout << i << endl;
    while (i != vec.size()) {
        switch (vec[i]) {
            case 'a':
                ++a_count;
                break;
            case 'e':
                ++e_count;
                break;
            case 'i':
                ++i_count;
                break;
            case 'o':
                ++o_count;
                break;
            case 'u':
                ++u_count;
                break;
            case 'A':
                ++a_count;
                break;
            case 'E':
                ++e_count;
                break;
            case 'I':
                ++i_count;
                break;
            case 'O':
                ++o_count;
                break;
            case 'U':
                ++u_count;
                break;
        }
        i++;
    }

    cout << "Number of vowel a: \t" << a_count << '\n'
         << "Number of vowel e: \t" << e_count << '\n'
         << "Number of vowel i: \t" << i_count << '\n'
         << "Number of vowel o: \t" << o_count << '\n'
         << "Number of vowel u: \t" << u_count << endl;
}

int main()
{
    snitch();
    return 0;
}

