 #include<stdio.h>
 int power(int base, int n);
 int main()
 {
 	int base,n;
 	printf("Enter the base:");
 	scanf("%d",&base);
 	printf("Enter the power:");
 	scanf("%d",&n);
 	printf("%d^%d= %d",base,n,power(base,n));
 	return 0;
 }
 int power(int base,int n)
 {
 	if(n!=0)
 		return base*power(base,n-1);
 	else
	 	return 1;	
 }
 
