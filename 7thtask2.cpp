#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct QNode{
	int    data;
	QNode *next;
}QNode;
typedef struct{
	QNode *front;
	QNode *rear;
}Queen;
int Init(Queen &Q){
	Q.front=Q.rear=(QNode*)malloc(sizeof(QNode));
	if(!Q.front)
	 exit(EXIT_FAILURE);
	 Q.front->next=NULL;
	 return 1;
}
int EnQueen(int a,Queen &Q){
	QNode *p;
	p=(QNode*)malloc(sizeof(QNode));
	if(!p)
	  exit(EXIT_FAILURE);
	p->data=a;
	p->next=NULL;
	Q.rear->next = p;
	Q.rear=p;
	return 1;
}
int DeQueen(Queen &Q){
	int a;
	QNode *p;
	if(Q.front==Q.rear)
	 return 0;
	p=Q.front->next;
	a=p->data; 
	Q.front->next=p->next;
	if(Q.rear==p)
	  Q.rear=Q.front;
	free(p);
	return a;
}
int getQueen(Queen &Q){
	int a;
	QNode *p;
	p=Q.front->next;
	a=p->data;
	return a;
}
int main(void)
{
	Queen A;
	Init(A);
	int b,c;
	int d=0;
	printf("please enter some numbers:(q to quit)\n");
	while((scanf("%d",&b))!=0)
	{
		EnQueen(b,A);
		d++;
	}
	for(int m=0;m<d;m++)
	{
		c=DeQueen(A);
		printf("%d ",c);
	}
	return 0;  
}

