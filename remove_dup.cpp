#include<iostream>
#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;	
};

void remove_dup(struct node **head)
{
	struct node *curr=*head;
	while(curr->next)
	{
	    if(curr->next->data == curr->data)
		{
			curr->next=curr->next->next;
		}
		else
		{
			curr=curr->next;
		}
	}
	
}


void insert_at_beg(struct node **head,int data)
{
	struct node* n = (struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->next=*head;
	*head=n;
}

int main()
{
	struct node *head=NULL;
	
	insert_at_beg(&head,3);
	insert_at_beg(&head,3);
	insert_at_beg(&head,2);
	insert_at_beg(&head,2);
	insert_at_beg(&head,1);
	
	remove_dup(&head);
	
	struct node *current=head;
	
	while(current)
	{
		printf("%d ",current->data);
		current=current->next;
	}
	
	return 0;
}
