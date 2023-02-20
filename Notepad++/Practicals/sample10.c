#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *createCll(struct node *);
struct node *insertBeg(struct node *);
struct node *insertMid(struct node *);
struct node *insertEnd(struct node *);
struct node *deleteBeg(struct node *);
struct node *deleteEnd(struct node *);
struct node *deleteMid(struct node *);
struct node *display(struct node *);
// struct node *deleteList(struct node *);

int main(){
    int choice;
    printf("\n********************************");
    printf("\n1.Create Circular LL");
    printf("\n2.Insert in beginning");
    printf("\n3.Insert in middle");
    printf("\n4.Insert at end");
    printf("\n5.Delete the beginning");
    printf("\n6.Delete in middle");
    printf("\n7.Delete at end");
    printf("\n8.Display the Linked List");
    printf("\n9.Exit");
    printf("\n********************************");

    do{
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: start = createCll(start);
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
    }while(choice != 9);
}

struct node *createCll(struct node *start){
    struct node *new_node, *ptr;
    int num;
    printf("\nEnter the data to insert(-1 to end): ");
    scanf("%d", &num);
    while(num != -1){
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node-> data = num;
        if(start == NULL){
            new_node-> next = new_node;
            start = new_node;
        }
        else{
            ptr = start;
            while(ptr-> next != start){
                ptr = ptr-> next;
            }
            ptr-> next = new_node;
            new_node-> next = start;
        }
        printf("\nEnter the data: ");
        scanf("%d", &num);
    }
    return start;
}

struct node *insertBeg(struct node *start){
    struct node *new_node, *ptr;
    int num;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    while (ptr->next != start){
        ptr = ptr->next;
    }  
    ptr->next = new_node;
    new_node->next = start;
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
    ptr = start;
    while(ptr-> next != start){
        ptr = ptr-> next;
    }
    ptr-> next = new_node;
    new_node-> next = start;
    return start;
}

struct node *deleteBeg(struct node *start){
    struct node *ptr;
    ptr = start;
    while(ptr-> next != start){
        ptr = ptr-> next;
    }
    ptr-> next = start-> next;
    free(start);
    start = ptr-> next;
    return start;
}

struct node *deleteMid(struct node *start){
    struct node *ptr, *preptr;
    int val;
    printf("\nEnter the value after which node has to be deleted: ");
    scanf("%d", &val);
    ptr = start;
    preptr = ptr;
    while(preptr-> data != val){
        preptr = ptr;
        ptr = ptr-> next;
    }
    preptr-> next = ptr-> next;
    if(ptr == start){
        start = preptr-> next;
    }
    free(ptr);
    return start;
}

struct node *deleteEnd(struct node *start){
    struct node *ptr, *preptr;
    ptr = start;
    while(ptr-> next != start){
        preptr = ptr;
        ptr = ptr-> next;
    }
    preptr-> next = ptr-> next;
    free(ptr);
    return start;
}

struct node *display(struct node *start){
    struct node *ptr;
    ptr = start;
    while(ptr-> next != start){
        printf("\t%d", ptr-> data);
        ptr = ptr-> next;
    }
    printf("\t%d", ptr-> data);
    return start;
}