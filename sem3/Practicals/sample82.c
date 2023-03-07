#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front;
struct node *rear;

void insert();
void delete();
void display();

void main(){
    int choice;
    printf("\n**************************");
    printf("\nOperations are: ");
    printf("\n1.Insert element \n2.Delete element \n3.Display queue \n4.Exit");
    printf("\n**************************");
    do{
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: display();
                    break;
        }
    }while(choice != 4);
}

void insert(){
    struct node *ptr;
    int val;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL){
        printf("\nThe queue is full");
        return;
    }
    else{
        printf("\nEnter the value: ");
        scanf("%d", &val);
        ptr-> data = val;
        if(front == NULL){
            front = ptr;
            rear = ptr;
            front-> next = NULL;
            rear-> next = NULL;
        }
        else{
            rear-> next = ptr;
            rear = ptr;
            rear-> next = NULL;
        }
    }    
}

void delete(){
    struct node *ptr;
    if(front == NULL){
        printf("\nQueue is empty");
        return;
    }
    else{
        printf("\nElement is deleted");
        ptr = front;
        front = front-> next;
        free(ptr);
    }
}

void display(){
    struct node *ptr;
    ptr = front;
    if(front == NULL){
        printf("\nQueue is empty");
    }
    else{
        printf("\nPrinting queue...\n");
        while(ptr != NULL){
            printf("%d\t", ptr-> data);
            ptr = ptr-> next;
        }
    }
}