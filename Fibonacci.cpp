//Fibonacci.c
#include <stdio.h>
int main(void)
{
	int  n,a1, a2, a3;
	a1=1;                              //the (n-2)th item of the sequence
	a2=1;                              //the (n-1)th item of the sequence 
	a3=1;                              //the nth item of the sequence 
	scanf("%d", &n);
	
	if (n==1)                           //the former mistake: mix "="&"==" 
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
