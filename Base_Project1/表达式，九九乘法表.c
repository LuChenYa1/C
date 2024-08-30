#include<stdio.h>
void main()
{
	int a;
	//c=(a=2,4,b=a) 从左到右，执行最右边结果，即2，无逗号即为表达式，结果为某一确定值
	printf("请输入您的成绩\n");
	scanf_s("%d\n", &a);
	if (a >= 60 && a<=100)                 //错误写法：60<=a<=100
	{
		printf("您的成绩合格\n");
	}
	else
	{
		printf("您的成绩不合格\n");
	}
	/*int a,
		b,
		c=a*b;
	for (a = 1; a <= 9; a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d*%d=%d", b, a, c);
		}
		printf("\n");
	}
}*/

