#include <stdio.h>
#include <stdlib.h>


struct Node
{
	int data;
	struct Node *next;
};

typedef struct Node node;


node *list = NULL;
node *list_end;

void insert(int n){

	node *t = (node*)malloc(sizeof(node));
	t->data = n;
	t->next = NULL;

	if(list == NULL){
		list = t;
		list_end = t;
	}

	else{
		list_end->next = t;
		list_end = list_end->next;
	}
}


void printlist()
{
	if(list == NULL){
		printf("List is empty\n");
		return;
	}

	else{
		node *temp = list;
		while( temp != NULL)
		{
			printf("%d ", temp->data);
			temp = temp->next;
		}
		printf("\n");
	}
}

int main()
{

	insert(5);
	insert(4);
	insert(3);
	insert(2);
	insert(1);

	printlist();


}