#include <stdio.h>
int main(void)
{
	int a,b;

/*	while (scanf("%d %d",&a,&b)!=EOF) {   //没有要求，读到文件末尾(End of File) 
		printf("%d\n",a+b);
	}*/
	
/*	while (scanf("%d%d",&a,&b)!=EOF,a||b) {    //读到某一组数（本例是"0 0"） 结束程序 
		printf("%d\n",a+b);
	}*/
	
	int T  ;             //需读入T组数据 
	scanf("%d",&T);
	while (T--){
		scanf("%d%d",&a,&b);
		printf("%d\n",a+b);
	}
	
	return 0;
	
}


