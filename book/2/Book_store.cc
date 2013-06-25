#include <iostream>
#include <string>
#include "Sales_data.h" //use Sales_data struct to create object for sales data

int main()
{
    struct Sales_data data1, data2; //data1 and data2 are objects created from Sales_data
    double price = 0;       //price per book, used to calculate total revenue

    std::cout << "Enter the first transaction: " <<std::endl;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;   //data structure Sales_data holds total revenue

    std::cout << "Enter the second transaction: " <<std::endl;
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data1.units_sold * price;   //data structure Sales_data holds total revenue

    if (data1.bookNo == data2.bookNo)   {       //compare book numbers
        unsigned totalCnt = data1.units_sold + data2.units_sold;    //calc total books sold 
        double totalRevenue = data1.revenue + data2.revenue;    //calc total revenue
        std::cout << data1.bookNo << " " << totalCnt
                  << " " << totalRevenue << " ";
        if (totalCnt != 0)
            std::cout << "Avg price: " << totalRevenue/totalCnt << std::endl;
        else
            std::cout << "(no sales)" << std::endl; //number books sold is zero
        return 0;   //indicates success
    }   else    {
            std::cerr << "Data must refer to the same ISBN" << std::endl;
            return -1;  //indicates failure
    }
}
