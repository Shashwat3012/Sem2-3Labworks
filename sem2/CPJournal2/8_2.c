#include <stdio.h>
union Job
{

    double salary;
    int workerNo;
} j;

int main()
{
    printf("D5A_60_ShashwatTripathi\n");
    j.salary = 12.3;
    j.workerNo = 100;

    printf("Salary = %Lg\n", j.salary);
    printf("Number of workers = %d", j.workerNo);
    return 0;
}
