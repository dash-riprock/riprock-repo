// Reading and printing the sum of two Sales_item object

#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item1, item2;

    std::cout << "Enter the first set of information: " << std::endl;
    std::cin >> item1;  // read the first book info

    std::cout << "Enter the second set of information: " << std::endl;
    std::cin >> item2; // read the second book info

    std::cout << item1 + item2 << std::endl;    // print their sum

    return 0;
}

