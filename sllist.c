#include <stdio.h>
#include <stdlib.h>


struct Node{
	int data;
	struct Node* next;
};

typedef struct Node node;


void printList(node *head){
	node *temp = head;

	while(temp != NULL){
		printf("%d", temp->data);

		if(temp->next != NULL) printf(" -> ");

		temp = temp->next;
	}

	printf("\n");
}


node* create_new_node(int data)
{
	node *new = malloc(sizeof(node));

	new->data = data;
	new->next = NULL;

	return new;
}


int main()
{
	node *head = NULL;
	node *temp;

	for (int i = 0; i < 10; ++i)
	{
		temp = create_new_node(i+1);
		temp->next = head;
		head = temp;
	}

	printList(head);
}