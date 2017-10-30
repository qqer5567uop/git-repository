#include<stdio.h>
typedef struct Student{ 
     int id;
    double grades;
	 }Student;
void sturct_sort(Student* b[],int n);
#define MAX 10
int main(void)
{
    Student a[MAX];

	 int i=0;
	printf("please enter student's id(q to quit):\n");
	while(i<MAX&&(scanf("%d",&a[i].id)!=0))
	{
		printf("Now enter the grades:\n");
        scanf("%lf",&a[i].grades);
		i++;
		printf("please enter student's id(q to quit):\n");
	}
	for(int m=0;m<MAX;m++)
	  printf("id:%5d grades:%5lf\n",a[m].id,a[m].grades);
	struct Student *b[MAX];
	for(int n=0;n<MAX;n++)
	  b[n]=&a[n];
	sturct_sort(b,10);
	printf("the sort from max to min is:\n");
	for(int m=0;m<MAX;m++)
	  printf("id:%5d grades:%5lf\n",a[m].id,a[m].grades);
	return 0;
}
void sturct_sort(Student*b[],int n)
{
	int i,j,k;
    struct Student w;

	for(i=0;i<n-1;i++)
      {
	      k=i;
	      for(j=i+1;j<n;j++)
	       {
	  	    if((*b[k]).grades<(*b[j]).grades)
		    {
		 	  w=*b[k];
		 	  *b[k]=*b[j];
		 	  *b[j]=w;
		    }	
	       }	
	  }
	return ;
}
