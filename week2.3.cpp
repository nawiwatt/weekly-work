#include<stdio.h>
int main()
{
	int a,i,j;
	int b[10];
	int n = 10;
	for(i=0;i<10;i++)
	{
		scanf_s("%d",&a);
		b[i] = a%42;		
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(b[i]==b[j])
			{
				n=n-1;
				break;
			}
		}
	}
	printf("%d",n);
	return 0;
}
