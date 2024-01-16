#include<stdio.h>
#include<stdlib.h>

// An AVL tree node
typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    int height;
}NODE;

// Function to get the height of the tree
int height(struct Node *N)
{
    if (N == NULL)
        return 0;
    return N->height;
} 

// Function to get maximum of two integers
int max(int a, int b)
{
    if(a>b)
        return a;
    if(b>a)
        return b;
}

// allocates new node
NODE* newNode(int key)
{
    NODE* node = (NODE*)malloc(sizeof(struct Node));
    node->data   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  // new node is initially added at leaf
    return(node);
}

//  Function to right rotate subtree rooted with y
NODE* rightRotate(NODE *y)
{
    NODE *x = y->left;
    NODE *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(height(y->left), height(y->right))+1;
    x->height = max(height(x->left), height(x->right))+1;

    // Return new root
    return x;
}

// Function to left rotate subtree rooted with x

NODE* leftRotate(NODE *x)
{
    NODE *y = x->right;
    NODE *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max(height(x->left), height(x->right))+1;
    y->height = max(height(y->left), height(y->right))+1;

    // Return new root
    return y;
}

// Get Balance factor of node N
int getBalance(NODE *N)
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

// Recursive function to insert a key in the subtree rooted
// with node and returns the new root of the subtree.
NODE* insert(NODE* node, int key)
{
    //1.  Perform the normal BST insertion 
    if (node == NULL)
        return(newNode(key));
    if (key < node->data)
        node->left  = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);
    else // Equal keys are not allowed in BST
        return node;

    // 2. Update height of this ancestor node 
    node->height = 1 + max(height(node->left),height(node->right));

    // 3. Get the balance factor of this ancestor
    //      node to check whether this node became unbalanced 
    int balance = getBalance(node);
    
    if (balance > 1 && key < node->left->data)
        return rightRotate(node);
    // Right Right Case
    if (balance < -1 && key > node->right->data)
        return leftRotate(node);
    // Left Right Case
    if (balance > 1 && key > node->left->data)
    {
        node->left =  leftRotate(node->left);
        return rightRotate(node);
    }
    // Right Left Case
    if (balance < -1 && key < node->right->data)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    /* return the (unchanged) node pointer */
    return node;
}
// A utility function to print preorder traversal
// of the tree.
// The function also prints height of every node
void postOrder(NODE *root)
{
    if(root != NULL)
    {
        
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}


//Driver program 
int main()
{
    NODE *root = NULL;
    int n,item,i;
    printf("\nEnter the number of nodes\n");
    scanf("%d",&n);
    printf("\nEnter the nodes\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&item);
        root = insert(root,item);
    }
    printf("\nPostorder traversal of the constructed AVL tree is \n");
    postOrder(root);
    return 0;
}
