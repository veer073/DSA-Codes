	#include<stdio.h>
	int main()
	{
	
	int a[10][10],b[10][10],c[20][20],i,n,ra,ca,rb,cb,j,k;
	printf("Enter the number of row of matrix1:");
	scanf("%d",&ra);
	printf("Enter the number of column of matrix1:");
	scanf("%d",&ca);
	printf("Enter the elements of matrix1:\n");
	for(i=0;i<ra;i++){
		for(j=0;j<ca;j++)
		{
			printf("enter element of no:[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("Enter the number of row of matrix2:");
	scanf("%d",&rb);
	printf("Enter the number of column of matrix2:");
	scanf("%d",&cb);
	printf("Enter the elements of matrix2:\n");
	for(i=0;i<rb;i++){
		for(j=0;j<cb;j++)
		{
			printf("enter element of no:[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
		
	}
	printf("The matrix1 is:\n");
		for(i=0;i<ra;i++){
		for(j=0;j<ca;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("The matrix2 is:\n");
		for(i=0;i<rb;i++){
		for(j=0;j<cb;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("The Substraction of matrices is:\n");
	for(i=0;i<ra;i++){
		for(j=0;j<ca;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	for(i=0;i<ra;i++){
		for(j=0;j<ca;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	printf("\nThis program is made by Veer Pratap Singh;\n Roll no: 2100320120184");
	return 0;
}
