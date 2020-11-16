#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
} Node;

Node* insert(Node *head, int data)
{
    // Variables
    Node *start = head;
    Node *node = head;

    // Create the new element
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->data = data;

    if (start == NULL) {
        start = newNode;
    } else {
        while(node->next != NULL)
        {
            node = node->next;
        }

        node->next = newNode;
    }

    return start;
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}

int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
		
}
