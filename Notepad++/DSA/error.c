#include <stdio.h>
void push(int *top, int a[], int x);
int pop(int *top, int a[]);
void display(int *top, int a[]);

int main() {
    // Write C code here
    // printf("Hello world");

    int a[50], x, n =50;
    int top=-1;
    int choice;

    do{
        printf("Enter your choice:\n 1-To Push\n 2-To Pop\n 3-To Display\n 4-To Exit\n");
        scanf("%d", &choice);

        switch(choice){
            case 1: printf("Enter the element to be pushed: ");
            scanf("%d", &x);
            push(&top, a, x);
            break;

            case 2: x = pop(&top, a);
            printf("The popped element is: %d", x);
            break;

            case 3: display(&top, a);
            break;

            case 4: break;
        }
    }while(choice != 4);

    return 0;
}

void push(int *top, int a[], int x)
{
    int n=50;
   if(*top == (n-1)){
       printf("The stack is full!\n");
   }
   else{
       *top = *top+1;
       a[*top] = x;
   }
}

int pop(int *top, int a[])
{
    int x;
    if(*top<0){
        printf("Stack is empty!\n");
        return 0;
    }
    else{
        x = a[*top];
        *top = *top -1;
        return x;
    }
}

void display(int *top, int a[])
{
    for(int i= *top; i >=0; --i){
        printf("%d\n", a[i]);
    }
}

