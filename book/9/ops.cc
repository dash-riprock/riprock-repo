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
#include <fstream>
using std::ifstream;
#include <iterator>
using std::iterator; using std::begin; using std::end;


/* Create a new element at the end of vector and read a line into it */
void back_push()
{
    string line;
    vector<string> bars;
    ifstream iFile("lyrics");
    while (getline(iFile, line))
        bars.push_back(line);
    cout << bars[8] << endl;
}

void first_element(vector<int> v)
{
    auto v_at = v.at(0);
    auto v_front = v.front();
    auto v_begin = v.begin();
}

/* Using 'front' and 'back' members to access container elements */
void access(vector<int> c)
{
    if(!c.empty()) {
        cout << "the first element is originally: " << c[0] << endl;
        cout << "the last element is originally: " << c[9] << endl;

        c.front() = 42;
        auto &v = c.back(); // get a ref to the last element
        v = 1024;           // changes the element in c
        auto v2 = c.back(); // v2 is not a ref, it's a copy of c.back
        v2 = 0;             // no change to the element in c;
        cout << "the first element is now: " << c[0] << endl;
        cout << "the last element is now: " << v << endl;

    }
}

/* using 'at' member on an invalid index throws an out_of_range exception */
void at(vector<int> dollars)
{
    //cout << dollars[0];
    cout << dollars.at(0);
}

list<int> erase(list<int> first)
{
    auto it = first.begin();    //pointer to 1st element
    while (it != first.end())
        if(*it % 2)                 //if odd
            it = first.erase(it);   //erase it
        else
            ++it;
    return first;
}


void odds_evens()
{
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    int *beg = begin(ia); int *last = end(ia);
    int size = last - beg;

    /* Keep evens */
    vector<int> v(ia, ia + size);
    auto it = v.begin();
    while (it != v.end()) {
        if (*it % 2)            // if odd 
            it = v.erase(it);   // erase it
        else
            ++it;
    }
    auto it1 = v.begin();
    while (it1 != v.end()) { 
        cout << *it1 << " ";
        ++it1;
    }
    cout << endl;

    /* Keep odds */
    list<int> slist(ia, ia + size);
    auto itr = slist.begin();
    while (itr != slist.end()) {
        if(*itr % 2 == 0)
            itr = slist.erase(itr);
        else
            ++itr;
    }
    auto itr1 = slist.begin();
    while (itr1 != slist.end()) {
        cout << *itr1 << " ";
        ++itr1;
    }
    cout << endl;

}    

void inserter()
{
    vector<int> v = {1,8,4,6,8,7,9,6,2,4,1,5,1,5};
    auto it = v.begin();
    while(it != v.end()) {
        *it *= 2;
        cout << *it << " ";
        ++it;
//        ++begin;    // advance begin because we want to insert after this element
//        begin = v.insert(begin, 42);
//        ++begin;
    }
    cout << endl;
}

void resizer()
{
    list<int> ilist(10, 42);    // ten ints, each has value 42
    ilist.resize(15);           // add 5 elements value 0 to the back of the list
    auto it = ilist.begin();
    while(it != ilist.end()) {
        cout << *it << " ";
        ++it;
    }
    cout << endl;

    ilist.resize(25, -1);       // add 10 elements value -1 to the back of the list
    auto it1 = ilist.begin();
    while(it1 != ilist.end()) {
        cout << *it1 << " ";
        ++it1;
    }
    cout << endl;

    ilist.resize(5);            // erase 20 elements from the back of the list
    auto it2 = ilist.begin();
    while(it2 != ilist.end()) {
        cout << *it2 << " ";
        ++it2;
    }
    cout << endl;

}

void test()
{
    vector<int> vi = {22,23,28,13,15,44,89,555,2,47,69,88,99,44};
    auto iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter % 2)
            iter = vi.insert(iter, *iter);
        else
            ++iter;
    }
    auto it = vi.begin();
    while (it != vi.end())
        cout << *it << " ";
    cout << endl;
}

int main()
{
    test();
    /*
    inserter();
    resizer();
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};
    odds_evens();
    vector<int> dollars;
    vector<int> crack = {0,1,2,3,4,5,6,7,8,9};
    first_element(crack);
    at(dollars);
    access(crack);
    push_back();
    list<int> integers = {0,1,2,3,4,5,6,7,8,9};
    list<int> evens = erase(integers);
    for (auto i = evens.begin(); i != evens.end(); i++)
        cout << *i << endl; 
    */
    return 0;
}
