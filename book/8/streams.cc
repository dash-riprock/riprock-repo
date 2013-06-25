#include <iostream>
using std::cin; using std::cout; using std::endl; using std::istream;
#include <fstream>
using std::ifstream;
#include <sstream>
using std::istringstream;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include "streams.h"

void store_lyrics()
{
    string line, word;
    vector<string> lyrics_vector;
    ifstream iFile("steve_wynn");
    while (getline(iFile, line))
        lyrics_vector.push_back(line);

    for (auto it = lyrics_vector.begin(); it != lyrics_vector.end(); ++it) {
        string temp = *it;
        istringstream row(temp);
        while (row >> word)
            cout << word << endl;
    }

    string testing;
    testing = lyrics_vector[6];
    cout << testing << endl;
}

int main()
{
    store_lyrics();
/*
    string line, word;  // will hold a line and a word from input
    vector<person_info> people; // will hold all the records

    ifstream data("sstream");   // creates stream "data" with records from sstream
    // read input line by line until cin hits eof or another error
    while (getline(data, line)) {
        person_info info;   // create "info" object to hold this record's data
        istringstream record(line); // read line, bind it to record 
        record >> info.name;    // read the name into object.name
        while (record >> word)  // while there are numbers to write to word, do... 
            info.phones.push_back(word); // store the phone numbers in phones vector
        people.push_back(info); // append this record to people
    }
    person_info testing;
    testing = people[3];
    cout << "name: " << testing.name << endl;
    cout << "cell: " << testing.phones[0] << endl;
    cout << "work: " << testing.phones[1] << endl;
*/
}
