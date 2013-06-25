/* Asks for 2 items and chekcs to see if ISBNs match
 * using MEMBER FUNCTION isbn(). If they do, adds the
 * items and returns the sum, else returns error.
*/ 

#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item1, item2;

    std::cout << "Enter the first set of information: " << std::endl;
    std::cin >> item1;  // read the first book info

    std::cout << "Enter the second set of information: " << std::endl;
    std::cin >> item2; // read the second book info

    if (item1.isbn() == item2.isbn())   {
        std::cout << item1 + item2 << std::endl;    // print their sum
        return 0;       // indicates success 
    }   else {
        std::cerr << "Data must refer to the same ISBN."
                  << std::endl;
        return -1;      // indicates failure
    }
}
