#include <stdio.h>
int main()
{
double a;
double b;
printf("请输入一个华氏温度:");
scanf("%lf",&a);
b=(a-32)*5/9;
printf("对应的摄氏温度为%lf摄氏度\n",b);
return 0;
}