#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
	struct node *prev;
};

struct node* head=NULL;

void insert_begin(int new_data)
{
	struct node* new_node=new node;
	new_node->data=new_data;
	new_node->prev=NULL;
	new_node->next=head;
	if(head!=NULL)
	{
		head->prev = new_node;
	}
	head=new_node;
}

void insert_end(int new_data)
{
	struct node* new_node = new node;
	new_node->data=new_data;
	new_node->next=NULL;
	struct node* ptr = head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=new_node;
	new_node->prev=ptr;
}

void insert_between(int new_data, int position)
{
	struct node* new_node=new node;
	new_node->data=new_data;
	new_node->next=NULL;
	struct node *ptr=head;
	for(int i=1; i<position-1; i++)
	{
	    if(ptr->next!=NULL)
	    {
	        ptr=ptr->next;
	    }
	    new_node->next=ptr->next;
	    ptr->next->prev = ptr;
	    new_node->prev=new_node;
	    ptr->next=new_node;
	}
}

void sortNode()
{
	int temp;
	struct node* ptr= head;
	struct node* index = NULL;
	while(ptr!=NULL)
	{
		index=ptr->next;
		while(index!=NULL)
		{
			if(ptr->data>index->data)
			{
				temp=ptr->data;
				ptr->data=index->data;
				index->data=temp;
			}
			index = index->next;
		}
	
		ptr=ptr->next;
	}
}

void delete_begin()
{
	head=head->next;
	head->prev=NULL;
}

void display()
{
	struct node* ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	if(ptr==NULL)
	{
		cout<<"NULL"<<endl;
	}
}

void delete_end()
{
    struct node* ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
}

void delete_mid(int k)
{
	struct node* ptr=head;
	for(int i=1; i<k-1; i++)
	{
		if(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
	}
	ptr->next->next->prev=ptr;
	ptr->next=ptr->next->next;
}


int main()
{
	insert_begin(80);
	insert_begin(29);
	insert_begin(10);
	insert_end(17);
	insert_end(6);
	insert_between(56,3);
	display();
	sortNode();
	display();
	delete_begin();
	display();
	delete_end();
	display();
	delete_mid(2);
	display();
	return 0;
}
