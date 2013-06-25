#include <iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;   // 42 minus 10 is 32
    std::cout << u - u2 << std::endl;   // no neg nums, wraps around to 4294967264

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;   // 42 minus 10 is still 32
    std::cout << i - i2 << std::endl;   // since signed by default, can go neg, so -32

    std::cout << i - u << std::endl;    // 10 minus 10 is zero
    std::cout << u - i << std::endl;    // 10 minus 10 is..... zero

    std::cout << "Hi \x4dO\115!\n";
    std::cout << '\115' << '\n';

    return 0;
}

