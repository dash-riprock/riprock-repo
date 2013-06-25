#include <iostream>
using std::cin; using std::cout; using std::endl; using std::istream; 
using std::ostream; using std::flush; using std::ends;
#include <string>
using std::string;
#include <fstream>
using std::ifstream; using std::ofstream;

// takes istream ref, prints it, clears cin and returns istream reference (cin)
istream& reader(istream& is)
{
    string result;

    string line;
    while (getline(is, line))
        result += line + "\n";

    cout << result;
    cin.clear();
    return cin;
}

void flush_buffer()
{
    cout << "hi!" << endl;      // writes hi and a newline, flushes the buffer
    cout << "hello." << flush;  // writes hello, flushed the buffer, adds no data
    cout << "hey." << ends;     // writes hey and a null, then flushes the buffer
    cout << "hi!" << endl;      // writes hi and a newline, flushes the buffer

    int value;
    cout << "Enter a number: ";
    cin >> value;   // automatically flushes buffer associated with cout
}

void file_stream_object()
{
    ifstream in("steve_wynn");  // construct ifstream and open steve_wynn
    ofstream out;               // output file stream not assoc. with any file
}

int main()
{
//    ifstream lyrics("declaration");
//    reader(lyrics);
//    flush_buffer();
    file_stream_object();
    return 0;
}




