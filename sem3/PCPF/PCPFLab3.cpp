#include <iostream>
#include <string>
using namespace std;

class Media
{
public:
    string Title;
    float Price;

    Media()
    {
        Title = " ";
        Price = 0;
    }
    Media(string T, float P)
    {
        Title = T;
        Price = P;
    }

    virtual void display()
    {
    }
};

class Book : public Media
{
    int Pages;

public:
    Book()
    {
        Title = " ";
        Pages = 0;
    }
    Book(string T, float P, int Pg) : Media(T, P)
    {
        Pages = Pg;
    }

    virtual void display()
    {
        cout << "Book Title: " << Title << endl;
        cout << "Book Price: " << Price << endl;
        cout << "Number of Pages: " << Pages << endl;
    }
};

class Tapes : public Media
{
    float Time;

public:
    Tapes()
    {
        Time = 0.0;
    }
    Tapes(string T, float P, float time) : Media(T, P)
    {
        Time = time;
    }

    virtual void display()
    {
        cout << "Tape Title: " << Title << endl;
        cout << "Tape Price: " << Price << endl;
        cout << "Length of Tape(in hrs): " << Time << "h" << endl;
    }
};

int main()
{
    cout << "D10A_60_Shashwat Tripathi" << endl;
    cout << endl << "----- Book Details -----" << endl;
    ;
    Book B("Programming in JAVA", 1299, 516);
    B.display();
    cout << endl << "----- Tape Details -----" << endl;
    Tapes tape("C++ Tutorial for Beginners - Full Course", 799, 4.01);
    tape.display();
    return 0;
}