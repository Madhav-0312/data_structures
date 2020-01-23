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
	struct node *n = (struct node*)malloc(sizeof(struct node));
	n->next=*head;
	n->data=0;
	*head=n;
    struct node *ptr1=*head;
    struct node *ptr2=n->next;
    while(ptr2->next)
    {
	if(ptr2->data == ptr2->next->data)
	{
	    while(ptr2->next->data == ptr2->data)
		{
			if(ptr2->next->next == NULL)
			{
				ptr1->next=NULL;
				*head=n->next;
				return;
			}
		     ptr2=ptr2->next;	
		}

		ptr1->next=ptr2->next;
		ptr2=ptr2->next;
	}
    else if(ptr2->data != ptr2->next->data)
    {
    	ptr1=ptr1->next;
    	ptr2=ptr2->next;
	}
    }
    *head=n->next;
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
	
	insert_at_beg(&head,7);
	insert_at_beg(&head,6);
	insert_at_beg(&head,5);
	insert_at_beg(&head,4);
	insert_at_beg(&head,3);
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
