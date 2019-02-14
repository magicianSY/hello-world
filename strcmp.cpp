//strcmp.cpp
#include <stdio.h>
#include <string.h>
#define SIZE 20
int main(void)
{
	char a[SIZE],b[SIZE],c[SIZE],max[SIZE];    
	int cmp1, cmp2, cmp3;          //restore the comparation result of each two of the strings
	gets(a);
	gets(b);
	gets(c);                       //read three strings
	
	cmp1=strcmp(a,b); 
	cmp2=strcmp(b,c); 
	cmp3=strcmp(c,a); 
	
	if(cmp1>0){                   //if (a>b) (dictionary order)
		if (cmp2>0)                 //&(a>c),then max=a
			strcpy(max,a);	
		else if(cmp3>0)
			strcpy(max,c);
	}
	else {
		if (cmp2>0)
			strcpy(max,b);
		else
			strcpy(max,c);	
	}
	puts(max);	               //print the max string
}
