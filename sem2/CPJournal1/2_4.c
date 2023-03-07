// Program to implement nested if-else statement
#include <stdio.h>
int main()
{
    printf("D5A_ShashwatTripathi_60\n");
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    if (number1 >= number2)
    {
        if (number1 == number2)
        {
            printf("Result: %d = %d", number1, number2);
        }
        else
        {
            printf("Result: %d > %d", number1, number2);
        }
    }
    else
    {
        printf("Result: %d < %d", number1, number2);
    }
    return 0;
}
