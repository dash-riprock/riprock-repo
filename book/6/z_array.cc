#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <array>
using std::array;
#include <string>
using std::string;
#include <initializer_list>
using std::initializer_list; using std::begin; using std::end;

//takes an array of exactly size 10, prints it's contents
void print(int (&arr)[10])
{
    for (int i=0; i!=10; i++)
        cout << arr[i] << " ";
    cout << endl;
}

//takes a pointer and an integer and returns the larger of the two
int larger(int *x, int y)
{
    cout << "Pointer: " << *x << " and int: " << y << endl;
    if(*x > y)
        return *x;
    else
        return y;
}
//produces error msg for a varying number 
void error_msg(initializer_list<string> i_list)
{
    for(auto beg = i_list.begin(); beg != i_list.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}

void pw()
{
    string actual;
    string expected = "Merrill1";
    cout << "Please enter pw: ";
    cin >> actual;
    if(expected != actual)
        error_msg({"functionX", expected, actual});
    else
        error_msg({"functionX", "yeah, ok."});
}

int main()
{
    int j[]={0,1,1,2,3,5,8,13,21,34};
//    print(j);
    int a=10;
    int b=30;
//    int c=larger(&a,b); //pass a pointer and int to fcn larger 
//    cout << "Larger function returns: " << c << endl;
    pw();
    return 0;

}
