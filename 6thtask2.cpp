#include<stdio.h>
#include<stdlib.h>
struct nums{
	int num;
	struct nums * next;
};
struct nums * overturn(struct nums *m);

int main(void)
{
	struct nums * head = NULL;
	struct nums * a,* b;
	int c;
	printf("please enter a number:(q to quit)\n");
	while((scanf("%d",&c))!=0)
	{
		a = (struct nums *)malloc(sizeof(struct nums));
		if(head==NULL)
		  head = a;
		else
		  b->next = a;
		a->next=NULL;
		a->num =c;
	    printf("please enter next number:(q to quit)\n");
	    b=a;
	}
	
	if(head==NULL)
	  printf("No data entered.\n");
	else
	{
	  printf("Here are numbers:");
	  a=head;
	  while(a!=NULL)
	  {
	  	printf("%3d",a->num);
	  	a = a->next;
	  }
    }
    
    
    head = overturn(head);
    if(head==NULL)
	  printf("No data entered.\n");
	else
	{
	  printf("\n");
	  printf("Here are numbers:");
	  a=head;
	  while(a!=NULL)
	  {
	  	printf("%3d",a->num);
	  	a = a->next;
	  }
    }
    
    
	a=head;
	while(a!=NULL)
	{
		b=a;
		a=a->next;
		free(b);
	
	}
    printf("\nBye.");
    
    return 0;
}

struct nums * overturn(struct nums *m)
{
	struct nums *p, *q, *n;
	p=m;
	p=p->next;
	m->next=NULL;
	n=m;
	while(p!=NULL)
	{
		q=p;
		p=p->next;
		q->next=n;
		n=q;
	}
	return q;
}
