#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item total, trans;
    if(cin >> total){
            while (cin >> trans)
                if(total.same_isbn(trans))
                    total=total+trans;
                else{
                    cout << total << endl;
                    total=trans;
                }
                cout << total << endl;
    }   else    {
        cout << "No Data!" << endl;
        return -1;
    }
}
