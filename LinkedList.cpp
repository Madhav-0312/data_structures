#include<iostream>
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void insert_at_beg(struct node **head,int data)
{
	struct node* n = (struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->next=*head;
	*head=n;
}

void insert_at_pos(struct node **head,int data,int pos)
{
	if(pos==1)
	{
		insert_at_beg(head,data);
	}
	else
	{
		struct node *curr=*head;
		int i=1;
		while(curr && i<pos-1)
		{
			i++;
			curr=curr->next;
		}
		if(curr->next==NULL)
		{
			struct node *n = (struct node *)malloc(sizeof(struct node));
			n->data=data;
			n->next=NULL;
			curr->next=n;
		}
		else
		{
			struct node *n = (struct node *)malloc(sizeof(struct node));
			n->data=data;
			n->next=curr->next;
			curr->next=n;
		}
	}
}

void insert_at_end(struct node **head ,int data)
{
  struct node *n = (struct node *)malloc(sizeof(struct node));
  if(*head==NULL)
  {
  	insert_at_beg(head,data);
  	return;
  }
   struct node* curr=*head;
   while(curr->next!= NULL)
  {
  	curr=curr->next;
  }
  n->data=data;
  n->next=NULL;
  curr->next=n;
  	
}

void delete_at_beg(struct node **head)
{
	struct node *n = (struct node *)malloc(sizeof(struct node));
	n->next=*head;
	*head=n->next->next;	
}

void delete_at_end(struct node **head)
{
	struct node * curr = (struct node*)malloc(sizeof(struct node));
	curr->next=*head;
	while(curr->next->next)
	{
		curr=curr->next;
	}
	curr->next=NULL;
}

void delete_at_pos(struct node **head,int pos)
{
	if(pos==1)
	{
		delete_at_beg(head);
		return;
	}
	int i=1;
	struct node *curr=*head;
	
	while(i<pos-1 && curr)
	{
		curr=curr->next;
		i++;
	}
	curr->next=curr->next->next;
}

int main()
{
	struct node *head=NULL;
	
	insert_at_beg(&head,11);
	insert_at_end(&head,12);
	insert_at_end(&head,13);
	insert_at_end(&head,14);
	insert_at_end(&head,15);
	insert_at_pos(&head,16,6);
	//delete_at_beg(&head);
	//delete_at_end(&head);
	//delete_at_pos(&head,1);

	struct node *current=head;
	while(current)
	{
		printf("%d ",current->data);
		current=current->next;
	}
	
	return 0;
}
