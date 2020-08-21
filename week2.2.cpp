#include<stdio.h>
int main()
{
	long a,b,i;
	long c = 1;
	scanf("%ld%ld",&a,&b);
	for(i=2;i<=a;i++)
	{
		if(a%i==0 && b%i==0)
		{
			if(c < i)
			{
				c = i;
			}
		}		
	}
	printf("%ld",c);
	return 0;
}
