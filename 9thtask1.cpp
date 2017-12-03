#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp( const void *a , const void *b ) 
{ 
 return *(char *)a - *(char  *)b; 
}
int main(void)
{   char a[100];
    int b;
	printf("please enter a line letters,");
	printf("then I will sort them.\n");
	gets(a);
	b=strlen(a);
	qsort(a,b,sizeof(a[0]),cmp);
	puts(a);
	return 0;
}
