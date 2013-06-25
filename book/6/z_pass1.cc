#include <iostream>
using std::cout; using std::endl;
#include <string>
using std::string;
#include <array>
using std::array; using std::begin; using std::end;


// pass array with 2 pointers, first and 1 past last
void print(const int *beg, const int *end)
{
    // print every element starting at BEG up to but not including END
    while (beg != end)
        cout << *beg++ << endl; // print current element and advance pointer
}


int main()
{
    int j[8] = {0, 1, 2, 3, 4, 5, 6, 8};
    print(begin(j), end(j));
    return 0;
}

