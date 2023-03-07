// Program to identify number is palindrome or not
#include <stdio.h>
int main()
{
    printf("D5A_ShashwatTripathi_60\n");
    int n, r, sum = 0, temp;
    printf("enter the number=");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        printf("palindrome number ");
    else
        printf("not palindrome");
    return 0;
}
