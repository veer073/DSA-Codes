 
 //function 
 
int getkthfromlast(struct Node *head,int k)
{
	struct Node *p1=head;
	struct Node *p2=head;
	for(int i=0;i<k;i++)
	{
		p2=p2->next;
		if(p2==NULL)
		{
			return -1;
		}
	}
	while(p2!=NULL)
	{
		p1=p1->next;
		p2=p2->next;
	}
	return p1->data;
 } 
