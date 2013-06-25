// define own data structure

#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {         // class begins with keyword struct, followed by name of class
    std::string bookNo;     // Class body defines members of the class
    unsigned units_sold;    // Data members define the contents of the objects of the class type
    double revenue;         // Data members: string, unsigned, double
}                          // each Sales_data object wil have these 3 data members
#endif

int main()
{
    return 0;
}
