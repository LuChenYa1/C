//#include<stdio.h>
//
////静态全局区：extern
//// 全局/外部变量
////在运行时的资源加载阶段分配空间
////自动初始化0，除非手动初始化
////全局变量在所有文件中生效，在所有外部区中只能赋值一次，但能在不同文件中多次声明
//
//extern int a;                       //0    存储类型说明符，说明其为外部变量，一般不省略 
//extern int a;                       //不能重定义，但可以重声明
////int d = a;                        全局变量在外部不允许将已经初始化的变量赋值给变量，但内部可以
//
//
// struct stu                         //结构体本身只能在外部，不能加extern ,会报错
//{
//	int* p;                         //0
//}b;
//extern double c = 1.23;             //1.23
//extern int m;                       //对来自其他文件的全局变量进行重声明，以便使用
//extern void fun(void)               //一般函数不加extern
//{
//	printf("我是一个函数的内容\n");
//	 
//}
//void fun3(void);
//int main(void)
//{
//	int q = a;
//	printf("%d\n", a);
//	int a=1;                       //内部a和外部a不一样
//	printf("%d\n", a);
//	printf("%p\n",b.p);
//	printf("%lf\n", c);
//	printf("%d\n", m);
//	fun();
//	fun3();
//
//	extern int n;        //不允许对外部变量的局部声明使用初始值设定
////	printf("%d", n);     //不能打印，不能赋值，这种变量有啥用？？？
//	return 0;
//}