#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book;    // read ISBN, number of copies sold and sales price

    std::cout << "Please enter the ISBN, copies sold and price: " << std::endl;

    std::cin >> book;   // write ISBN, number of copies sold and sales price

    std::cout << book << std::endl;

    return 0;
}

