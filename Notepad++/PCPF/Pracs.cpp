#include <iostream>
using namespace std;
class marks
{
public:
    string name;
    int rollno, marksp, marksc, marksm, total = 0;

    void getinfo()
    {
        cout << "\nEnter student's physics marks-";
        cin >> marksp;
        cout << "\nEnter student's chemistry marks-";
        cin >> marksc;
        cout << "\nEnter student's maths marks-";
        cin >> marksm;
    }
    int totl()
    {

        total = marksc + marksm + marksp;
        return total;
    }
};
class physics : public marks
{
public:
    int marks;
};
class chemistry : public marks
{
public:
    int marks;
};
class maths : public marks
{
public:
    int marks;
};
int main()
{
    int t, n, avg, sum = 0;
    cout << "Enter the number of students-";
    cin >> n;
    marks m[n];
    for (int i = 0; i < n; i++)
    {
        m[i].getinfo();
    }
    cout << m[1].marksp << m[1].marksc << m[1].marksm;
    for (int j = 0; j < n; j++)
    {
        t = m[j].totl();
        cout << "\ntotal marks of student " << j + 1 << " is- " << t;
        sum = sum + m[j].totl();
    }

    n *= 3;
    avg = sum / n;
    cout << "\navg marks of the class is " << avg;
    return 0;
}