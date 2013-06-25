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

void print_text()   // input words as elements in a vector, print those elements
{
    vector<string> v1;

    ifstream myfile("string_input.txt");
    
    copy(istream_iterator<string>(myfile),
         istream_iterator<string>(),
         back_inserter(v1));

    for (auto it = v1.cbegin(); it != v1.cend() && !it->empty(); ++it)
        cout << *it << " ";

    auto beg = v1.begin(), end = v1.end();
    auto mid = v1.begin() + (end - beg) / 2;    // original midpoint

    while (mid != end && *mid != Korean) {
        if (Korean < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg)/2;
    }

}

int main()
{
    print_text();
    return 0;
}

