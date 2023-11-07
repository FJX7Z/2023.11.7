#include <stdio.h>
int main()
{
char ch;
char oh;
printf("请输入一个大写英文字母：");
scanf("%c",&ch);
oh=ch+32;
printf("对应的小写字母为%c\n",oh);
return 0;
}
