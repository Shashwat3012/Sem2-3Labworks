// Write a program to implement insert, delete and display operations on a circular queue.

#include <stdio.h>
#include <stdlib.h>

# define max 10
int queue[max];
int front = -1;
int rear = -1;

void enqueue(int elem);
int dequeue();
void display();

int main(){
    int choice, x;
    printf("\n***********************************");
    printf("\nChoose any operation-\n1.Insert \n2.Delete \n3.Display \n4.Exit");
    printf("\n***********************************");

    do{
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: printf("Enter the element: ");
            scanf("%d", &x);
            enqueue(x);
            break;

            case 2: dequeue();
            break;

            case 3: display();
            break;

            case 4: printf("Exiting...");
            break;

            default: printf("Invalid Choice!");
        }
    }while(choice!=4);
    return 0;
}

void enqueue(int elem){
    if(front== -1 && rear== -1){
        front = 0;
        rear = 0;
        queue[rear] = elem;
    }
    else if((rear + 1) % max == front){
        printf("Queue is full!");
    }
    else{
        rear = (rear + 1) % max;
        queue[rear] = elem;
    }
}

int dequeue(){
    if((front == -1) && (rear == -1)){
        printf("\nQueue is Empty!");
    }
    else if(front == rear){
        printf("\nThe dequeued element is: %d", queue[front]);
        front = -1;
        rear = -1;
    }
    else{
        printf("\nThe dequeued element is: %d", queue[front]);
        front = (front + 1) % max;
    }
}

void display(){
    int  i = front;
    if(front == -1 && rear == -1){
        printf("Queue is Empty");
    }
    else{
        printf("Elements in the queue are: \n");
        while(i<=rear){
            printf("%d\t", queue[i]);
            i = (i + 1) % max;
        }
    }
}