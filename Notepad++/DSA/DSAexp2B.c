// Evaluation of postfix expression.

#include<stdio.h>
#include<ctype.h>

typedef struct
{
    int a[100];
    int top;
}stack;

void push(stack*s,int x);
int pop(stack*s);
int operation(char op,int p1,int p2);
int eval(char post[]);

void main()
{
    printf("D10A_60_Shashwat Tripathi\n");
    char postfix[20];
    printf("Enter an expression:");
    gets(postfix);
    printf("The result is: %d",eval(postfix));
}

void push(stack*s,int x)
{
    if(s->top==20)
        printf("Full");
    else
        s->a[++s->top]=x;
}

int pop(stack*s)
{
    int x;
    if(s->top<0)
        printf("Empty");
    else{
        x=s->a[s->top--];
        return x;
    }
}

int operation(char op,int p1,int p2)
{
    switch(op)
    {
        case '+':return p1+p2;
        case '-':return p1-p2;
        case '*':return p1*p2;
        case '/':return p1/p2;
    }
}

int eval(char post[])
{
    stack s;
    int i,p1,p2,p;
    s.top=-1;
    for(i=0;post[i]!='\0';++i)
    {
        if(isdigit(post[i]))
            push(&s,post[i]-'0');
        else
        {
            p2=pop(&s);
            p1=pop(&s);
            p=operation(post[i],p1,p2);
            push(&s,p);
        }
    }return pop(&s);
}

