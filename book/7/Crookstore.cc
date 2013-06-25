#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
#include <string>
using std::string

int main()
{
    Crookstore total;   // variable to hold initial transaction
    if (read(cin, total)) {  // read first transaction
        Crookstore trans;   // variable to hold data for next transaction
        while(read(cin, trans)) {   // read remaining transactions
            if (total.isbn() == trans.isbn())   // if same book
                total.combine(trans);   // update running total
            else {
                print(cout, total) << endl; // all books are listed by isbn
                total = trans;  // so if not, print out the current total
            }                   // before moving on.
        }
        print(cout, total) << endl;
    } else {    // 1st if found nothing in the stream
        cerr << "No data." << endl;
    }
}


// defining a member fcn outside the Class
// definition must match declaration:
// return type, parameter list, and name must match declaration in class body
double Crookstore::avg_price() const {  // def avg_price which is declared in 
    if (units_sold)                     // Crookstore class.
        return revenue/units_sold;
    else
        return 0;
}
