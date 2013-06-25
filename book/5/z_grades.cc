#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;

void grade()
{
    const vector<string> scores = {"F", "D", "C", "B", "A", "A+"};
    int grade;
    string lettergrade;
    cout << "Please enter your grade: ";
    cin >> grade;
    if (grade < 60)
        lettergrade = scores[0];
    else {
        lettergrade = scores[(grade - 50)/10]; // fetch letter grade
        if (grade != 100)
            if (grade % 10 > 7)
                lettergrade += '+';
            else if (grade % 10 < 3)
                lettergrade += '-';
    }

    if (grade >= 90 || grade < 60)
        cout << "You got an " << lettergrade << endl;
    else
        cout << "You got a " << lettergrade << endl;
}

int main()
{
    grade();
    return 0;
}    
