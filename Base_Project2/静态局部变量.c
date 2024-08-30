//#include<stdio.h>
//
// //静态全局区：static
////静态局部变量 会被初始化为零，生命周期与程序共存亡，和全局变量一样
//// 同样不能用变量对它初始化,符合它静态的概念,注意是初始化，不是赋值
////全局变量在外部不允许将已经初始化的变量赋值给变量，但内部可以
//
//void fun(void);
//
//static void fun4(void)
//{
//	printf("静态函数只能在本文件中使用，相当于静态全局变量");
//}
//void main(void)
//{
//	{
//		int k=0;
//		//static int f=k;  //初始值设定项不是常量
//		static int f;      //空间一旦被申请就不会被释放，因此不会被重复初始化
//	}
//
//	fun();
//	fun();
//	fun();
//	fun4();
//}
//
//void fun(void)
//{
//	static int bb=1;      //该句无效化，程序只执行一次
//	int aa = 1;
//	aa++;
//	bb++;
//	printf("aa=%d,bb=%d\n", aa, bb);
//}