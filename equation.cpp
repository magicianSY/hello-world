//quadratic equation of one variable.c
#include <stdio.h>
#include <math.h> 
int main(void)
{	
	double a,b,c,r1,r2;
	scanf("%lf %lf %lf",&a,&b,&c);         //wrong form: scanf("%d %d %d",&a, &b, &c);
	r1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);    //pow() and sqrt() require a double type
	r2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	
	printf("r1=%7.2f\n",r1);
	printf("r2=%7.2f\n",r2);
	
	
	return 0;
 } 
