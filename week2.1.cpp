#include<stdio.h>
int main()
{
	int a,b,i;
	int sum = 0;
	scanf("%d",&a);
	for(i=3;i<a;i=i+3)
	{
		printf("%d ",i);
		sum=sum+i;
		if (a-i<=3)
		{
			printf("\n");
		}
	}
	for(i=5;i<a;i=i+5)
	{
		printf("%d ",i);
		sum=sum+i;
	}
	printf("\nsum = %d",sum);
	return 0;
}
