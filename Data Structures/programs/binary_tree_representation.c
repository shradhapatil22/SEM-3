#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

typedef struct node
{
    int data;
    struct node *left,*right;
}NODE;

NODE* createNode(int item)
{
    NODE *tmp=(NODE*)malloc(sizeof(struct node));
    tmp->data = item;
    tmp->left=tmp->right-NULL;
    return node;
}
void main()
{
    int item;
    NODE *root;
    printf("Enter the item");
    scanf("%d",&item);
    root=createNode(item);
    printf("%d",root->data);
}
