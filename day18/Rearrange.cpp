#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printList(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr)
    {
        printf("%d —> ", ptr->data);
        ptr = ptr->next;
    }

    printf("NULL\n");
}

void push(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Recursive function to rearrange the list
void rearrange(struct Node *head, struct Node *odd, struct Node *even,
               struct Node **oddRef)
{
    // we have reached the end of the list
    if (head == NULL)
    {
        // null terminate the list
        odd->next = NULL;

        // join even and odd sublist
        even->next = (*oddRef)->next;
        return;
    }

    // if the current node is odd
    if (head->data & 1)
    {
        odd->next = head;
        rearrange(head->next, head, even, oddRef);
    }

    // if the current node is even
    else
    {
        even->next = head;
        rearrange(head->next, odd, head, oddRef);
    }
}

// Rearrange a given linked list by separating odd nodes
// from even ones and maintaining their relative order.
void rearrangeEvenOdd(struct Node **head)
{
    struct Node *odd = (struct Node *)malloc(sizeof(struct Node));
    struct Node *even = (struct Node *)malloc(sizeof(struct Node));

    rearrange(*head, odd, even, &odd);
    *head = even->next;

    free(odd);
    free(even);
}

int main(void)
{
    Node *head = NULL;
    push(&head, 12);
    push(&head, 13);
    push(&head, 14);
    push(&head, 15);
    push(&head, 16);
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    printList(head);
    rearrangeEvenOdd(&head);
    printList(head);

    return 0;
}
