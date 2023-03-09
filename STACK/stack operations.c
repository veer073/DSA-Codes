#include <stdio.h>   
int stack[10],i,j,choice=0,n,top=-1;  
void push();  
void pop();  
void show();  

void main ()  
{  
       
    printf("Stack operations using array\n");    
    while(choice != 4)  
    {    
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\nEnter your choice:");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                show();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....\n");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        }  
    }  
    printf("THe program is run by: Veer Pratap Singh(2100320120184)");
}   
  
void push ()  
{  
    int val;      
    if (top == 10 )   
    printf("\n Overflow");   
    else   
    {  
        printf("Enter the value:");  
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;   
    }   
}   
  
void pop ()   
{   
	int x;
    if(top == -1)   
    printf("Underflow");  
    else
	{  
		x=stack[top];
		printf("The poped item is %d",x);
    	top = top -1;   
	} 
}
void show()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  
    }  
}  
