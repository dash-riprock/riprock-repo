#include <string>
#include <iostream>

class Screen {
public:
    typedef std::string::size_type pos;//pos is public, users use this name
    // ++++ constructors ++++ 
    Screen() = default; //bc Screen has another constructor
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
    // returns character currently denonted by the cursor
    char get() const { return contents[cursor]; }   // implicity inline
    // returns character at a given position specified by it's row and column
    inline char get(pos ht, pos wd) const;  // explicity inline
    Screen &move(pos r, pos c); // made inline outside of class body
    
public:
    // set character at cursor, or given location, defined below
    Screen &set(char);
    Screen &set(pos, pos, char);
    
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

Screen &Screen::clear(char c)
{
    contents = std::string(height*width, c);
    return *this;
}

inline
Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;    // compute row location
    cursor = row + c;       // move cursor to the column within that row
    return *this;           // return "this" object as an lvalue
}
char Screen::get(pos r, pos c) const // declared inline in class
{
    pos row = r * width;        // compute row location
    return contents[row + c];   // return character at the given column
}
inline
Screen &Screen::set(char c)
{
    contents[cursor] = c;   // set the new value at the current cursor location
    return *this;           // return "this" object as an lvalue
}
inline Screen::set(pos r, pos col, char ch)
{
    contents[r*width + col] = ch;   // set specified location to given value
    return *this;                   // return this object as an lvalue
}
