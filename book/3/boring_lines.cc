#include <iostream>
using namespace std;

void get_len()
{
    string line;    
    int length;
    cout << "Please enter your favorite song lyric: " << endl;  
    cin >> line;
    length = line.size();
    cout << "There are " << length << " characters in that line." << endl;
}

void add_string()
{
    string s1, s2, s3;
    cout << "Please enter your first name: " << endl;
    cin >> s1;
    cout << "Please enter your last name: " << endl;
    cin >> s2;
    cout << "Hello " << s1 + s2 << endl;
}

int main()
{
    get_len();
    add_string();
    return 0;
}
