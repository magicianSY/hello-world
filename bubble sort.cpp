//bubble sort.c
#include <stdio.h>
#define SIZE 10
int main(void)
{
	int a[SIZE];
	int i,j,temp;
	
	for (i=0; i<SIZE; i++) 
		scanf("%d",&a[i]);
		
	for (i=1;i<SIZE; i++) {	
		for (j=0; j<SIZE-1; j++) {
			if (a[j]>a[j+1]) {
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;	
			}
		}
	}
	for (i=0; i<SIZE; i++)
		printf("%d\n", a[i]);
		
	return 0;
}
