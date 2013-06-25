// code to change the value of a pointer

#include <iostream>
int main ()
{
    int ival = 42;
    int jval = 50;
    int *p = &ival; // defines p as a pointer to int, and initializes p to
                    // point to the int object named ival.
    std::cout << *p << std::endl;

    *p = 69;
    std::cout << *p << std::endl;

    int j = 42;
    int *p1 = &j;
    *p1 = *p1 * *p1;
    std::cout << *p1 << std::endl;
    std::cout << j << std::endl;
}

