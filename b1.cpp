#include<stdio.h>
int main()
{
	int i,j,a[50000],b[20],n1,n2,w=0;
	scanf_s("%d",&n1);
	for(i=0;i<n1;i++)
	{
		scanf_s("%d",&a[i]);
		a[i]=a[i]%1000;
	}
	scanf_s("%d",&n2);
	for(i=0;i<n2;i++)
	{
		scanf_s("%d",&b[i]);
	}
	for(i=0;i<n2;i++)
	{
		for(j=0;j<n1;j++)
		{
			if(b[i]==a[j])
			{
				w++;
			}
		}
	}
	printf("%d",w);
	return 0;
}
