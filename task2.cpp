#include<stdio.h>       //������Ĵ�С��������ݱ�Ϊ�Ӵ�С,�ɽ������벿��������1������ 
int main(void)
{char num[10];
int t;
 printf("Please enter enter ten numbers from min to max;\n");
 for (int i = 0;i<10;i++)
  scanf("%d",&num[i]);
  for(int n = 0;n<5;n++)    // ��num[i]�е�iΪż������n<i/2;��Ϊ��������С��n<(i-1)/2 
  {t=num[n];
  num[n]=num[9-n];
  num[9-n]=t;
  }
  for(int i = 0; i<10;i++)
  printf("%d,",num[i]);
  return 0;
 } 

