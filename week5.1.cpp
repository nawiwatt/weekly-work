#include<stdio.h>
int main()
{
	int a,i,j;
	scanf_s("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if (i==1 || i==a || j==1 || j==a)
			{
				printf("*");
			}
			else if(i==2 || i==a-1 || j==2 || j==a-1)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		if(i<a)
		{
			printf("\n");
		}
	}
	return 0;
}
