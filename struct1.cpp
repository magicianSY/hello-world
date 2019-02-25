#include <cstdio>
#define SIZE 100
struct student {
	char name[SIZE];
	char id[SIZE];
	int score;
}temp, ans_max, ans_min ;

int main(void)
{
	int n;
	scanf("%d",&n);
	ans_max.score=0;
	ans_min.score=101;
	
	for (int i=0; i<n; i++) {
		scanf("%s%s%d",&temp.name, &temp.id, &temp.score);
		
		if (temp.score>ans_max.score)
			ans_max=temp;
		if (temp.score<ans_min.score)
			ans_min=temp;
	}	
		
		printf("%s %s %d\n",ans_max.name, ans_max.id, ans_max.score);
		printf("%s %s %d\n",ans_min.name, ans_min.id, ans_min.score);
		
		return 0;
	
	
}
