#include <stdio.h>
#include <stdlib.h>

// Structs
typedef struct node
{
    int data;
    struct node *next;
} Node;
typedef struct
{
    Node *head;
} Head;

// Prototypes
void initHead(Head *);
int push(Head *, int);
int pushOnce(Head *, int);
int search(Head *, int);
void display(Head *);
void computeUnion(Head *, Head *, Head *);
void computeIntersection(Head *, Head *, Head *);

int main()
{
    Head l1, l2;

    // Initialize
    initHead(&l1);
    initHead(&l2);

    // Read data
    int N;
    printf("How many numbers? ");
    scanf("%d", &N);

    printf("Enter %d numbers: ", N);
    while (N--)
    {
        int data;
        scanf("%d", &data);

        push(&l1, data);
    }

    printf("How many numbers? ");
    scanf("%d", &N);

    printf("Enter %d numbers: ", N);
    while (N--)
    {
        int data;
        scanf("%d", &data);

        push(&l2, data);
    }

    Head l_union, l_intersect;
    computeUnion(&l1, &l2, &l_union);
    computeIntersection(&l1, &l2, &l_intersect);

    printf("\nUnion:\n");
    display(&l_union);

    printf("\nIntersection:\n");
    display(&l_intersect);

    return 0;
}

// Definitions
void initHead(Head *head)
{
    head->head = NULL;
}
int push(Head *head, int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    if (!node)
        return 1;

    // Copy data
    node->data = data;
    node->next = NULL;

    if (!head->head)
        head->head = node;
    else
    {
        Node *temp = head->head;
        while (temp->next)
            temp = temp->next;

        temp->next = node;
    }

    return 0;
}
int pushOnce(Head *head, int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    if (!node)
        return 1;

    // Copy data
    node->data = data;
    node->next = NULL;

    if (!head->head)
        head->head = node;
    else
    {
        Node *temp = head->head;
        while (temp->next)
            if (temp->data == data)
                return 1;
            else
                temp = temp->next;

        temp->next = node;
    }

    return 0;
}
int search(Head *head, int data)
{
    if (!head->head)
        return -1;

    Node *temp = head->head;
    int index = 0;
    while (temp)
        if (temp->data == data)
            return index;
        else
        {
            index++;
            temp = temp->next;
        }

    return -1;
}
void display(Head *head)
{
    if (!head->head)
    {
        printf("Empty list\n");
        return;
    }

    Node *temp = head->head;
    while (temp)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("N\n");
}
void computeUnion(Head *head1, Head *head2, Head *out)
{
    // Initialize head
    initHead(out);

    // Traverse and add from head1
    Node *temp = head1->head;
    while (temp)
    {
        pushOnce(out, temp->data);
        temp = temp->next;
    }

    // Traverse and add from head2
    temp = head2->head;
    while (temp)
    {
        pushOnce(out, temp->data);
        temp = temp->next;
    }
}
void computeIntersection(Head *head1, Head *head2, Head *out)
{
    // Initialize head
    initHead(out);

    // Traverse and add from head1 if item exists in head2
    Node *temp = head1->head;
    while (temp)
    {
        if (search(head2, temp->data) != -1)
            pushOnce(out, temp->data);
        temp = temp->next;
    }
}