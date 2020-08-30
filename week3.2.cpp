#include<stdio.h>
int main()
{
	int a,b,c,i;
	int d = 0;
	scanf_s("%d%d%d",&a,&b,&c);
	for(i=1;i<=a;i++)
	{
		if(a%i==0 && b%i==0 && c%i==0)
		{
			if(i > d)
			{
				d = i;
			}
		}
	}
	printf("%d",d);
	return 0;
}
