 #include<stdio.h>
 int hcf(int n1, int n2);
 int main()
{
	printf("This program is made by:Veer Pratap Singh(2100320120184)\n");
	int a,b;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	printf(" GCD is %d",hcf(a,b));
	return 0;
}
int hcf(int n1, int n2)
{
	if(n2!=0)
		return hcf(n2,n1%n2);
	else
		return n1;	
}
