// Queue by Linked List
// Combine Insert Rear (Enqueue) and Delete Front (Dequeue)
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int item;
    struct node *next;
};
typedef struct node *NODE;
// malloc default return int type
NODE getNode()
{
    NODE x;
    x = (NODE)malloc(sizeof(struct node));
    // pointer type cast in C
    return x;
}
void display(NODE first)
{
    NODE temp = first;
    for (; temp != NULL; temp = temp->next)
    {
        printf(" %d ->", temp->item);
    }
    printf("\n");
}
// Enqueue: Put element in to the end of queue
NODE insertRear(NODE first, int item)
{
    NODE cur = first, temp;
    temp = getNode();
    temp->item = item;
    temp->next = NULL;
    if (first == NULL)
    {
        return temp;
    }

    while (cur->next != NULL)
    {
        cur = cur->next;
    }

    cur->next = temp;

    return first;
}
// Dequeue: Take the first element from the queue
NODE deleteFront(NODE first)
{
    NODE temp;
    temp = first;
    first = first->next;
    printf("Delete element is %d\n", temp->item);
    free(temp);
    return first;
}
int main()
{
    NODE n;
    n = insertRear(n, 1);
    n = insertRear(n, 2);
    n = insertRear(n, 3);
    n = deleteFront(n);
    display(n);
    return 0;
}