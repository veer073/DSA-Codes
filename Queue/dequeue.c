 #include<stdio.h>
 #define max 4
 int isfull();
 int isempty();
 void insert(int);
 void push(int);
 int delete();
 int pop();
 void display();
 
 int dq[max];
 int rear=-1;
 int front=-1;
 
 isfull()
{
	if(((front==0)&&(rear==max-1)) || (front==rear+1))
	{
		return 1;	
	}
	else
	{
		return 0;
	}
}
isempty(){
	if(front==-1)
		return 1;
	else
		return 0;
	
}
void insert(int item)
{
	if(front==-1){
		front=rear=0;
	}
	else{
		if(rear==max-1)
			rear=0;
		else
			rear=rear+1;
			dq[rear]=item;	
	}
	
}
int delete()
{
	int item;
	item=dq[rear];
	dq[rear]=0;
	if(front==rear){
		front=rear=-1;
	}
	else if(rear==0)
		rear=4;
	else
		rear=rear-1;
	return item;		
}

void push(int item)
{
	if(front==-1){
		front=rear=0;
	}
	else{
		if(front==0)
			front=4;
		else{
			front=front+1;
		}
			
	}
	dq[front]=item;
}
int pop()
{
	int item;
	item=dq[front];
	dq[front]=0;
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else if(front==4)
		front=0;
	else 
		front=front+1;
	return item;		
}
void display()
{
	int i;
	printf("\n front=%d and rear=%d",front,rear);
	printf("\n De-queue:");
	for(i=0;i<max;i++){
		printf(" %d ",dq[i]);
	}
}
int main()
{
	printf("This program is made by:Veer Pratap Singh(2100320120184)\n");
	int ch,item;
	do
	{
		printf("\n 1:Insert in rear. \n 2: delete from rear.\n 3: insert from front. \n 4: delete from front\n 5:show");
		printf("\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(isfull())
					printf("\n insert the element");
				else{
					printf("\n insert the element");
					scanf("%d",&item);
					insert(item);
				}	
				break;
			case 2:
				if(isempty())
					printf("\n no elements");
				else{
					item=delete();
					printf("\n %d item is deleted",item);
				}
				break;
			case 3:
				if(isfull())
					printf("\ndequeue is full");
				else{
					printf("\n insert the element");
					scanf("%d",&item);
					push(item);
				}	
				break;	
			case 4:
				if(isempty())
					printf("\n no elements");
				else{
					item=pop();
					printf("\n %d item is deleted",item);
				}
				break;	
			case 5:	
				if(isempty())
					printf("\n no elements");
				else{
					display();
				}
				break;			
			}
			
	}
	while(ch!=5);
		return 0;
}
