#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    void *dataPtr;
    struct node*next;
}DNODE;
typedef struct {
    int count;
    struct node*top;
}HNODE;

HNODE* createStack(){
HNODE* head=(HNODE *)malloc(sizeof(HNODE));
    if(head)
    {
        head->count=0;
        head->top=NULL;

    }
    return head;

}

bool isEmpty(HNODE *head)
{

    if(head->count)
     return false;
     return true;
}
bool isFull()
{
    DNODE *temp=(DNODE *)malloc(sizeof(DNODE));
    if(temp){
        return false;
    }
    else
        return true;
}
bool push(HNODE** head,void *dataPtr)
{
    if(!isFull())
    {
        DNODE *temp=(DNODE *)malloc(sizeof(DNODE));
        //temp->dataPtr=(int*) malloc(sizeof(int));
        //*((int*)temp->dataPtr) = *((int*) dataPtr);
        temp->dataPtr = dataPtr;
        temp->next=(*head)->top;
       (*head)->top=temp;
       (*head)->count++;
       return true;

    }
    else
        return false;

}

bool pop(HNODE **head,void**var){

    if(!isEmpty(*head))
        {
        DNODE *temp;
        temp=(*head)->top;
        printf("%d",*((int*)temp->dataPtr));
        *var=temp->dataPtr;
        (*head)->top=temp->next;
        (*head)->count--;
        free(temp);
        return true;
        }
    else

    return false;
}
bool display(HNODE **head,void **var)
{

    if((*head)->top)
        {
           *var=(*head)->top->dataPtr;
            (*head)->top=(*head)->top->next;
            return true;

        }


        return false;

}
bool stackTop(HNODE *head,void**var){
    if(!isEmpty(head)){
        *var=head->top->dataPtr;
        return true;
    }
    return false;
}
HNODE* destroyStack(HNODE*head){
DNODE *temp;
if(head->count){
    while(!head->top){
        free(head->top->dataPtr);
        temp=head->top;
        free(temp);
        head->top=head->top->next;
    }
}

free(head);
return NULL;
}

