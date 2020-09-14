#include <stdio.h>
#include <stdlib.h>
// #include <stdbool.h>

struct Node{
	int data;
	struct Node *next;
};


struct Link_List
{
	struct Node *head;
	struct Node *tail;
};

short Link_List_Is_Empty(struct Node* head)
{
	return (head == NULL);
}

void Link_List_Push(int data, struct Node* head_ref)
{
	struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = NULL;

	if(head_ref==NULL)
	{
		head_ref->head = temp;
		head_ref->tail = temp;
	}

	else
	{
		head_ref->tail->next = temp;
		head_ref->tail = temp;
	}
}


void Link_List_Print(struct Node *head)
{
	if(Link_List_Is_Empty(head))
	{
		printf("List Empty\n");
	}

	else
	{
		struct Node* temp = head;
		while(temp->next != NULL)
		{
			printf("%d -> ", temp->data);
			temp = temp->next;
		}
		printf("\n");
	}
}

int main()
{
	struct Link_List l1;
	Link_List_Push(12, l1.head);
	Link_List_Push(224, l1.head);
	Link_List_Push(52, l1.head);
	Link_List_Push(54, l1.head);
	Link_List_Push(11, l1.head);
	Link_List_Push(587, l1.head);
	Link_List_Print(l1.head);
}