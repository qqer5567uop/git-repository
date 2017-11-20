#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
#include"8thtask.h"
 int main(void)
 {
 	int a,d;
 	CirNode *L;
 	L=(CirNode*)malloc(sizeof(CirNode));
 	printf("please enter numbers of persons:\n");
 	scanf("%d",&a);
 	creatCirList(L,a);
	 printf("please enter a number(>0):\n");
	 scanf("%d",&d);
	 JosephCircle(L,d);
	 return 0;
 }
