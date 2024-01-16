#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next, *prev;
}NODE;


// Function protoypes 
NODE* addFront(NODE*);
NODE* addRear(NODE*);
void disp(NODE*);
void search(NODE*);


int main()
{
    int opt,item;
    NODE*head=NULL; // create an doubly inked list
    while(1)
    {
        
        printf("\n \n 1:FrontAdd, \n 2:RearAdd \n 3:Display\n 4:Search\n 5: Exit\n");
        printf("\nEnter your option\n");
        scanf("%d",&opt);


        switch(opt)
        {
            case 1: head=addFront(head);
                    break;

            case 2: head=addRear(head); 
                    break;

            case 3: disp(head); 
                    break;

            case 4: search(head); 
                    break;

            case 5: exit(0);
                    break;

            default: printf("\n Enter a valid option\n");
        }
    }

    return 0;
}

//Adding a node at the front of the doubly linked list
NODE* addFront(NODE* head)
{
    int data;
    NODE *tmp;

    tmp=(NODE*)malloc(sizeof(NODE));

    if(tmp==NULL)
    {
        printf("Malloc failed");
        exit(1);
    }
    printf("\n Enter the item to be inserted at front of the list\n");
    scanf("%d",&data);

    tmp->data=data;
    tmp->prev=tmp->next=NULL;

    if(head==NULL) // for empty list
        head=tmp;
    else // list had atleast one data node
    {
        tmp->next=head;
        head->prev=tmp;
        head=tmp;
    }
    
    return head;

}

// Display function
void disp(NODE *head)
{
    if(head==NULL)
    {
        printf("\n List is empty\n");
        return;
    }
    else
    {
        printf("\nThe list contents are: \n");
        while(head)
        {
            printf("\n %d",head->data);
            head=head->next;
        }
    }
}


// Adding an item at rear
NODE* addRear(NODE* head)
{
    NODE *traverse;
    int data;
    NODE *tmp;

    tmp=(NODE*)malloc(sizeof(NODE));

    if(tmp==NULL)
    {
        printf("\nMalloc failed\n");
        exit(1);
    }
    printf("\n Enter the item to be inserted at rear of the list\n");
    scanf("%d",&data);

    tmp->data=data;
    tmp->prev=tmp->next=NULL;

    if(head==NULL) // for empty list
        head=tmp;
    else // list had atleast one data node
    {
        traverse=head;
        while(traverse->next)
        {
            
            traverse=traverse->next;
            /*
            traverse=traverse->next;
            traverse->prev=tmp;
            tmp->prev=traverse;*/
        }
        traverse->next=tmp;
        tmp->prev=traverse;
    }
    
    return head;
}


// Search function
void search(NODE * head)
{
    int data, count=0;

    if(head==NULL)
    {
        printf("\n List is empty\n");
        return;
    }

    printf("\n Enter the item to be searched in the list\n ");
    scanf("%d",&data);

    while(head)
    {
        if(data==head->data)
        {
            printf("\n Data  %d found at %d\n", head->data, count);
            return;// check for multiple ocurrances
        }
        else
        {
            count=count+1;
            head=head->next;
        }
    }
    printf("\n Data not found\n");
}