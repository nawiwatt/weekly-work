#include<stdio.h>
int main()
{
	int count=0;
	int x=0;
	int y,z,i,j;
	int a[9];
	for(i=0;i<9;i++)
	{
		scanf_s("%d",&a[i]);	
		x=x+a[i];	
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if((x-a[i])-a[j]==100)
			{
				y=a[i];
				z=a[j];
				count=1;
				break;	
			}
		}
		if(count==1)
		{
			break;	
		}
	}
	for(i=0;i<9;i++)
	{
		if(a[i] != y && a[i] != z)
		{
			printf("%d\n",a[i]);
		}
	}
	return 0;
}
