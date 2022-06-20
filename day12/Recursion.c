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
// Display recursion
void display(NODE first)
{
    if (first != NULL)
    {
        printf(" %d ->", first->item);
        display(first->next);
    }
}
void reverseDisplay(NODE first)
{
    printf("\n");
    if (first != NULL)
    {
        reverseDisplay(first->next);
        printf(" %d ->", first->item);        
    }
}

NODE insertFront(NODE first, int item)
{
    NODE temp = getNode();
    temp->item = item;
    temp->next = first;
    first = temp;
    return first;
}
int main()
{
    NODE first;
    first = insertFront(first, 1);
    first = insertFront(first, 2);
    first = insertFront(first, 3);
    first = insertFront(first, 4);
    display(first);
    reverseDisplay(first);
    return 0;
}