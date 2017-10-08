#include<stdio.h>       //将输入的从小到大的数据变为从大到小,可将程序后半部分与任务1程序结合 
int main(void)
{char num[10];
int t;
 printf("Please enter enter ten numbers from min to max;\n");
 for (int i = 0;i<10;i++)
  scanf("%d",&num[i]);
  for(int n = 0;n<5;n++)    // 若num[i]中的i为偶数，则n<i/2;若为奇数，则小于n<(i-1)/2 
  {t=num[n];
  num[n]=num[9-n];
  num[9-n]=t;
  }
  for(int i = 0; i<10;i++)
  printf("%d,",num[i]);
  return 0;
 } 

