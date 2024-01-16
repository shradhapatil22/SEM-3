#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack[MAX];
int top=-1;

void push(int item);
int pop();

int main()
{
    push(15);
    push(20);
    push(30);
    pop();
    pop();
    return 0;
}


void push(int item)
{
    if(top==MAX-1)
    {
        printf("\nStack Overflow");
        return;
    }
    stack[++top]=item;
}

int pop()
{
    if(top==-1)
    {
        printf("\nStack Underflow");
        return(-1);
    }
    return(stack[top--]);

}