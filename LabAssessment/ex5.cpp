#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
} * top;

void push(int data)
{
    Node *temp;
    temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    if (top == NULL)
    {
        top = temp;
        top->next = NULL;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
}

void pop()
{
    Node *temp;
    if (top == NULL)
    {
        cout << "Stack underflow\n";
        return;
    }
    else
    {
        temp = top;
        top = top->next;
        cout << "removed successfully\n";
        free(temp);
    }
}
void print(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    print(top);
    pop();
    print(top);
    return 0;
}