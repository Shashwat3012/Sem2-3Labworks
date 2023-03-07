#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    printf("D5A_60_ShashwatTripathi\n");
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n==1)
	return 1; 
    else
        return n*multiplyNumbers(n-1);
}
