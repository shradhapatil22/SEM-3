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

NODE* newNode(int item)
{
    NODE * tmp=(NODE *)malloc(sizeof(NODE));
    tmp->data=item;
    tmp->left=tmp->right=NULL;
    return tmp;
}

NODE* addBST(NODE* root, int key)
{
    if(root==NULL)
        return newNode(key);
    if(key<root->data)
        root->left=addBST(root->left, key);
    else
        root->right=addBST(root->right, key);
    return root;
}

void preOrder(NODE *node)
{
    if(node==NULL){
        return;
    }  
    printf(" %d\n", node->data);
    preOrder(node->left);
    preOrder(node->right);
}

int main()
{
    int i,n,key;
    NODE *root=NULL;
    printf("\nEnter n: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter int %d: ", i+1);
        scanf("%d", &key);
        root=addBST(root, key);
    }
    return 0;
    printf("\n the preOrdertraversal is :\n");
    preOrder(root);
    return 0;
}
