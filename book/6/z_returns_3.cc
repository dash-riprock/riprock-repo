#include <iostream>
using std::cin; using std::cout; using std::endl;

void swap(int &twenty, int &thirty)
{
    //if values are already the same, no need to swap, just return.
    if (twenty == thirty)
        return;
    //if we make it past return, there is more work to do.
    int tmp = thirty;
    thirty = twenty;
    twenty = tmp;
    cout << "Twenty: " << twenty << endl;
    cout << "Thirty: " << thirty << endl;
    //no explicit return needed.
}


int main()
{
    int twenty = 20;
    int thirty = 30;
    cout << "Twenty: " << twenty << endl;
    cout << "Thirty: " << thirty << endl;
    swap(twenty, thirty);
    return 0;
}

