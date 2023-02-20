#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int queue[MAX];
int front= -1, rear= -1;
void insert();
void delete();
void display();

int main(){
    int choice;
    printf("\n***************************");
    printf("\nChoose any operation-\n1.Insert \n2.Delete \n3.Display \n4.Exit");
    printf("\n***************************");
    do{
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: insert();
            break;

            case 2: delete();
            break;

            case 3: printf("The elements of Queue are: ");
            display();
            break;

            case 4:break;
        }
    }while(choice!=4);
    return 0;
}

void insert(){
    int n;
    printf("Enter the element to be inserted: ");
    scanf("%d", &n);

    if(rear== MAX-1){
        printf("The queue is full!");
    }
    else if(front== -1 && rear== -1){
        front= rear= 0;
    }
    else{
        rear= rear + 1;
    }
    queue[rear]= n;
}

void delete(){
    int val;
    if(front== -1 || front> rear){
        printf("The queue is empty!\n");
    }
    else{
        val = queue[front];
        if(front==rear){
            front = rear = -1;
        }
        else{
            front++;
        }
        printf("Value Deleted!");
    }
}

void display(){
    int i;
    printf("\n");
    if(front == -1 || front > rear){
        printf("The queue is empty");
    }
    else{
        for(i=front; i<= rear; i++){
            printf("%d \t",queue[i]);
        }
    }
}