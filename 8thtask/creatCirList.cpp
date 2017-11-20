#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include"8thtask.h"
void creatCirList(CirNode *L,int n)
{
	CirNode *a;
	CirNode *b;
	CirNode *head;
	int m;
	 head =a=L;
	 printf("please enter 1 person's data:\n");
	 scanf("%d",&a->data);
	 a->number=1;
	for(int c=2;c<=n;c++)
	{   b=(CirNode*)malloc(sizeof(CirNode));
		printf("please enter %d person's data:\n",c);
		scanf("%d",&m);
		b->number=c;
		b->data=m;
		a->next=b;
        a=b;
	}
	a->next=head;
 } 
