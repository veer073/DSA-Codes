#include<stdio.h>
void hanoi(int n, char beg, char aux, char end){
	if(n==1){
		printf("Disk 1 is moved from %c to %c\n",beg,end);
		return;
	}
	hanoi(n-1,beg,end,aux);
		printf("Disk %d is moved from %c to %c\n",n,beg,end);
		hanoi(n-1,aux,beg,end);
}
int main()
{
	int n;
	printf("Enter the number of  disc:");
	scanf("%d",&n);
	hanoi(n,'A','B','C');
	return 0;
}
