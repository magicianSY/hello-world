#include <stdio.h>
#define SIZE 50
int main(void)
{
	int a[SIZE][SIZE];
	int i,j,row;
	
	scanf("%d",&row);
	for (i=0; i<SIZE; i++) {
		for (j=0; j<SIZE; j++) {
		    a[i][j]=0;                     //i row j column array
			
		}
	}
	/*for (i=0; i<SIZE; i++) {                 //this block can print the two dimensional array at present
		for (j=0; j<SIZE; j++) {
			printf("%d",a[i][j]);
		}
		 printf("\n");   
	}*/
		
		
	for (j=0; j<SIZE; j++)                       //change the first column to 1
		a[j][0]=1;  
	for (i=1; i<SIZE; i++)                       //change the ith row ith column to 1
		a[i][i]=1;


	for (i=1; i<SIZE; i++) {
			for (j=1; j<SIZE-1; j++) {
				a[i][j]=a[i-1][j]+a[i-1][j-1];   //the key recursion that represent the rule of yanghui triangle
			}
	}
	

	for (i=0; i<row; i++) {
		for (j=0; j<=i; j++) {
			printf("%d ",a[i][j]);               //print the triangle
		}
			printf("\n");                        //former error: miss the "\n"
	}	
	return 0;
 } 
