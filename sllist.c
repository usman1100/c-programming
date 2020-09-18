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

void printrecur(node *list){
	if(list == NULL) return;
	else{
		printf("%d", list->data);
		if(list->next != NULL) printf(" -> ");
		else printf("\n");
		printrecur(list->next);
	}
}

// void insertCustom(int n, node **list_ref, node **list_end_ref)
// {
// 	node *t = (node*)malloc(sizeof(node));
// 	t->data = n;
// 	t->next = NULL;

// 	node* list = *list_ref;
// 	node* list_end = *list_end_ref;

// 	if(list == NULL){
// 		list = t;
// 		list_end = t;
// 	}

// 	else{
// 		list_end->next = t;
// 		list_end = list_end->next;
// 	}
// }


// void printlistCustom(node **list_ref){
// 	node *list = *list_ref;

// 	node *temp = list;

// 	while(temp != NULL)
// 	{
// 		printf("%d ", temp->data);
// 		temp = temp->next;
// 	}

// 	printf("\n");
// }

int main()
{

	node* list2 = NULL;
	node* list2_end;

	for (int i = 0; i < 100; ++i)
	{
		insert(i+1);
	}
	printlist();
	printrecur(list);

	


}