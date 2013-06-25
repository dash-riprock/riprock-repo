// re-writing add code using Sales_data struct instead of Sales_item

#include <iostream>
#include <string>   //because Sales_data.h has a string member, must include the string header
#include "Sales_data.h"

int main()
{
    struct Sales_data data1, data2;
    
    std::cout << "Enter the first transaction: " << std::endl;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    std::cout << "Enter the second transaction: " << std::endl;
    std::cin >> data2.bookNo >> data2.units_sold >> price;

    if (data1.bookNo == data2.bookNo)   
        std::cout << "Same books." << std::endl; 
    else
        std::cout << "Different books." << std::endl;
}
