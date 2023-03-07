// Program for Grade Calculations
#include<stdio.h>

int main()
{
    printf("D5A_ShashwatTripathi_60\n");
    int mark;
    printf("Enter a number:");
    scanf("%d", &mark);
    if(mark>95 && mark<=100){
        printf("O Grade");
    }
    else if(mark>90 && mark<=95){
        printf("A Grade");
    }
    else if(mark>80 && mark<=90){
        printf("B Grade");
    }
    else if(mark>70 && mark<=80){
        printf("C Grade");
    }
    else if(mark>60 && mark<=70){
        printf("D Grade");
    }
    else if(mark>50 && mark<=60){
        printf("E Grade");
    }
    else if(mark>=0 && mark<=50){
        printf("F Grade");
    }
    else{
        printf("Invalid Mark");
    }
    return 0;
}