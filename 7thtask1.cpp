#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#define STACKSIZE 100
#define STACKADD  10
typedef struct{
	int  *base;
	int  *top;
	int stacksize;
}Stack;
int Init(Stack &S){
	S.base=(int*)malloc(STACKSIZE *sizeof(int));
	if(!S.base)
	  exit(EXIT_FAILURE);
	S.top=S.base;
	S.stacksize=STACKSIZE;
	return 1;
}int push(int e,Stack &S){
	if(S.top-S.base>=S.stacksize){
		S.base=(int*)realloc(S.base,(S.stacksize+STACKADD) *sizeof(int));
		if(!S.base)
		  exit(EXIT_FAILURE);
		S.top=S.base+S.stacksize;
		S.stacksize+=STACKADD;
	}
	*S.top=e;
	 S.top++;
	return 1;
}
int pop(Stack &S){
	int e;
	if(S.top==S.base)
	  return 0;
	  e=*--S.top;
	return e;
}
int getTop(Stack &S){
	int e;
	if(S.top==S.base)
	return 0;
	e=*S.top;
	return e;
}
int Stackempty(Stack &S){
	if(S.top==S.base)
	  return 1;
	return 0;
}
void conversion(){                    //利用栈将十进制转化为八进制 
    int n;
    Stack S;
	Init(S);
	scanf("%d",&n);
	while(n)
	{
		push(n%8,S);
		n=n/8;
	}
	while(!Stackempty(S))
	{
	    int b;
		b=pop(S);
		printf("%d",b);
	}
}
int main(void)
{
	printf("please enter the number:\n");
	conversion();
	return 0; 
}

