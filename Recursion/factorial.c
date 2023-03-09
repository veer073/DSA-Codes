 #include<stdio.h>
 int fact(int n);
 int main()
 {
 	int x;
 	printf("Enter the number:");
 	scanf("%d ",&x);
 	printf("factorial of %d = %d",x,fact(x));
 	return 0;
 }
 int fact(int n){
 	if(n>=1)
 		return n*fact(n-1);
 	else
	 	return 1;	
 }
