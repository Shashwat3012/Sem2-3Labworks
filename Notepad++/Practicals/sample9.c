#include <stdio.h>
#include <ctype.h>
#include <string.h>
typedef struct{
    int a[100];
    int top;
}stack;

void push(stack *s, int x);
int pop(stack *s);
int operation(char op, int p1, int p2);
int eval(char post[]);

void main(){
    char prefix[20];
    char postfix[20];
    printf("\nEnter a postfix expression: ");
    gets(prefix);
    postfix[20] = strrev(prefix[20]);
    printf("The result is: %d", eval(postfix));
}

void push(stack *s, int x){
    if(s-> top == 20){
        printf("Stack is full");
    }
    else{
        s-> a[++s-> top] = x;
    }
}

int pop(stack *s){
    int x;
    if(s-> top < 0){
        printf("Empty!");
    }
    else{
        x = s->a[s-> top--];
        return x;
    }
}

int operation(char op, int p1, int p2){
    switch(op){
        case '+': return p1+p2;
        case '-': return p1-p2;
        case '*': return p1*p2;
        case '/': return p1/p2;
    }
}

int eval(char post[]){
    stack s;
    int i,p1,p2,p;
    s.top = -1;
    for(i=0; post[i] != '\0'; ++i){
        if(isdigit(post[i])){
            push(&s, post[i] - '0');
        }
        else{
            p2 = pop(&s);
            p1 = pop(&s);
            p = operation(post[i], p1, p2);
            push(&s, p);
        }
    }
    return pop(&s);
}




char *preToPost(char *pre_exp)
{
 
    stack s;
    // length of expression
    int length = sizeof(pre_exp);
 
    // reading from right to left
    for (int i = length - 1; i >= 0; i--)
    {
        // check if symbol is operator
        if (isOperator(pre_exp[i]))
        {
            // pop two operands from stack
            char *op1 = s.top;
            pop(s);
            char *op2 = s.top;
            pop(s);
 
            // concat the operands and operator
            char *temp = op1 + op2 + pre_exp[i];
 
            // Push string temp back to stack
            s.push(temp);
        }
 
        // if symbol is an operand
        else {
 
            // push the operand to the stack
            s.push(string(1, pre_exp[i]));
        }
    }
 
    // stack contains only the Postfix expression
    return s.top();
}