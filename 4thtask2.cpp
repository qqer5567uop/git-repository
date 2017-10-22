#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100
int main(void)
{ 
  int d=0;
  int i=0;
  int h=0;
  int f=0;
  int flag=0;
  char ch;
  char a[MAX];
  int  b[MAX];
  printf("Please enter some characters.\n");
  gets(a);
  f=strlen(a);
  printf("ok\n");
 for (i=0,h=0;i<f+1;i++)
  {
   if (isdigit(a[i]))
    {
	  d=d*10+(a[i]-'0');
	  flag=1;
	}
   else if(flag)
    {
    	b[h++]=d;
    	flag=0;
    	d=0;
	}
  }
  for( int e=0;e<h;e++)
   printf("%d\n",b[e]);
  return 0;
}
