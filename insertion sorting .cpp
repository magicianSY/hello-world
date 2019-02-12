//insertion sorting.cpp  insert a given number into an asceneded array
#include<stdio.h>
#define LENGTH 10
int main(void)
{
	int temp1,temp2,i,j,m;
	int a[10];
	
	for (i=0; i<LENGTH-1; i++)                             //read nine ordered number
		scanf("%d",&a[i]);                             
	scanf("%d",&m);                                        //read the given number
	
	if (m>a[LENGTH-2])
		a[LENGTH-1]=m;                                //if m=max(a[i]),then put it in the last place
	 else {
	 	for (i=0;i<LENGTH; i++) {                     //compare the given number with each items of the array 
	 		if (m<a[i]) {                         //find the items that exactly smaller than the given number,then exchange
	 			temp1=a[i];
	 			a[i]=m;
	 			for (j=i+1; j<LENGTH; j++) {   //the following items go one place behind
	 				temp2=a[j];
	 				a[j]=temp1;
	 				temp1=temp2;
			 	 }
			 	 break;
			 }
		 }
	 }
	for(i=0; i<LENGTH; i++)                               //print the new array
		printf("%d\n",a[i]);
 } 
