#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <list>
using std::list;
#include <deque>
using std::deque;
#include <string>
using std::string;
#include <vector>
using std::vector;

void operations()
{
    vector<int> v1 = {1,3,5,7,9,12};
    vector<int> v2 = {1,3,9};
    vector<int> v3 = {1,3,5,7};
    vector<int> v4 = {1,3,5,7,9,12};

    int binary = v1 < v2;

    if(binary == 0)
        cout << "Vector 2 is greater than Vector 1" << endl;
    else
        cout << "Vector 1 is greater than Vector 2" << endl;
}

void members()
{
    list<string> a = {"David", "Foster", "Wallace"};
    auto it1 = a.begin();   // iterator
    auto it2 = a.rbegin();  // reverse_iterator
    auto it3 = a.cbegin();  // const_iterator
    auto it4 = a.crbegin(); // const_reverse_iterator

    cout << "iterator: " << *it1 << endl;
    cout << "reverse iterator: " << *it2 << endl;
    cout << "const iterator: " << *it3 << endl;
}

void initialize()
{
    list<string> author = {"David", "Foster", "Wallace"};
    vector<const char*> articles = {"a", "an", "the"};
    // list<string> words(articles) would not work, element types do not match

    list<string> list2(author);
    auto it1 = list2.begin();
    cout << "list2 which took author as argument, first element: " << *it1 << endl;

    // constructor takes two iterators to denote a range of elements we want to copy
    // each element is intialized by the value of corresponding element in the range
    list<string> words(articles.begin(), articles.end());

    vector<int> ivec(10, -1);       // ten int elements, each initialized to -1
    list<string> svec(10, "hi!");   // ten strings, each element is "hi!"
    deque<string> svec1(10);         // ten elements, each an empty string

    auto it2 = svec.begin();
    auto it33 = svec.end();

    cout << "first element is: " << *it2 << endl;
    cout << "last element is: " << *it33 << endl;

}


int main()
{
//    members();
//    initialize();
    operations();
    return 0;
}
