#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX=20

char stack[20];
int top=-1;

void push(char x)
{
    if (top==MAX-1)
    {
        printf("stack overflow");
    }
    stack[++top] = x;
}

char pop(char x)
{
    if(top== -1)
    {
        printf("stack underflow");
        return'#';
    }
    return stack[top--];
}

void balanced(char exp [])
{
    int i,count = 0;
    for(i=0,count=0;exp[i]!='/0';i++)
    {
        if(exp[i]=='(')
            count++;
        if(exp[i]==')')
            count--;
    }
    if(count==0)
        printf("Balanced expersion");
    else
    {
        printf("Imbalanced expersion");
        exit(1);
    }
        
}

int precedence(char )
{
    if(x=='(')
}