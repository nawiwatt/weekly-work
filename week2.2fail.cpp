#include<stdio.h>
int main()
{
	int i;
	int sum=0;
	int a=1;
	for(i=2;i<4000000;)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
		i=i+a;
		a=i-a;
	}
	printf("%d",sum);
	return 0;
}

