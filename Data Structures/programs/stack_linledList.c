#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE;

// functions
void push_node( NODE **, int);
int pop_node(NODE **);
void display_node(NODE *);
int stack_top(NODE *);


int main()
{
    NODE *top=NULL;
    int opt,item;

    while(1) 
    {
        printf("1: push 2:pop 3:display 4:stacktop 5:exit");
        printf("Enter your options: ");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1: printf("\nEnter the item to be pushed: ");
                    scanf("%d",&item);
                    push_node(&top,&item);
                    break;

            case 2: printf("\n The popped item is: %d", pop_node(&top)); 
                    break;

            case 3: display_node(top); 
                    break;

            case 4: printf("\n Stack top is: %d", stack_top(&top));
                    break;

            default: printf("\n Enter a valid option: ");        

        }
    }
}


void push_node(NODE ** top, int item)
{
   NODE * tmp=(NODE*)malloc(sizeof(struct node));

    if(!tmp)
    {
        printf("Malloc failure\n");
        return;
    }
        

    else
        tmp->data=item;
        tmp->next=*top;
        *top=tmp;
}


int pop_node(NODE ** top)
{
    NODE *tmp=*top;
    int item;
    if(!top)
    {
        printf("Stack underflow\n");
        return -1;
    }

    item=(*top)->data;
    *top=(*top)->next;
    free(tmp);
    return item;
}


void display_node(NODE * top)
{
    if(!top)
    {
        printf("Stack empty\n");
        return;
    }
    printf("Stack contents are:\n");
    while(top)
    {
        printf("\n %d", top->data);
        top=top->next;
        
    }
}


int stack_top(NODE *top)
{
    if(!top)
    {
        printf("\n Stack is empty");
        return -2;
    }

    return top->data;
}
