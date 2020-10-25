#include<stdio.h>
int main ()
{
	int i,n=0,a[100000],a1=0,a2=0,a3=0,a4=0;
	for(i=0;i<100000;i++)
	{
		scanf_s("%d",&a[i]);
		if(a[i]!=1&&a[i]!=0)
		{
			break;
		}
		n++;
	}
	n--;
	for(i=0;i<n;i++)
	{
		if(a[i]==0 && a[i+1]==0)
		{
			a1++;
		}
		else if(a[i]==0 && a[i+1]==1)
		{
			a2++;
		}
		else if(a[i]==1 && a[i+1]==0)
		{
			a3++;
		}
		else
		{
			a4++;
		}
	}
	printf("%d\n%d\n%d\n%d",a1,a2,a3,a4);
	return 0;
}
