
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include  "stackdfn.h"
/*typedef struct node{
    void *dataPtr;
    struct node*next;
}DNODE;

typedef struct {
    int count;
    struct node*top;
}HNODE;*/
int main()
{

    HNODE *head;
    HNODE*temp=(DNODE*)malloc(sizeof(HNODE));
    int ch,*item;
    void *var;

    while(1)
    {
        printf("\n1:create stack\t2:push\t3:pop \t4:display\t 5:display stack top\t6:destroy stack\t7:exit\n");
        printf("enter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(!(head=createStack()))
                    printf("malloc failure\n");break;
            case 2:if((item = (int*)malloc(sizeof(int))))
                   {

                    printf("\n enter the element to be pushed\n");
                    scanf("%d",item);
                    push(&head,item);
                   }
                   // printf("%p\n",head->top);
                    break;
            case 3:if(pop(&head,&var))
                   {

                  // printf("%p",head->top);

                    printf("\nthe popped item is %d\n",*((int*)var));
                   }
                    else
                        printf("\nstack underflow\n");
                    break;
            case 4:
                    temp->top=head->top;
                if(!temp->top)
                    {
                    printf("\nstack is empty");
                    }
                    else
                    {


                    while(display(&temp,&var)){

                        printf("%d\t",*((int*)var));

                        }
                    }

                        break;
            case 5:if(stackTop(head,&var)){
                        printf("\nthe stack top is%d\n",*((int*)var));
                    }
                    else
                        printf("\nstack is empty\n");break;
            case 6:head=destroyStack(head);break;
            case 7:exit(0);
            default:printf("\ninvalid choice\n");
        }

    }

    return 0;
}

