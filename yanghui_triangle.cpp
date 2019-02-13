#include <stdio.h>
#define SIZE 50
int main(void)
{
	int a[SIZE][SIZE];
	int i,j,row;
	
	scanf("%d",&row);
	for (i=0; i<SIZE; i++) {
		for (j=0; j<SIZE; j++) {
		    a[i][j]=0;
			
		}
	}
	/*for (i=0; i<SIZE; i++) {
		for (j=0; j<SIZE; j++) {
			printf("%d",a[i][j]);
		}
		 printf("\n");   
	}*/
		
		
	for (j=0; j<SIZE; j++)
		a[j][0]=1;
	for (i=1; i<SIZE; i++)
		a[i][i]=1;


	for (i=1; i<SIZE; i++) {
			for (j=1; j<SIZE-1; j++) {
				a[i][j]=a[i-1][j]+a[i-1][j-1];
			}
	}
	

	for (i=0; i<row; i++) {
		for (j=0; j<=i; j++) {
			printf("%d ",a[i][j]);
		}
			printf("\n");
	}	
	
 } 
