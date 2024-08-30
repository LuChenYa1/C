#include<stdio.h>

//如何判断大小端存储：
//1.联合类型测试
union un
{
	int m;
	char b[4];
}u;

int main(void)
{
	union un u = { 134480385 };
	//内存对齐决定存哪里，大小端决定怎么存
	//以十进制为例，4251是从高位数据4读到低位数据1
	//如果高位数据存在高位地址，则是小端存储，4存在0x14
	//如果高位数据存在低位地址，则是大端存储，4存在0x10

	printf("%p,%d\n%p,%d\n%p,%d\n%p,%d\n", &u.b[0], u.b[0], &u.b[1] , u.b[1], &u.b[2] , u.b[2], &u.b[3] , u.b[3]);
	//小端：低位低值

	// 2.强制转换地址取*
	//除了网络，一般都是小端存储
	int a = 134480385;//0000 1000 8 0000 0100 4 0000 0010 2 0000 0001 1
	char*p = (char*)&a;
	printf("%p,%d\n%p,%d\n%p,%d\n%p,%d\n", &p, p[0], &p+1, p[1], &p+2, p[2], &p+3, p[3]);

	//转换大端存储(治标不治本)，内存读取方式始终是由高位地址到低位地址
	int temp;
	temp = p[0];
	p[0] = p[4];
	p[4] = temp;

	temp = p[1];
	p[1] = p[2];
	p[2] = temp;
	printf("%p,%d\n%p,%d\n%p,%d\n%p,%d\n", &p, p[0], &p + 1, p[1], &p + 2, p[2], &p + 3, p[3]);
	printf("%d", a);

	return 0;
}
