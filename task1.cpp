#include <stdio.h>      //选择排序排列数组 
int main(void)
{char a[10];
printf("Please enter ten numbers:\n");
for(int i=0;i<10;i++)
 scanf("%d",&a[i]);
 int k,j,n,t,min;
 for(n=0;n<9;n++)
 {min = a[n];
  for(j=n+1;j<10;j++)
  {if(min>a[j])
   {k=j;
    min=a[j];
   t =a[n];
   a[n]=a[k];
   a[k]=t;}
  }
 }
 for(int i=0;i<10;i++)
 printf("%d,",a[i]);
 return 0;
 } 
