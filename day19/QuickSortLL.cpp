#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void push(Node **headRef, int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = *headRef;
    *headRef = newNode;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *node;
    push(&node, 1);
    push(&node, 6);
    push(&node, 3);
    push(&node, 5);
    push(&node, 7);
    push(&node, 9);
    print(node);
    return 0;
}