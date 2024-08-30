//#include<stdio.h>
//#include<stdlib.h>
//
//int* fun1(void);
//void fun2(int a, double b);
//
//int main(void)
//{
//	int* a = fun1();
//	printf("%d,%d\n", a[0], *(a+1));               //a是指针，*a=a[0],*(a+1)=a[1];
//
//	int i = 12; double j = 13.13;
//	fun2(i, j );
//	return 0;
//	printf("不执行该语句");
//}
//
// int* fun1(void)
//{
//	/* int b[2] = { 4,6 };
//	 int* p1 = b;
//	 return p1;*/                           //warning C4172: 返回局部变量或临时变量的地址: b——故不建议返回局部/栈区/临时变量
//
//	int* p = (int*)malloc(8);
//	if(p)
//	{
//		*p = 4;                            //不加if来判断是否是空指针，会报错，“C6011：取消对NULL指针‘p’的引用”
//		p[1] = 5; 
//	}
//	
//	return p;
//}
//
// void fun2(int a, double b)
// {
//	 printf("%d,%lf", a, b);
// }