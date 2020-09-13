#include<stdio.h>
int main()
{
	float a,b;
	scanf_s("%f",&a);
	if(a>=30)
	{
		b=(a-32)*5/9;
		printf("%.2f f = %.2f c",a,b);
	}
	else
	{
		printf("Too cold to live");
	}
	return 0;
}
