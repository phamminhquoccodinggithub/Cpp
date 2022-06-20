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
NODE insertFront(NODE first, int item)
{
    NODE temp = getNode();
    temp->item = item;
    temp->next = first;
    first = temp;
    return first;
}
NODE merge(NODE x, NODE y)
{
    NODE cur = x;
    for (; cur->next != NULL; cur = cur->next)
        ;
    cur->next = y;

    return x;
}
NODE reverse(NODE x)
{
    NODE cur = x;
    NODE prev = NULL, next = NULL;
    while (cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    x = prev;
    return x;
}
int main()
{
    NODE first, second;
    for (int i = 0; i < 5; i++)
    {
        first = insertFront(first, i);
    }
    display(first);
    for (int i = 5; i < 10; i++)
    {
        second = insertFront(second, i);
    }
    display(second);
    first = merge(first, second);
    display(first);
    return 0;
}