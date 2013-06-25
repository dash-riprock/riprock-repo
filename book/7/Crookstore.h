/* create Crookstore class */
#ifndef CROOKSTORE_H
#define CROOKSTORE_H

#include <string>
#include <iostream>

class Crookstore {
    std::string isbn() const { return bookNo; } //inline fcn def
    //a const following param list indicates THIS is a ptr to const 
    Crookstore& combine(const Crookstore&);
    double avg_price() const;

    std::string bookNo;         // string member bookNo
    unsigned units_sold = 0;    // unsigned member units_sold
    double revenue = 0.0;       // double member revenue
};

// Nonmember Crookstore INTERFACE functions
Crookstore add(const Crookstore&, const Crookstore&);//adds 2 Cstore objects
std::ostream &print(std::ostream&, const Crookstore&);// print Cstore totals 
std::istream &read(std::istream&, Crookstore&);// read in transactions

// define a member function outside of the Class

