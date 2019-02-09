//Fibonacci.c
#include <stdio.h>
int main(void)
{
	int  n,a1, a2, a3;
	a1=1; 
	a2=1;
	a3=1;
	scanf("%d", &n);
	
	if (n==1)
		printf("%d", a1);
	 else {
		 for (int i=1; i<n; i++) {
		
	 	 a3=a1+a2;
		 a1=a2;
		 a2=a3;
	 }	
		printf("%d\n", a1);
	}
		
	 
		
	
	
	return 0;
 } 
