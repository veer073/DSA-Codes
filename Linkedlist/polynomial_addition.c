#include<stdio.h>
#include<stdlib.h>
struct polyNode
{
	int coeff;
	int power;
	struct polyNode *next;
};
struct polyNode *getnode()
{
	struct polyNode *p;
	p=(struct polyNode*)malloc(sizeof(struct polyNode));
	return p;
}

void insend(struct polyNode** START,int x,int y)
{
	struct polyNode *p,*q;
	q=getnode();
	q->power=x;
	q->coeff=y;
	q->next=NULL;
	
	p=*START;
	if(p==NULL){
		*START=q;
	}
	else
	{
		while(p->next!=NULL)
			p=p->next;
		p->next=q;
	}
}

struct polyNode * addpoly(struct polyNode *poly1, struct polyNode* poly2)
{
	struct polyNode* poly=NULL,*p;
	int pow,coef;
	while(poly1!=NULL && poly2!=NULL)
	{
		if(poly1->power>poly2->power) //if power of 1st poly is greater then the poly of second
		{
			pow=poly1->power;
			coef=poly1->coeff;
			poly1=poly1->next;
			insend(&poly,pow,coef);
		}
		else if(poly1->power<poly2->power) //if power of 1st poly is greater then the poly of second
		{
			pow=poly2->power;
			coef=poly2->coeff;
			poly2=poly2->next;
			insend(&poly,pow,coef);
		}
		
		else{
			pow=poly1->power;
			coef=poly1->coeff+poly2->coeff;
			poly1=poly1->next;
			poly2=poly2->next;
			insend(&poly,pow,coef);
			}
	}
	while(poly1 || poly2)
	{
		if(poly1)
		{
			pow=poly1->power;
			coef=poly1->coeff;
			poly1=poly1->next;
			insend(&poly,pow,coef);
		}
		if(poly2)
		{
			pow=poly2->power;
			coef=poly2->coeff;
			poly2=poly2->next;
			insend(&poly,pow,coef);
		}
		
	}
	return poly;
}

void show(struct polyNode *node)
{
	while(node!=NULL)
	{
		printf("%dx^%d",node->coeff,node->power);
		node=node->next;
		if(node!=NULL)
		{
			if(node->coeff>0)
				printf("+");
		}
	}
}

int main()
{
	struct polyNode *poly1=NULL, *poly2=NULL, *poly=NULL;
	
	insend(&poly1,2,5);
	insend(&poly1,1,4);
	insend(&poly1,0,2);
	insend(&poly2,1,-5);
	insend(&poly2,0,-5);
	printf("1st number:");
	show(poly1);
	printf("\n2nd number:");
	show(poly2);
	
	printf("\n---------------------------------------\n");
	
	poly=addpoly(poly1,poly2);
	printf("Added polynomial: ");
	show(poly);
	
	return 0;
}
