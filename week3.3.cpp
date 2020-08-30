#include<stdio.h>
int main()
{
	int a,b,c,d,i;
	scanf_s("%d%d%d",&a,&b,&c);
	d = a*b*c;
	for(i=1;i<=d;i++)
	{
		if(i%a==0 && i%b==0 && i%c ==0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
