#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;

/* read text file storing each line as an element in a vector */
int vector_fill()
{
    vector<string> text;    // holds the input

    string s;
    ifstream iFile("steve_wynn");   // read in text to iFile
    while (getline(iFile, s)) // read the entire input
        text.push_back(s);  // storing each line as an element in text
    cout << "text.size: " << text.size() << endl;

    return text;
}

int main()
{
    vector<string> v1 = vector_fill();

    return 0;
}
