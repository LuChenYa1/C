#include<stdio.h>
#include<stdlib.h>
 
// 递归函数：难以阅读、维护；效率低；递归层数太多容易爆栈；唯一优点是简洁，代码少
 
void fun(int a)                  //循环控制变量
{
	if (a > 0)                   //循环控制条件
	{
		printf("%d\n", a);       //执行语句
		fun(a - 1);              //也可以是a--；循环控制变量的变化
		printf("%d\n", a);       //54321,12345；执行到a==0、继续向下、跳出最里层，此时a==1，打印1，继续跳，打印2345
	}
}

int fun1(int b)
{
	if (b == 1)
	{
		return 1;
	}
	else if (b == 2)
	{
		return 1;
	}
	else
	{
		return fun1(b - 1) + fun1(b - 2);
	}
}

int main(void)
{

	fun(5);
	int m;
	scanf_s("%d", &m);
	printf("%d\n", fun1(m));

	return 0;
}