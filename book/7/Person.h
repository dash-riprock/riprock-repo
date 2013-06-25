#ifndef Person_H
#define Person_H

#include <string>
#include <iostream>

class Person {
friend std::ostream &print(std::ostream&, const Person&);
friend std::istream &read(std::istream&, Person&);
public:
	// constructors
    Person() = default;
	Person(std::istream &);

//private:
	std::string first_name, last_name, street, state;
};


// nonmember Person interface functions
std::ostream &print(std::ostream&, const Person&);
std::istream &read(std::istream&, Person&);


#endif
