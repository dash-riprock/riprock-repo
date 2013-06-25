#include <iostream>
using std::cin; using::cout; using::endl;

void swap(int &v1, int &v2)
{
    //if values are already the same, no need to swap, just return.
    if (v1==v1)
        return;
    //if we make it past return, there is more work to do.
    int tmp = v2;
    v2 = v1;
    v1 = tmp;
    //no explicit return needed.
}

int main()
{
    int twenty = 20;
    int thirty = 30;
    swap(int *twenty, int *thirty);
    cout << "Twenty: " << twenty << endl;
    cout << "Thirty: " << thirty << endl;
    return 0;
}

