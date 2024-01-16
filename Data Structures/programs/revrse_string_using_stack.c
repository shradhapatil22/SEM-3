#include<stdio.h>
#include<stdlib.h>
#include <string.h> 


typedef struct node
{
    char data;
    struct node *next;
}NODE;
NODE *top=NULL;

void push_node( int item)
{
   NODE * tmp=(NODE*)malloc(sizeof(NODE));

    if(!tmp)
    {
        printf("Malloc failure\n");
        return;
    }
        

    else
        tmp->data=item;
        tmp->next=top;
        top=tmp;
}


char pop_node()
{
    NODE *tmp=top;
    int item;
    if(!top)
    {
        printf("Stack underflow\n");
        return -1;
    }

    item=top->data;
    top=tmp->next;
    free(tmp);
    return item;
}

int main(){
    char s[10];
    int i;
    printf("enter string : ");
    gets(s);
    
    for(i=0;i<strlen(s);i++){
        push_node(s[i]);
        
    }
    for(i=0;i<strlen(s);i++){
        printf("%c",pop_node(s[i]));
        
    }
    
}