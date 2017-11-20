#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include"8thtask.h"
 void JosephCircle(CirNode* L,int m)
 {
 	CirNode *p,*q;
    int i,e=m;
    p=L;
    while(p->next!=p)
    {
    	for(i=1;i<e;i++)
    	 {
    	 	q=p;
    	 	p=p->next;
		 }
		 printf("%d",p->number);
		 e=p->data;
		 q->next=p->next;
		 free(p);
		 p=q->next;
	}
	printf("%d",p->number);
	free(p);
 }
