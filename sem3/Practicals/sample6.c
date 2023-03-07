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
struct node *sort(struct node *);
struct node *display(struct node *);

int main(int argc, char *argv[]){
    int choice;
    printf("\n*******************************");
    printf("\nChoose an Operation");
    printf("\n1.Create a Singly Linked List");
    printf("\n2.Insert node at beginning");
    printf("\n3.Insert node in middle");
    printf("\n4.Insert node at end");
    printf("\n5.Sort the Linked List");
    printf("\n6.Display the linked list");
    printf("\n7.Exit");
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
            case 5: start = sort(start);
                    break;
            case 6: start = display(start);
                    break;
        }
    }while(choice!=7);
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

struct node *sort(struct node *start){
    struct node *current = start;
    struct node *index = NULL;
    int temp;

    if(start == NULL){
        return start;
    }
    else{
        while(current != NULL){
            index = current-> next;
            while(index != NULL){
                if(current-> data > index-> data){
                    temp = current-> data;
                    current-> data = index-> data;
                    index-> data = temp;
                }
                index = index-> next;
            }
            current = current-> next;
        }

    }
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
