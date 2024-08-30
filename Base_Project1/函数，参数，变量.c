#include<stdio.h>
void fun1(void);
void fun2(void);                                    //避免出现未被定义错误,索性全部声明一遍


void main(void)
{
	//void表示无返回值和参数，int表示有；
	fun1();                                         //fun==&fun,fun()==(&fun) ()
	void(*q)(void) = fun1;                          //声明了函数的类型
	q();
	//0x十六，0八，非0十；
	//c语言中，参数不写void表示不确定参数个数，c++中不写等于没有参数

}
void fun1(void)
{
	printf("正在打印1  \n");
	fun2();                                    //造成循环
}
void fun2(void)
{
	printf("正在打印2  \n");
	fun1();
}

/* void fun1(void);
void fun2(int b[2]);

int a ;                           //声明
int a = 4;                        //定义                 全局变量


int main(void)
{
	fun1();
	int a = 3;                                  //局部变量
	int b[2] = { 6,7 };
	printf("%d\n", a);
	fun1();
	{
		int a = 5;
	}
	printf("%d\n", a);
	fun2(&b);                                   //传递参数，实际参数
}

void fun1(void)
{
	int a = 2;
	printf("%d\n", a);
}

void fun2(int* b) 或者int b[2]                  //形式参数
{
	printf("%d  ", b[0]);
	printf("%d  ", b[1]);
} */
