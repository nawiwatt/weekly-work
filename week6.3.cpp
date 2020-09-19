#include<stdio.h>
int main()
{
	int a,b,c,d,i;
	scanf_s("%d%d%d",&a,&b,&c);
	for(i=a*b*c;i>=a;i--)
	{
		if(i%a==0&&i%b==0&&i%c==0)
		{
			d=i;
		}
	}
	printf("%d",d);
	return 0;
}
