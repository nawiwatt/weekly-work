#include<stdio.h>
int main()
{
	long long a,i;
	scanf("%lld",&a);
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			a=a/i;
			printf("%lld ",i);
			i=1;
		}		
	}
	return 0;
}
