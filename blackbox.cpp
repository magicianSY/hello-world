#include <stdio.h>
int main(void)
{
	int a,b;

/*	while (scanf("%d %d",&a,&b)!=EOF) {   //û��Ҫ�󣬶����ļ�ĩβ(End of File) 
		printf("%d\n",a+b);
	}*/
	
/*	while (scanf("%d%d",&a,&b)!=EOF,a||b) {    //����ĳһ������������"0 0"�� �������� 
		printf("%d\n",a+b);
	}*/
	
	int T  ;             //�����T������ 
	scanf("%d",&T);
	while (T--){
		scanf("%d%d",&a,&b);
		printf("%d\n",a+b);
	}
	
	return 0;
	
}


