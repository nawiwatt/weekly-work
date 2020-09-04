#include<stdio.h>
int main ()
{
	int a,b,i,j;
	int A[100][100];
	int B[100][100];
	scanf_s("%d%d",&a,&b);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf_s("%d",&A[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf_s("%d",&B[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",A[i][j]+B[i][j]);
		}
		printf("\n");
	}
	return 0;
}
