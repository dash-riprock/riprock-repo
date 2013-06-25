/*
 * Read a file of sales transactions and produce a report
 * that shows, for each book, the total number of copies
 * sold, the total revenue, and the average sales price.
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;
#include "Sales_item.h"

int main()
{
    Sales_item total, trans;   // variable to hold data for the next transaction
    Sales_item item1, item2, item3, item4;

    std::cout << "Enter the first set of information: " << std::endl;
    std::cin >> item1;  // read the first book info

    std::cout << "Enter the second set of information: " << std::endl;
    std::cin >> item2; // read the second book info

    std::cout << "Enter the third set of information: " << std::endl;
    std::cin >> item3;  // read the first book info

    std::cout << "Enter the fourth set of information: " << std::endl;
    std::cin >> item4; // read the second book info
 
   
    int i = 0;
    while (std::cin >> trans) 
        if (total.isbn() == trans.isbn())
        {
            total += trans;
            ++i;
        }
        else
        {
            std::cout << i << std::endl;
            total = trans;
            i = 0;
        }
        std::cout << i << std::endl;
    
    else
    {
        std::cout << "No data." << std::endl;
        return -1;
    }
    return 0;
}

    
