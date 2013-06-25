#include <iostream>
using std::istream; using std::ostream; using std::endl; using std::cout;
using std::cin; using std::cerr;
#include <fstream>
using std::ifstream;
#include "Bookstore.h"
Bookstore::Bookstore(std::istream &is) 
{
	// read will read a transaction from is into this object
	read(is, *this);
}

/*
double 
Bookstore::avg_price() const {
	if (units_sold)
		return revenue/units_sold;
	else
		return 0;
}
*/

// add the value of the given Bookstore into this object
Bookstore& 
Bookstore::combine(const Bookstore &rhs)
{
	units_sold += rhs.units_sold; // add the members of rhs into 
	revenue += rhs.revenue;       // the members of ``this'' object
	return *this; // return the object on which the function was called
}

Bookstore 
add(const Bookstore &lhs, const Bookstore &rhs)
{
	Bookstore sum = lhs;  // copy data members from lhs into sum
	sum.combine(rhs);      // add data members from rhs into sum
	return sum;
}

// transactions contain ISBN, number of copies sold, and sales price
istream&
read(istream &is, Bookstore &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

ostream&
print(ostream &os, const Bookstore &item)
{
	os << item.isbn() << " " << item.units_sold << " " 
	   << item.revenue << " " << item.avg_price();
	return os;
}

int main()
{
    ifstream sales_log("book_sales.txt"); // input is iFile
    Bookstore total;    // variable to hold the running total
    if (read(sales_log, total)) {  // read the first transaction
        Bookstore trans;           // variable for rest of transactions
        while(read(sales_log, trans)) { //read remaining transactions
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(cout, total) << endl; // print results
                total = trans;  // process next book
            }
        }
        print(cout, total) << endl;    // print last transaction
    } else {
        cerr << "No data, dude." << endl;
    }

    return 0;
}












