#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int value);
int pop();
void display();

int main(){
    int choice, val;
    printf("\n**********************");
    printf("\n1.Push \n2.Pop \n3.Display \n4.Exit");
    printf("\n**********************");
    do{
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: printf("\nEnter the value to push: ");
                scanf("%d", &val);
                push(val);
                break;
        case 2: printf("\nPopped value is: %d", pop());
                break;
        case 3: display();
                break;
        }
    }while(choice != 4);
}

void push(int value){
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node-> data = value;
    if(top == NULL){
        new_node-> next = NULL;
    }
    else{
        new_node-> next = top;
    }
    top = new_node;
}

int pop(){
    if(top == NULL){
        printf("\nStack is empty");
    }
    else{
        struct node *temp = top;
        int tempData = top-> data;
        top = top-> next;
        free(temp);
        return tempData;
    }
}

void display(){
    if(top == NULL){
        printf("\nStack is empty");
    }
    else{
        printf("The stack is \n");
        struct node *temp = top;
        while (temp->next != NULL){
            printf("%d\t", temp->data);
            temp = temp-> next;
        }
        printf("%d\n", temp->data);
    }
}