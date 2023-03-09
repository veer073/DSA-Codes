#include<stdio.h>
void
main ()
{
  int m, a[10], n, b[10], i, j, c[10], f = 0;
  printf("Enter the number of elements of first set A. ");
  scanf("%d", &m);
  printf("Enter the %d elements. ", m);
  for (i=0; i<m; i++)
    {
      scanf("%d", &a[i]);
    }
  printf("Enter the number of elements of second set B. ");
  scanf("%d", &n);
  printf("Enter the %d elements. ", n);
  for (j = 0; j < n; j++)
    {
      scanf("%d", &b[j]);
    }
  printf("Elements of set A that also belong to set B are\n");
  for (i = 0; i < m; i++)
    {
      for (j = 0; j < n; j++)
	{
	  if (a[i] == b[j])
	    {
	      printf("%d ", a[i]);
	      f++;
	    }
	}
 }
  if (f == 0)
    printf("There are no such elements.");
  printf("\n\nThis program is made by VEER PRATAP SINGH \nRoll no. 2100320120184");
}

