//#include<stdio.h>
//typedef unsigned int uint;   //变量类型重命名
//typedef int* zz;
//
//typedef struct               //类型名可写可不写
//{
//	char m[4];
//} code;                      //code不是变量名，是struct的别名，结构体类型重命名
//
//void fun(uint a, double b)
//{
//	printf("%u,%lf", a, b);
//}
//typedef void (*pfun)(uint, double);//函数指针类型重命名
//int main(void)
//{
//	uint a = 12; 
//	int c = 1;
//	zz p = &a;
//
//	code stu1={"123"};
//
//	pfun p1 = fun;
//	p1(5, 1.234);
//
//	return 0;
//}