//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int a = 1;
//	while (a <= 5)						//非0即真，包括浮点型，按Ctrl+C停下死循环
//	{
//		printf("%d\n", a <= 5);          //判断循环次数
//		printf("%d\n", a);
//		a++;	
//	}
//	printf("%d\n", a++);
//	int c=0;                               //计数器，放最前边儿避免被初始化
//	for(int a=1;a<=3;a++)                  //相对while更直观
//	{
//		printf("外部循环\n");
//		for (int b = 2; b <=4; b++)        //入口条件循环，先条件后执行
//		{
//			int c=1;
//			c++;
//			printf("a是%d  b是%d  内部循环%d \n ", a,b,c);
//		}
//	}
//    return 0;
//
//}