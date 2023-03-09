#include<stdio.h>
int main()
{
	int i,j,k,a[20],b[20],n,m;
	printf("Enter the size of set A:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element of set A:",i+1);
		scanf("%d",&a[i]);
	}
		printf("Enter the size of set B:");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		printf("Enter the %d element of set B:",i+1);
		scanf("%d",&b[i]);
	}
	printf("Set A is:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("Set B is:\n");
	for(i=0;i<m;i++){
		printf("%d\t",b[i]);
	}
	printf("\n");
	printf(" Difference of sets is:\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i]==b[j]){
			break;
			}
		}	
		if(j==m)
		printf("%d\t",a[i]);
		
				
	}
	printf("\nThis program is made by Veer Pratap Singh;\n Roll no: 2100320120184");
	return 0;
}

