#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};
// Insert Front
void push(Node **headRef, int data)
{
    // Allocate
    Node *newNode = new Node();
    // Put in data
    newNode->data = data;
    // Next as head, Prev as Null
    newNode->next = (*headRef);
    newNode->prev = NULL;
    // Change prev of head node to new node
    if ((*headRef) != NULL)
    {
        (*headRef)->prev = newNode;
    }
    // Move the head point to new node
    (*headRef) = newNode;
}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
void printListReverse(Node *node)
{
    Node *last;
    while (node != NULL)
    {
        last = node;
        node = node->next;
    }
    while (last != NULL)
    {
        cout << last->data << " ";
        last = last->prev;
    }
    cout << endl;
}
void insertAfter(Node *prevNode, int data)
{
    if (prevNode == NULL)
    {
        cout << "Prev node cannot be NULL\n";
        return;
    }
    // Allocate
    Node *newNode = new Node();
    // Set data;
    newNode->data = data;
    // Set next of NewNode
    newNode->next = prevNode->next;
    // Set next of prevNode
    prevNode->next = newNode;
    // Set prev of newNode
    newNode->prev = prevNode;

    // Set prev of newNode's next Node;
    if (newNode->next != NULL)
    {
        newNode->next->prev = newNode;
    }
}
void insertBefore(Node *nextNode, int data)
{
    if (nextNode == NULL)
    {
        cout << "Next node cannot be NULL\n";
        return;
    }
    // Allocate
    Node *newNode = new Node();
    // Set data;
    newNode->data = data;
    // Set next of NewNode
    newNode->next = nextNode;
    // Set prev of nextNode
    nextNode->prev = newNode;
    // Set prev of newNode
    newNode->prev = nextNode->prev->prev;

    // Set next of newNode's prev Node;
    if (newNode->prev != NULL)
    {
        newNode->prev->next = newNode;
    }
}
void append(Node **headRef, int data)
{
    // Allocate
    Node *newNode = new Node();
    Node *last = *headRef;
    // Set data
    newNode->data = data;
    // Set null
    newNode->next = NULL;
    // If empty list, make newNode
    if (*headRef == NULL)
    {
        newNode->prev = NULL;
        *headRef = newNode;
        return;
    }
    // Else traverse till the last node
    while (last->next != NULL)
    {
        last = last->next;
    }
    // chage next of last node
    last->next = newNode;
    // change prev of newNode
    newNode->prev = last;
    return;
}
void deleteNode(Node **headRef, Node *del)
{
    if (*headRef == NULL || del == NULL)
    {
        return;
    }
    // if del node is head node
    if (*headRef == del)
    {
        *headRef = del->next;
    }
    // If del node is not the last
    if (del->next != NULL)
    {
        del->next->prev = del->prev;
    }
    // If del node is not the first
    if (del->prev != NULL)
    {
        del->prev->next = del->next;
    }
    free(del);
    return;
}
void reverse(Node **headRef)
{
    Node *temp = NULL;
    Node *cur = *headRef;
    // swap next and prev of all nodes
    while (cur != NULL)
    {
        temp = cur->prev;
        cur->prev = cur->next;
        cur->next = temp;
        cur = cur->prev;
    }
    // check if empty list or only 1 node in list
    if (temp != NULL)
    {
        *headRef = temp->prev;
    }
}
int main()
{
    Node *n;
    push(&n, 5);
    push(&n, 4);
    push(&n, 3);
    push(&n, 1);
    // insertAfter(n->next, 7);
    append(&n, 10);
    // insertBefore(n,7);
    printList(n);
    printListReverse(n);
    // cout << endl;
    //  deleteNode(&n, n);
    //  printList(n);
    //  reverse(&n);
    //  cout<<endl;
    //  printList(n);
    return 0;
}