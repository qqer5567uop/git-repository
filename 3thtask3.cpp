#include<stdio.h>                                        //通过选择排序将二维数组排列，但程序复杂，可改进 
int main (void)
{   
    int a[4][4];
	printf("Please enter sixteen numbers.\n"); 
	for(int n=0;n<4;n++)
	  {
	   for(int m=0;m<4;m++)
	   scanf("%d",&a[n][m]);
      }
      	for(int n=0;n<4;n++)
	  {
	   for(int m=0;m<4;m++)
	    printf("%3d",a[n][m]);
        printf("\n");
	  }
    int b,c,d,e,f,g,h;
    int max;
    for(h=0;h<15;h++)
     {
	 for(b=0;b<4;b++)
      for(c=0;c<4;c++)
       {
	    max =a[b][c];
        f = b;
        g = c;
		if((c+1)<4)
          g = c+1;
        else
          {
		   f = b+1;
           g=0;
          }
        if(max<a[f][g])
          {
		   max =a[f][g];
		   e = a[b][c];
		   a[b][c]=a[f][g];
		   a[f][g]=e;
		  }
	   }
     }
	   	for(int n=0;n<4;n++)
	  {
	   for(int m=0;m<4;m++)
	    printf("%3d",a[n][m]);
        printf("\n");
	  }
	  return 0;
}

