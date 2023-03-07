#include<stdio.h>
void push(int *top, int a[], int x);
int pop(int *top, int a[]);
void display(int *top, int a[]);

int main()
{
    int a[100],x,i,n=100;
    int top=-1;
    int choice;

    do {
         printf("Enter your choice:-\n 1) Push\n 2)Pop\n 3)Display\n 4)Exit \n") ;
        scanf("%d", &choice);

        switch(choice){
            case 1: printf("Enter the element to be pushed\n");
            scanf("%d", &x);
            push(&top, a[100], x);
            break;

            case 2: x = pop(&top, a[100]);
            printf("The popped element is %d\n", x);
            break;

            case 3: display(&top, a[100]);
            break;

            case 4: break;


        }
    } while (choice != 4);

    return 0;
}
void push(int *top, int a[], int x){
    int n = 100;
    if(*top==(n-1)){
        printf("Stack is full\n");
    }
    else{
        *top=*top+1;
        a[*top]=x;
    }
}

int pop(int *top, int a[]){
    int x;
    if(*top<0){
        printf("Stack is empty\n");
        return 0;
    }
    else{
        x=a[*top];
        *top=*top-1;
        return x;
    }
}

void display(int *top, int a[]){
    for(int i = *top;i>= 0; i--){
        printf("%d\n", a[i]);
    }

}