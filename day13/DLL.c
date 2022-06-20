#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *llink, *rlink;
};

typedef struct node *NODE;

NODE getnode()
{
	NODE x;
	x = (NODE)malloc(sizeof(struct node));

	if (x == NULL)
	{
		printf("out of memory \n");
		exit(0);
	}
	return x;
}

void freenode(NODE x)
{

	free(x);
}

NODE insert_front(int item, NODE head)
{
	NODE temp, cur;
	temp = getnode();
	temp->info = item;

	cur = head->rlink;

	head->rlink = temp;
	temp->llink = head;
	temp->rlink = cur;
	cur->llink = temp;

	return head;
}

void display(NODE head)
{
	NODE temp;
	if (head->rlink == head)
	{
		printf("dequeue is empty\n");
		return;
	}
	printf("\n\ncontents of DLL are \n\n");
	for (temp = head->rlink; temp != head; temp = temp->rlink)
		printf("%d->", temp->info);
	printf("\n\n\n");
}
//================SelectionSort========///////

//================SelectionSort========///////
int main()
{
	NODE head;
	head = getnode();
	head->rlink = head;
	head = insert_front(1, head);
	head = insert_front(3, head);
	head = insert_front(2, head);
	head = insert_front(5, head);
	head = insert_front(-11, head);
	head = insert_front(15, head);
	display(head);
	return 0;
}
