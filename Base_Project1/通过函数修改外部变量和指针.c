//#include<stdio.h>
//
// ///////////�޸ı���////////////
//void fun1(int* p);
//
//int main(void)
//{
//	int a = 2;
//	fun1(&a);
//	printf("%d", a);
//	return 0;
//}
//
//void fun1(int* p)
//{
//	*p = 12;
//}
// ////�޸�ָ��ָ��/////////////////////////
//void fun1(int** p);
//int main(void)
//{
//	int a = 12;
//	int* p1 = &a;
//	printf("%p\n", p1);
//	fun1(&p1);
//	printf("%p\n", p1);
//
//}
//void fun1(int** p)
//{
//	printf("%p\n", p);
//	*p = NULL;
//	printf("%p\n",*p);
//}