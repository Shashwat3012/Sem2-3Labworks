#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *prev = NULL;
struct node *curr = NULL;
struct node *next = NULL;

struct node *create(struct node *);
struct node *insertBeg(struct node *);
struct node *insertEnd(struct node *);
struct node *insertMid(struct node *);
struct node *deleteBeg(struct node *);
struct node *deleteMid(struct node *);
struct node *deleteEnd(struct node *);
struct node *display(struct node *);

int main(int argc, char *argv[]){
    int choice;
    printf("\n*******************************");
    printf("\nChoose an Operation");
    printf("\n1.Create a Singly Linked List");
    printf("\n2.Insert node at beginning");
    printf("\n3.Insert node in middle");
    printf("\n4.Insert node at end");
    printf("\n5.Delete node at beginning");
    printf("\n6.Delete node in middle");
    printf("\n7.Delete node at end");
    printf("\n8.Display the Linked List");
    printf("\n9.Exit");
    printf("\n*******************************");

    do{
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: start = create(start);
                    printf("\nLinked List Created.");
                    break;
            case 2: start = insertBeg(start);
                    break;
            case 3: start = insertMid(start);
                    break;
            case 4: start = insertEnd(start);
                    break;
            case 5: start = deleteBeg(start);
                    break;
            case 6: start = deleteMid(start);
                    break;
            case 7: start = deleteEnd(start);
                    break;
            case 8: start = display(start);
                    break;
        }
    }while(choice!=9);
}

struct node *create(struct node *start){
    struct node *new_node, *ptr;
    int num;
    printf("\nEnter the data(enter -1 to stop): ");
    scanf("%d", &num);
    while(num!=-1){
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node -> data = num;
        if(start==NULL){
            new_node->next = NULL;
            start = new_node;
        }
        else{
            ptr = start;
            while(ptr->next != NULL)
                ptr = ptr->next;
            ptr->next = new_node;
            new_node->next = NULL;
        }
        printf("\nEnter the data: ");
        scanf("%d", &num);
    }
    return start;
}

struct node *insertBeg(struct node *start){
    struct node *new_node;
    int num;
    printf("\nEnter the data: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node-> data = num;
    new_node-> next = start;
    start = new_node;
    return start;
}

struct node *insertMid(struct node *start){
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("\nEnter the data: ");
    scanf("%d", &num);
    printf("\nEnter the value after which it has to be inserted: ");
    scanf("%d", &val);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node-> data = num;
    ptr = start;
    preptr = ptr;
    while(preptr->data != val){
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;
    return start;
}

struct node *insertEnd(struct node *start){
    struct node *new_node, *ptr;
    int num;
    printf("\nEnter the data: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node-> data = num;
    new_node-> next = NULL;
    ptr = start;
    while(ptr-> next != NULL){
        ptr = ptr-> next;
    }
    ptr-> next = new_node;
    return start;
}

struct node *deleteBeg(struct node *start){
    struct node *ptr;
    ptr = start;
    start = start-> next;
    free(ptr);
    return start;
}

struct node *deleteMid(struct node *start){
    struct node *ptr, *preptr;
    int val;
    printf("\nEnter the value to be deleted: ");
    scanf("%d", &val);
    ptr = start;
    if(ptr-> data == val){
        start = deleteBeg(start);
        return start;
    }
    else{
        while(ptr-> data != val){
            preptr = ptr;
            ptr = ptr-> next;
            if(ptr == NULL){
                printf("\nValue not present");
                return start;
            }
        }
        preptr-> next = ptr-> next;
        free(ptr);
        return start;
    }
}

struct node *deleteEnd(struct node *start){
    struct node *ptr, *preptr;
    ptr = start;
    while(ptr-> next != NULL){
        preptr = ptr;
        ptr = ptr-> next;
    }
    preptr-> next = NULL;
    free(ptr);
    return start;
}

struct node *display(struct node *start){
    struct node *ptr;
    ptr = start;
    while(ptr != NULL){
        printf("\t%d", ptr-> data);
        ptr = ptr-> next;
    }
    return start;
}