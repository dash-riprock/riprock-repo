#include <string>
using std::string;

#include <cctype>
using std::isupper; using std::toupper;
using std::islower; using std::tolower;
using std::isalpha; using std::isspace;

#include <iostream>
using std::cout; using std::cin; using std::endl;

void count_punct()
{
    string s;
    cout << "Enter a sentence and I'll count punctuations: " << endl;
    std::getline(cin, s);

    string::size_type punct_cnt = 0;

    for (string::size_type c = 0; c != s.size(); ++c)
        if (ispunct(s[c]))  //if the char is a punctuation
            ++punct_cnt;    //increment counter

    cout << punct_cnt << " punctuation characters in "
         << s << endl;
}

void upper_case()
{
    string s;
    cout << "Enter a sentence and I'll upper-case it all: " << endl;
    std::getline(cin, s);

    for (string::size_type c = 0; c != s.size(); ++c)
        s[c] = toupper(s[c]);   //iterates and converts to upper
    cout << s << endl;          //prints out each upper
}

int main()
{
//    count_punct();
    upper_case();
    return 0;
}
