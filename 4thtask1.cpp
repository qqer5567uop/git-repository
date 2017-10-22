#include<stdio.h>
unsigned long long  reversal( unsigned long long  n);
int main(void)
{
    unsigned long long a,b;
	printf("please enter a number:\n");
	scanf("%lld",&a);
	b = reversal(a);
	printf("%lld\n",b);
	return 0;
}
 unsigned long long  reversal( unsigned long long n)
{
    unsigned long long d = 0;
	while(n!=0)
	{
	 d = d*10+n%10;
	 n = n/10;
    }
    return d;
}
