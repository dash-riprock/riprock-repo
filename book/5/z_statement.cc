#include <iostream>
using std::cout; using std::cin; using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <array>
using std::begin; using std::end;

void loop()
{
    int sum = 0, val = 0;
    while (val <= 10) {
        sum += val;
        ++val;
    }
    cout << sum << endl;
}

void square_vec()
{
    vector<int> v{1,2,9,8,4,3,89,5,-8,1,5,6,-99};
    for (auto i : v)        // print out vector elements
        cout << i << " ";
    cout << endl;
    for (auto &i : v)       // square vector elements
        i *= i;
    for (auto i : v)        // print out squares
        cout << i << " ";
    cout << endl;
}

void first_neg()
{
    int counter = 0;
    vector<int> v{1,2,9,8,4,3,89,5,8,1,5,6,-99};
    auto beg = v.begin();
    while (beg != v.end() && *beg >= 0) {
        ++beg;
        ++counter;
    }
    if (beg == v.end())
        cout << "All elements in this vector are positive integers." << endl;
    else
        cout << "First negative integer is " << *beg 
             << " located in element " << counter << endl;
}

int main()
{
    //loop();
    //square_vec();
    first_neg();
    return 0;
} 
