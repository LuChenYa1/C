//#include<stdio.h>
// 
// //////声明//////////////
//void sort(int *p);
//void print(void);
//
//int b[10] = { 10,3,9,20,8,7,63,54,4,1};
// ////主函数/////////////
//void main(void)
//{
//	int a = 32768;
//	short b = a;
//	long c = a;
//	printf("%d", c);
//	printf("%d\n", b);
//	sort(b);
//	printf("%p\n", b);
//	print();
//}
// /////调用函数//////////////////////
// 
//void sort(int* p)                        // int*p=int p[]
//{
//	printf("%p\n", b);
//	printf("%d\n", *p);
//	for (int j = 0; j < 9; j++)
//	{
//		for (int i = 0; i <= 8; i++)
//		{
//			if (p[i] > p[i + 1])
//			{
//				int temp;
//				temp = p[i];
//				p[i] = p[i + 1];
//				p[i + 1] = temp;
//			}
//		}
//	}
//
//}
//
//
//void print(void)
//{
//	 for (int m = 0; m < 10; m++)
//	{
//		printf("b[%d]=%d\n", m, b[m]);
//	}
//}