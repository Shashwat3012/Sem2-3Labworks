#include <stdio.h>
#include <string.h>
int main()
{
    printf("D5A_60_ShashwatTripathi\n");
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));

    return 0;
}
