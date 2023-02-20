#include <stdio.h>
int array[100];
void binary_search(int n, int search)
{
    int first ,last, middle;
    first = 0;
    last = n - 1;
    middle = (first+last)/2;
    while (first <= last) {
        if (array[middle] < search) {
            first = middle + 1;
        } else if (array[middle] == search) {
            printf("%d found at location %d.\n", search, middle+1);
            break;
        } else {
            last = middle - 1;
        }
        middle = (first + last)/2;
    }
    if (first > last) {
        printf("Not found! %d is not present in the list.\n", search);
    }
}
void main()
{
    int c,n,search;
    printf("D10A_60_Shashwat Tripathi\n\n");
    printf("BINARY SEARCH\n");
    printf("Enter number of elements in list : ");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++) {
        scanf("%d", &array[c]);
    }
    printf("Enter element to search : ");
    scanf("%d", &search);
    binary_search(n,search);
}