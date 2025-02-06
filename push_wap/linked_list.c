#include "push_swap.h"

typedef struct node {
	int data;
	struct node *next;
} node;

void addtolist(node** root, int value)
{
	node* new_node = malloc(sizeof(node));
	new_node->data = value;
	new_node->next = NULL;

	if (*root == NULL)
	{
		*root = new_node;
	}
	else
	{
		node* temp = *root;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
}

int main()
{
	int i = -1;
	node* root = malloc(sizeof(node));
	root->data = 10;
	addtolist(&root, 20);
	addtolist(&root, 0);
	addtolist(&root, 3);
	while(i++ < 1000)
	{
		addtolist(&root, i);
		// i++;
	}
	while(root != NULL)
	{
		printf("%d\n", root->data);
		root = root->next;
	}
}