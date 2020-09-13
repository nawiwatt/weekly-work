#include<stdio.h>
int main()
{
	int n,a[10],i,j;
	scanf_s("%d",&n);
	for(i=n-1;i>=0;i--)
	{
		scanf_s("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i >= j)
			{
				printf("%d",a[i]);
			}		
		}
		if(i<n-1)
		{
			printf("\n");	
		}	
	}
	return 0;
}
