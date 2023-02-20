// Write a program to implement push,pop, peek and display operations on stack.
#include<stdio.h>

void push(int a[], int*top, int x);
int pop(int a[], int *top);
void display(int a[], int top);
void peek(int a[], int top);

void main(){
    int a[100],x,i,choice;
    int top = -1;
    printf("\n******************************");
    printf("\nChoose any operation- \n1.Push \n2.Pop \n3.Peek \n4.Display \n5.Exit");
    printf("\n******************************");
    do{
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: printf("Enter the element to be pushed: ");
        scanf("%d", &x);
        push(a,&top,x);
            break;
        
        case 2: x = pop(a, &top);
        printf("The popped element is: %d\n", x);
            break;

        case 3: peek(a, top);
            break;

        case 4: display(a, top);
            break;        
        default:
            break;
        }
    }while(choice!=5);
}

void push(int a[], int*top, int x){
    int n = 100;
    if(*top == n-1){
        printf("The stack is full!");
    }
    else{
        *top = *top + 1;
        a[*top] = x;
    }
}

int pop(int a[], int*top){
    int x;
    if(*top<0){
        printf("The stack is empty!");
        return 0;
    }
    else{
        x = a[*top];
        *top = *top - 1;
        return x;
    }
}

void peek(int a[], int top){
    printf("%d",a[top]);
}

void display(int a[], int top){
    int i;
    for(i=top; i>=0; --i){
        printf("%d\n",a[i]);
    }
}