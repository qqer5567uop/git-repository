#include<stdio.h>
int main(void)
{char ch[5];
 int   a[5];
 float b[5];
char * pc;
int  * pi;
float * pf;
int i;
for(pc=ch,i=0;i<5;i++)
  {
    printf("%p\n",pc);
    pc++;
  } 
  for(pi=a,i=0;i<5;i++)
  {
    printf("%p\n",pi);
    pi++;
  } 
  for(pf=b,i=0;i<5;i++)
  {
    printf("%p\n",pf);
    pf++;
  } 
  return 0;
}
