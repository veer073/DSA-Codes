#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

struct node *start;
void insert_beg();
void insert_last();
void insert_pos();
void delete_begin();
void delete_last();
void delete_locc();
void print();
int main()
{
	int ch=0;
	while(ch!=8)
	{
		
		printf("\n1.Insert at the begining\n2.Insert at the last\n3.Insert at any specified location\n4.Delete from begining\n5.Delete from last\n6. Delete from any specified location\n7.print\n8.exit ");
		printf("\n\nEnter the Operation to be performed\n\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert_beg();
				break;
			case 2:
				insert_last();
				break;
			case 3:
				insert_pos();
				break;
			case 4:
				delete_begin();
				break;
			case 5:
				delete_last();
				break;
			case 6:
				delete_locc();
				break;
			case 7:
				print();
				break;
			case 8:
				printf("The Program is run by : Veer Pratap Singh(2100320120184)\n");
				exit(0);
				break;
			default:
				printf("Enter correct choice\n");								
		}
		
	}
	return 0;
}
void insert_beg()
{
	struct node *p;
	int value;
	p=(struct node *)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("OVERFLOW");
	}
	else
	{
		printf("Enter value:");
		scanf("%d",&value);
		p->data=value;
		p->next=start;
		start=p;
	}
}
void insert_last()
{
	struct node *p, *temp;
	int value;
	p=(struct node *)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("OVERFLOW");
	}
	else
	{
		printf("Enter value:");
		scanf("%d",&value);
		p->data=value;
		if(start==NULL)
		{
		p->next=NULL;
		start=p;
		}
		else
		{
			temp=start;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=p;
			p->next=NULL;
		}
	}
}
void insert_pos()
{
	int i,loc,value;
	struct node *p, *temp;
	
	p=(struct node *)malloc(sizeof(struct node));
	if(p==NULL)
	{
		printf("OVERFLOW");
	}
	else
	{
		printf("Enter value:");
		scanf("%d",&value);
		p->data=value;
		printf("\nEnter the location after which you want to insert: ");
		scanf("%d",&loc);
		temp=start;
		for(i=0;i<loc;i++)
		{
			temp=temp->next;
			if(temp==NULL)
			{
				printf("\nCan't insert\n");
				return;
				}	
		}
		p->next=temp->next;
		temp->next=p;
	}
}
void delete_begin()
{
	struct node *p;
	if(start==NULL)
	{
		printf("\nList is empty\n");
	}
	else
	{
		p=start;
		start=p->next;
		free(p);
	}
}
void delete_last()
{
	struct node *p,*p1;
	if(start==NULL)
	{
		printf("\n list is empty");
	}
	else if(start->next==NULL)
	{
		start=NULL;
		free(start);
		printf("\nOnly node of the list is deleted......\n");
	}
	else
	{
		p=start;
		while(p->next!=NULL)
		{
			p1=p;
			p=p->next;
		}
		p1->next=NULL;
		free(p);
	}
}
void delete_locc()
{
	struct node *p,*p1;
	int loc,i;
	printf("\nEnter the location of the node after which you want to perform deletion\n");
	scanf("%d",&loc);
	p=start;
	for(i=0;i<loc;i++)
	{
		p1=p;
		p=p->next;
		if(p==NULL)
		{
			printf("\nCan't delete");
			return;
		}
	}
	p1->next=p->next;
	free(p);
	printf("\n Deleted node %d ",loc+1);
	
}
void print()
{
	struct node *p;
	p=start;
	if(p==NULL)
	{
		printf("Nothing to print");
		
	}
	else
	{
		printf("\nPrinting values\n");
		
		while(p->next!=NULL)
		{
			printf("[%d]==>",p->data);
			p=p->next;
		}
		printf("[%d]",p->data);
	}
}
