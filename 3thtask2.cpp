#include<stdio.h>                                     //≥¢ ‘÷√ªª∏≈ƒÓ 
int main(void)
{
 int a[4][4]={        {1,2,3,13},
                      {4,5,6,14},
					  {7,8,9,15},
					  {10,11,12,16}  };
 int b,c; 
 for(int b=0;b<4;b++)
  {
    for(int c=0;c<4;c++)
      printf("%3d ",a[b][c]);
    printf(".\n");
  }
  int n,m,q;
  for(n=0,q=1;n<4;n++)
   {
     for(int p,m=0;m<q;m++)
      {
	   p=a[n][m];
       a[n][m]=a[m][n];
       a[m][n]=p;
      }
     q++;
   }
   for(int b=0;b<4;b++)
  {
    for(int c=0;c<4;c++)
      printf("%3d ",a[b][c]);
    printf(".\n");
  }
  return 0;
}
