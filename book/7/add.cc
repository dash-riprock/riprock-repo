#include <iostream>
using std::cout; using std::cin; using std::endl;
#include <string>
using std::string;
#include <fstream>
using std::ifstream;
#include "Sales_bata.h"

int main()
{
    Sales_bata total;
    ifstream is ("book_sales.txt", ifstream::binary);
    if (is) {
        is.seekg (0, is.end);
        int length = is.tellg();
        is.seekg (0, is.beg);

        char * buffer = new char [length];

        cout << "Reading " << length << " characters." << endl;
    }
    if (is) {
        is.read (cin, total) }

    cout << "Total: " << total << endl;
}

