#include<stdio.h>
int main()
{
	int a,i;
	int sum = 0;
	scanf_s("%d",&a);
	for(i=3;i<a;i=i+3)
	{
		sum=sum+i;
	}
	for(i=5;i<a;i=i+5)
	{
		sum=sum+i;
	}
	for(i=15;i<a;i=i+15)
	{
		sum=sum-i;
	}
	printf("sum = %d",sum);
	return 0;
}
