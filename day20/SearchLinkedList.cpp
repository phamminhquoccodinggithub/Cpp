#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void push(Node **headRef, int data)
{
    // Allocate
    Node *newNode = new Node();
    // Put in data
    newNode->data = data;
    // Next as head, Prev as Null
    newNode->next = (*headRef);
    // Move the head point to new node
    (*headRef) = newNode;
}
void printList(Node *node)
{
    // traverse
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
bool linearSearch(Node *head, int value)
{
    Node *cur = head;
    // traverse
    while (cur != NULL)
    {
        if (cur->data == value)
        {
            return true;
        }
        cur = cur->next;
    }
    return false;
}
struct Node *middle(Node *first, Node *last)
{
    Node *cur = first;
    Node *temp = cur->next;
    if (first == NULL)
    {
        return NULL;
    }

    while (temp != last)
    {
        temp = temp->next;
        if (temp != last)
        {
            cur = cur->next;
            temp = temp->next;
        }
    }
    return cur;
}
int main()
{
    Node *node;
    push(&node, 4);
    push(&node, 3);
    push(&node, 2);
    push(&node, 1);
    printList(node);
    cout << linearSearch(node, 4) << endl;
    return 0;
}