#include<stdio.h>
void quicksort(int n[100], int first, int last){
	int pivot,i,j,temp;
	if(first<last){
		first=pivot;
		i=first;
		j=last;
		while(i<j){
			while(n[i]<=n[pivot] && i<last){
				i++;
			}
			while(n[i]>n[pivot]){
				j--;
			}
			if(i<j){
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
		temp=n[pivot];
		n[pivot]=n[j];
		n[j]=temp;
		quicksort(n,first,j-1);
		quicksort(n,j+1,last);
	}
	
}
int main(){
	int i,num,n[232];
	printf("Enter no of elements:");
	scanf("%d",&num);
	printf("Elements:");
	for(i=0;i<num;i++){
		scanf("%d",&n[i]);
	}
}
