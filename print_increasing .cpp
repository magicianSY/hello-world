//print 3 numbers in increasing order
#include <stdio.h>
int main(void)
{	
	double a,b,c,t;
	t=0;
	scanf("%lf %lf %lf",&a,&b,&c);
	 if (b>c) {
	 	t=c;
		c=b;
		b=t;
	} 	
	 if (a>b) {
		t=a;
		a=b;
		b=t;
	}
	printf("%.2lf %.2lf %.2lf",a,b,c);
	return 0;	
 } 
