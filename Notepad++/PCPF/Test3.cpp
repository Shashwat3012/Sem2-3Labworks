#include <iostream>
#include <string>
using namespace std;

class Media
{
public:
    string Title;
    float Price;

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
    Book(string T, float P, int Pg) : Media(T, P)
    {
        Pages = Pg;
    }

    virtual void display()
    {
        cout << "Title of the Book is: " << Title << endl;
        cout << "Price of the Book is: " << Price << endl;
        cout << "Page count is: " << Pages << endl;
    }
};

class Tapes : public Media
{
    float Time;

public:
    Tapes(string T, float P, float time) : Media(T, P)
    {
        Time = time;
    }

    virtual void display()
    {
        cout << "Title of the Tape is: " << Title << endl;
        cout << "Price of the Tape is: " << Price << endl;
        cout << "Length of Tape(in Hours): " << Time << "h" << endl;
    }
};

int main()
{
    cout << "ATHARVA MULAM D10A 35\n";
    cout << "\n**Book Details**\n";
    Book B("Engineering Mathematics III", 699, 500);
    B.display();
    cout << "\n**Tape Details**\n";
    Tapes tape("CS50", 199, 10);
    tape.display();
    return 0;
}