#include <stdio.h>
int main()
{
	int a=0;
	printf("请输入一个分钟数：");
	scanf("%d",&a);
	int b=a/60;
	int c=a%60;
	printf("转化为%d小时%d分钟\n",b,c);
	return 0;
}

