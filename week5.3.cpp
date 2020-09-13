#include<stdio.h>
int main()
{
	int a,b;
	scanf_s("%d",&a);
	if(a>=0)
	{
		b=a+543;
		printf("%d",b);
	}
	else
	{
		printf("Please Insert that number greater or equal zero");
	}
	return 0;
}
