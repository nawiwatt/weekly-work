#include<stdio.h>
#include <math.h>
int main()
{
	 double a,b,c;
	scanf("%lf%lf",&a,&b);
	c = pow(a,2)+pow(b,2);	
	printf("%lf",sqrt(c));	
	return 0;
}
