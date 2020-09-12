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
};

short Link_List_Is_Empty(struct Node* head)
{
	return (head == NULL);
}

void Link_List_Push(int data, struct Node* head)
{
	struct Node* new_node = malloc(sizeof(struct Node));
	new_node->data = data;
	new_node->next = NULL;
	

	if(Link_List_Is_Empty(head))
	{
		
		head = new_node;
	}



	else
	{
		struct Node* temp = head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new_node;
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