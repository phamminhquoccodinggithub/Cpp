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
//=======Selection Sort=====/////
void selectionSort(NODE n)
{
    NODE temp = n;
    while (temp != NULL)
    {
        NODE min = temp;
        NODE next = temp->next;
        while (next != NULL)
        {
            if (min->item > next->item)
            {
                min = next;
            }
            next = next->next;
        }
        int val = temp->item;
        temp->item = min->item;
        min->item = val;
        temp = temp->next;
    }
}
//=======Selection Sort=====/////
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
NODE deleteFront(NODE first)
{
    NODE temp;
    temp = first;
    first = first->next;
    printf("Delete element is %d\n", temp->item);
    free(temp);
    return first;
}
NODE deleteRear(NODE first)
{
    NODE temp;
    NODE cur = first, prev;

    while (cur->next != NULL)
    {
        prev = cur;
        cur = cur->next;
    }
    temp = cur;
    printf("Delete element is %d\n", temp->item);
    free(temp);
    prev->next = NULL;
    return first;
}
NODE insertAtPosition(NODE first, int item, int pos)
{
    int pov = 1;
    NODE temp = getNode();
    NODE prev, cur = first;
    temp->item = item;
    while (cur != NULL && pov != pos)
    {
        prev = cur;
        cur = cur->next;
        pov++;
    }

    prev->next = temp; // insert done with help of temp
    temp->next = cur;
    return first;
}
NODE deleteAtPosition(NODE first, int pos)
{
    NODE cur, prev;
    int pov = 1;
    prev = NULL;
    cur = first;
    while (cur != NULL && pov != pos)
    {
        prev = cur;
        cur = cur->next;
        pov++;
    }
    prev->next = cur->next;
    free(cur);
    return first;
}
int main()
{
    NODE first;
    first = insertFront(first, 9);
    first = insertFront(first, 12);
    first = insertFront(first, 45); // 45->12->9
    first = insertFront(first, 100);
    first = insertRear(first, 101);
    first = insertFront(first, 10);
    selectionSort(first);
    display(first);
    return 0;
}