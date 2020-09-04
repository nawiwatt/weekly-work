#include<stdio.h>
int main()
{
	int a = 0,b = 0,c = 0,i,j;
	int A[4][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf_s("%d",&A[j][i]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			a = a + A[j][i];	
		}
		if(a > c)
		{
			c = a;
			b = i + 1;
		}
		a = 0;
	}
	printf("%d %d",b,c);
	return 0;
}
