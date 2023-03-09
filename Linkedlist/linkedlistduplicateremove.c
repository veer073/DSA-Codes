 #include<stdio.h>
 #include<stdlib.h>
 
 struct node{
 	int data;
 	struct node *next;
 };
 
 struct node* createNode(int data)
 {
 	struct node *newNode=(struct node *)malloc(sizeof(struct node));
 	newNode->data=data;
 	newNode->next=NULL;
 	return newNode;
 }
 
 void addNode(struct node **head,int data)
 {
 	struct node *newNode=createNode(data);
 	newNode->next=*head;
 	*head=newNode;
 }
 
 
 void removeDuplicate(struct node **head)
 {
 	struct node *current=*head;
 	
 	while(current!=NULL)
 	{
 		struct node *runner=current;
 		
 		while(runner->next!=NULL)
 		{
 			if(runner->next==current->next){
 				runner->next=runner->next->next;
			 }
			 else
			 	runner->next;
		 }
		 current=current->next;
	 }
 }
 
 int main()
 {
 	struct node *head=NULL;
 	
 	//adding nodes to the linked list
 	addNode(&head,2);
 	addNode(&head,1);
 	addNode(&head,3);
 	addNode(&head,2);
 	
 	//printing the linked list
 	struct node *temp=head;
 	while(temp!=NULL)
 	{
 		printf("%d ",temp->data);
 		temp=temp->next;
	 }
	 
	 removeDuplicate(&head);
	 printf("\nThe final linked list without duplication\n");
	 temp=head;
	 while(temp!=NULL)
	 {
	 	printf("%d ",temp->data);
	 	temp=temp->next;
	 }
	 return 0;
 }
