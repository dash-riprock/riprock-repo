#include <iostream>

int main()
{
    int i = 42;                 
    const int &r1 = i;      // we can bind a const int& to a plain int object
    const int &r2 = 42;     // ok: r1 is a reference to a const
    const int &r3 = r1 * 2; // ok: r3 is a reference to const
//  int &r4 = r * 2;        // error: r4 is a plain, nonconst reference
}
