// TW 9 Expression Tree

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node {
    char data;
    struct node* left;
    struct node* right;
    struct node* next;
};
 struct node *head=NULL;

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(char data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->next = NULL;

    return (node);
}

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}


void inorder(struct node* node)
{
    if(node)
    {
        if(isalnum(node->data))
            printf("%c", node->data);
        else
        {
            printf("(");
            inorder(node->left);
            printf("%c", node->data);
            inorder(node->right);
            printf(")");
        }
    }
}


void postorder(struct node *root)
{
 if(root!=NULL)
 {
  postorder(root->left);
  postorder(root->right);
  printf("%c ",root->data);
 }
}

void preorder(struct node *root)
{
 if(root!=NULL)
 {
  printf("%c ",root->data);
  preorder(root->left);
  preorder(root->right);
 }
}


void push(struct node* x)
{
    if(head==NULL)
    head = x;
    else
    {
        (x)->next = head;
        head  = x;
    }
}

struct node* pop()
{
    // Poping out the top most[ pointed with head] element
    struct node* p = head;
    head = head->next;
    return p;
}

int main()
{
    char s[30];
    printf("\nEnter the exp: ");
    gets(s);
    int l = strlen(s);
    for(int i=0;i<l;i++)
        printf("%c ", s[i]);
    printf("\nl = %d\n", l);
    struct node *x, *y, *z;
    for (int i = 0; i < l; i++) {
        // if read character is operator then poping two
        // other elements from stack and making a binary
        // tree
        if (s[i] == '+' || s[i] == '-' || s[i] == '*'
            || s[i] == '/')
        {
            z = newNode(s[i]);
            x = pop();
            y = pop();
            z->left = y;
            z->right = x;
            push(z);
        }
        else
        {
            z = newNode(s[i]);
            push(z);
        }
    }

    printf("The given expression is\n");
    for (int i = 0; i < l; i++)
    {
        printf("%c",s[i]);
    }

    printf(" \n The Inorder Traversal of Expression Tree:\t ");
    inorder(z);

    printf(" \n The Preorder Traversal of Expression Tree:\t ");
    preorder(z);

    printf(" \n The Postorder Traversal of Expression Tree:\t ");
    postorder(z);

    return 0;
}