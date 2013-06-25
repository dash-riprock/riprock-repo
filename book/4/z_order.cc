#include <vector>
using std::vector;
#include <iostream>
using std::cout; using std::cin; using std::endl;

void easy()
{
    int a = -30 * 3 + 21 / 5;
    int b = -30 + 3 * 21 / 5;
    int c = 30 / 3 * 21 % 5;
    int d = -30 / 3 * 21 % 4;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
}

void odd_even()
{
    int num;
    cout << "Enter a number and I'll tell you if it's odd or even: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "That number is even." << endl;
    }
    else {
        cout << "That number is odd." << endl;
    }
}

void first()
{
    vector<int> v1;
    for (vector<int>::size_type i = 1; i != 10; ++i)
        v1.push_back(i);
    if(!v1.empty())
        cout << v1[0];  // evaluates as true if the call to empty returns false
    cout << endl;
}

void forty_two()
{
    int num;
    cout << "Enter a number that's not 42: ";
    cin >> num;
    while (num != 42) {
        cout << "Enter a number that's not 42: ";
        cin >> num;
    }
}

void compare_four()
{
    int a, b, c, d;
    cout << "Enter 4 numbers: ";
    cin >> a >> b >> c >> d;
    if (a > b && b > c && c > d)
        cout << "good job." << endl;
    else
        compare_four();
}

int main()
{
    //odd_even();
    //first();
    //forty_two();
    compare_four();
    return 0;
}
