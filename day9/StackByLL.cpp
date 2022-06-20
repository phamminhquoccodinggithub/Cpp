//Stack by Linked List
// Combine Insert Front (Pop) and Delete Front (push)
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int item;
    struct node *next;
};
// if a structure has a member of self type pointer then it is called as self
//+ referential structure

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
//Push: Put element on the top of stack
NODE insertFront(NODE first, int item)
{
    NODE temp = getNode();
    temp->item = item;
    temp->next = first;
    first = temp;
    return first;
}
//Pop: take the topmost element of the stack
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
    n=insertFront(n, 1);
    n=insertFront(n, 2);
    n=insertFront(n, 3);
    n=deleteFront(n);
    display(n);
    return 0;
}