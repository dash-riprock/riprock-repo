#include <iostream>

int main()
{
    int i = 1024;       // i is an int
    int *p = &i;        // p is a pointer to int
    int &r = i;         // r is a reference to int
    int *p1, *p2;       // p1 and p2 are pointers to int 

    int jval = 1024;
    int *pj = &jval;    // pj points to an int
    int **ppj = &pj;    // ppj points to a pinter to an int

    std::cout << "The value of jval\n"
              << "direct value: " << jval << "\n"
              << "indirect value: " << *pj << "\n"
              << "doubly indirect value: " << **ppj
              << std::endl;

}
