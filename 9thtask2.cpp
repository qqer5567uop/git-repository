#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp( const void *a , const void *b ) 
{ 
 return *(char *)a - *(char  *)b; 
}
void mySort(void*base,size_t num,size_t size,int (*comparator)(const void* a,const void* b))
{
	int i=0;
	char *a,*b;
	for(int i=0;i<num-1;i++)
	{
	  for(int j=0;j<num-1-i;j++)
	   {
	    a=(char*)base+j*size;
	    b=(char*)base+(j+1)*size;
	    if((*comparator)(a,b)>=0)
	     {
		   char c;
	        c=*a;
	       *a=*b;
	       *b=c;
	    }
	   }
   }
}
int main(void)
{
	char a[100];
    int b;
	printf("please enter a line letters,");
	printf("then I will sort them.\n");
	scanf("%s",&a);
	b=strlen(a);
	mySort(a,b,sizeof(char),cmp);
	for(int i=0;i<b;i++)
	  printf("%c",a[i]); 	
	return 0;
}
