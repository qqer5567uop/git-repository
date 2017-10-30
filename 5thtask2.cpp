#include<stdio.h>
#include<stdarg.h>
int sum(int start,...);
int main(void)
{
	printf("sum(1,2,3,-1024):%d\n",sum(1,2,3,-1024));
	printf("sum(1,2,3,4,5,-1024):%d",sum(1,2,3,4,5,-1024));
	return 0;
}
int sum(int start,...)
{
  va_list arg_ptr;
  int value =start;
  int sum=0;
  va_start(arg_ptr,start);
  do
  {
  	sum=sum+value;
  	value=va_arg(arg_ptr,int);
  }	while(value!=-1024);
  return sum;
}
