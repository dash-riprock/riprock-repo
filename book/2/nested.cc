#include <iostream>

int main()
{
    int i = 100, sum = 0;

    for (int i = 0; i != 10; ++i)   // i = 0 has BLOCK SCOPE can not be accessed outside
        sum += i;                   // of for loop.
    
    std::cout << i << " " << sum << std::endl;

    int j, &sj = j;
    j = 5; sj = 10;
    std::cout << j << " " << sj << std::endl;

    int ival = 52;
    int *p = &ival; // p holds the address of ival; p is a pointer to ival
    *p = 0;
    std::cout << ival << std::endl;     // * yields the object to which p points; prints 52

}
