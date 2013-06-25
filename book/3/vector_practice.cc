#include <vector>
using std::vector;

#include <vector>
using std::vector;

#include <iostream>
using std::cin; using std::cout; using std::endl;

int vec_scores() 
{
    vector<unsigned> grades;

    vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
    unsigned grade;
    while (cin >> grade) {
        if (grade <= 100)
            grades.push_back(grade);
            ++scores[grade/10];
    }

    cout << "grades.size = " << grades.size() << endl;
}

int vec_print()
{
    vector<int> v;      //initialize an empty vector
    for (vector<int>::size_type i = 0; i != 10; ++i)
        v.push_back(i); //for loop fills 10 elements with values 0 - 9

    cout << v[2];
}

int main()
{
    vec_print();
    return 0;
}
