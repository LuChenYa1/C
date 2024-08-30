//#include<stdio.h>
//
//void main(void)
//{
//	int a, b,d;
//	for (a = 0; a <= 2; a++)
//	{
//		for (b = 0; b <=2; b++)
//		{
//			for (d = 0; d <= 2; d++)
//			{
//				printf("开启循环\n");
//				if (d ==1)
//				{
//					goto step;
//				}
//			}
//		}
//	}
//	step:
//	;                                     //后面要有语句，空语句也算
//	/////////////////////////////////////////////////////////////////
//	for (a = 0; a <= 2; a++)
//	{
//		for (b = 0; b <= 2; b++)
//		{
//			for ( d = 0; d <= 2; d++)
//			{
//				printf("开启循环\n");
//				if (d == 1)
//				{
//					break;
//				}
//			}
//			if (d == 1)                       //变量定义放最外面，使它被所有循环认识
//			{
//				break;
//			}
//		}
//		if (d == 1)
//		{
//			break;
//		}
//	}
//	step1:
//	printf("这是循环");                       //goto会使程序很乱，除非跳出嵌套循环，否则不用
//	goto step1;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a, b, c;
//	scanf_s("%lf,%lf,%lf",&a,&b,&c);
//	double p = 1.0 / (a * b * c);
//	double sum = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("sum=%lf", sum);
//}
