#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream; using std::ostream;
#include <string>
using std::string;
#include <fstream>
using std::ifstream;
#include "Person.h"

Person::Person(std::istream &is)
{
    read(is, *this);
}

istream&
read(istream &is, Person &item)
{
	is >> item.first_name >> item.last_name >> item.street >> item.state;
	return is;
}

ostream&
print(ostream &os, const Person &item)
{
	os << item.first_name << " " << item.last_name << " " 
	   << item.street << " " << item.state;
	return os;
}

int main()
{
    Person one, two;   // variables to hold 2 Person objects
    ifstream ifile("address");
    read(ifile, one);
    read(ifile, two);
    /*
    cout << "First: " << endl;
    cin >> first.first_name >> first.last_name >> first.street >> first.state;
    cout << "Second: " << endl;
    cin >> second.first_name >> second.last_name >> second.street >> second.state;
    */
    cout << one.street << endl;
    cout << two.first_name << endl;

    return 0;
}


