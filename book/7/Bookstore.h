#ifndef Bookstore_H
#define Bookstore_H

#include <string>
#include <iostream>

class Bookstore {
friend Bookstore add(const Bookstore&, const Bookstore&);
friend std::ostream &print(std::ostream&, const Bookstore&);
friend std::istream &read(std::istream&, Bookstore&);
public:
	// constructors
	Bookstore(): units_sold(0), revenue(0.0) { }
	Bookstore(const std::string &s): 
	           bookNo(s), units_sold(0), revenue(0.0) { }
	Bookstore(const std::string &s, unsigned n, double p):
	           bookNo(s), units_sold(n), revenue(p*n) { }
	Bookstore(std::istream &);

	// operations on Bookstore objects
	std::string isbn() const { return bookNo; }
	Bookstore& combine(const Bookstore&);
	double avg_price() const {  // inline definition
        if (units_sold)
            return revenue/units_sold;
        else
            return 0; }
private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};


// nonmember Bookstore interface functions
Bookstore add(const Bookstore&, const Bookstore&);
std::ostream &print(std::ostream&, const Bookstore&);
std::istream &read(std::istream&, Bookstore&);

// used in future chapters
inline 
bool compareIsbn(const Bookstore &lhs, const Bookstore &rhs)
{
	return lhs.isbn() < rhs.isbn();
}
#endif
