#include <iostream>
#include <string>
using namespace std;

class myException : public exception
{
public:
    const char *what() const throw()
    {
        return "Invalid Number: You have entered -99 to add in the sum!\n";
    }
};

int main()
{
    cout << "D10A_60_Shashwat Tripathi" <<endl;
    int x, sum = 0;

    do
    {
        cout << "Please enter a number:\n";
        cin >> x;
        if (x != -99)
        {
            sum = sum + x;
            cout << "SUM: ";
            cout << sum << endl;
        }
    } while (x != -99);
    if (x = -99)
    {
        try
        {
            if (x == -99)
            {
                throw new myException;
            }
        }
        catch (myException e)
        {
            cout << e.what() << endl;
        }
    }
}