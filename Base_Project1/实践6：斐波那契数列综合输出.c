#include<stdio.h>


// /利用公式///////

//int main(void)
//{
//	int f1= 1;
//	int f2= 1;
//		
//	for (int i = 1; i <= 40 / 2; i++)
//	{
//		
//		printf("%20d", f1);
//		printf("%20d", f2);
//		if (i % 2 == 0)                   //每次循环输出两个，两次循环换行，每行四个   
//		{
//			printf("\n");
//		}
//		f1 += f2;
//		f2 += f1;
//	}
//	return 0;
//}

// //利用数组///////
//int main(void)
//{
//	int fib[40] = { 1,1 };
//	for (int i = 2; i < 40; i++)
//	{
//		fib[i] = fib[i - 1] + fib[i - 2];
//	}
//	for (int j = 0; j < 40; j++)
//	{
//		if (j % 4 == 0)
//		{
//			printf("\n");
//		}
//		printf("%20d", fib[j]);
//	}
//}

//// //利用递归//////
//int fun(int x);
//int i;
//int main(void)
//{
//	/*for (int y = 1; y <= 51; y++)
//	{
//		printf("%20d", fun(y));
//		if (y % 4 == 0)
//		{
//			printf("\n");
//		}
//	}*/
//	printf("%d,%d",fun(50),i);
//	return 0;
//}
//int fun(int x)
//{
//	i++;
//	if (x == 1 || x == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fun(x - 1) + fun(x - 2);
//	}
//}