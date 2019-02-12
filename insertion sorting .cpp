#include<stdio.h>
#define LENGTH 10
int main(void)
{
	int temp1,temp2,i,j,m;
	int a[10];
	
	for (i=0; i<LENGTH-1; i++) 
		scanf("%d",&a[i]);
	scanf("%d",&m);
	
	if (m>a[LENGTH-2])
		a[LENGTH-1]=m;
	 else {
	 	for (i=0;i<LENGTH; i++) {
	 		if (m<a[i]) {
	 			temp1=a[i];
	 			a[i]=m;
	 			for (j=i+1; j<LENGTH; j++) {
	 				temp2=a[j];
	 				a[j]=temp1;
	 				temp1=temp2;
			 	 }
			 	 break;
			 }
		 }
	 }
	for(i=0; i<LENGTH; i++) 
		printf("%d\n",a[i]);
 } 
