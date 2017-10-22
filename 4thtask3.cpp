#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100
int main(void)
{ 
  double d=0;
  int i=0;
  int h=0;
  int f=0;
  int c=0;
  int flag=0;
  char ch;
  char a[MAX];
  double  b[MAX];
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
	  c=i+1;
	  if(a[c]=='.')
	  { 
	    double g=0;
	    int m=0;
	  	for( i=i+1;i<f+1;i++)
	  	{
	  		c=i+1;
	  		if(isdigit(a[c])==0)
	  		     break;
	  	    	g=g*10+(a[c]-'0');
	  	    	m++	;
		}
		for(int n=0;n<m;n++)
		   g=g/10;
		   d=d+g;
	  }
	}
   else if(flag)
    {
    	b[h++]=d;
    	flag=0;
    	d=0;
	}
  }
  for( int e=0;e<h;e++)
   printf("%lf\n",b[e]);
  return 0;
} 
  
