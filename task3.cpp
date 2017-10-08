#include<stdio.h>      //尝试结合任务1与任务2
#include<string.h>
 int main(void)
{char a[100];
int m;
printf("Please enter numbers:(1<quantities of numbers<=100,enter q to next)\n");
for(int i=0;i<10;i++)
if((scanf("%d",&a[i]))==0)
    break;
m = strlen(a);
printf("you enter %d numbers.\n",m);    
 int k,j,n,t,min;
 for(n=0;n<m-1;n++)
 {min = a[n];
  for(j=n+1;j<m;j++)
  {if(min>a[j])
   {k=j;
    min=a[j];
   t =a[n];
   a[n]=a[k];
   a[k]=t;}
  }
 }
 printf("numbers from min to max is:");
 for(int i=0;i<m;i++)
 printf("%d,",a[i]);
 for(int n = 0;n<(int)(m/2);n++)    // 若num[i]中的i为偶数，则n<m/2;若为奇数，则n<(m-1)/2 
                                    //但由于取整时舍去小数，导致 m/2=(m-1)/2【如10/2=（11-1）/2】 
  {t=a[n];
  a[n]=a[m-1-n];
  a[m-1-n]=t;
  }
  printf("numbers from max to min:");
  for(int i = 0; i<m;i++)
  printf("%d,",a[i]);
 return 0;
 } 
