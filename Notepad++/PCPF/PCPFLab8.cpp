#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
using namespace std;
mutex mu;
condition_variable cond;
int count = 1;
void PrintOdd()
{
    for (; count < 10;)
    {
        unique_lock<mutex> locker(mu);
        cond.wait(locker, []()
                  { return (count % 2 == 1); });
        cout << "From Odd : " << count << endl;
        count++;
        locker.unlock();
        cond.notify_all();
    }
}
void PrintEven()
{
    for (; count < 10;)
    {
        unique_lock<mutex> locker(mu);
        cond.wait(locker, []()
                  { return (count % 2 == 0); });
        cout << "From Even: " << count << endl;
        count++;
        locker.unlock();
        cond.notify_all();
    }
}
int main()
{
    cout << "D10A_60_Shashwat Tripathi" << endl
         << endl;
    thread t1(PrintOdd);
    thread t2(PrintEven);
    t1.join();
    t2.join();
    return 0;
}