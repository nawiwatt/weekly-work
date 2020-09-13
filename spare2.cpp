#include<stdio.h>
int main()
{
	int n,a[1000],b,i,j;
	scanf_s("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf_s("%d",&a[i]);
	}
	for(i=0;i<n;)
	{
		if(a[i]>a[i+1] && i < n-1 && a[i]!=0)
		{
			b=a[i+1];
			a[i+1]=a[i];
			a[i]=b;
			i=0;
		}
		else
		{
			i++;
		}
	}
	if(a[0]==0)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]!=0)
			{
				b=a[i];
				a[i]=0;
				a[0]=b;
				break;
			}			
		}
	}	
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
