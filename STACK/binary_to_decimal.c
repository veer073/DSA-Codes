#include<stdio.h>
	struct stack {
		int top;
		int data[100];
	}s;
int main()
{int x,y;
struct s;
s.top=0;
printf("enter the postive no.  ");
scanf("%d",&x);
if(x==0){
s.data[s.top]=0;
s.top++;}
else{
while(x>0)
	{ if(x==1)
	{
s.data[s.top]=1;
s.top++;
break;
}
else 
{
	y=x%2;
	s.data[s.top]=y;
	s.top++;
	x=x/2;
}
	}
}

for(s.top=s.top-1;s.top>=0;s.top--)	
{
	printf("%d  ",s.data[s.top]);
	}	
	return 0;
}
