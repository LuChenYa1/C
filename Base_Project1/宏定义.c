//#include<stdio.h>
//#include<string.h>
////宏是最简单的替换，不进行任何运算
////宏一般大写
//#define THREE                  
////空宏在高级编程中作用
//#define ONE      1
//#define ONEONE   ONE             
////宏可做宏的本体
//#define SX       2-3*4
//#define HS       printf("%d\n",
// //参数宏
//#define PR(x)    printf("%d\n",x);           
//#define SUM(x,y) ((x)+(y))
//#define MAX(x,y) (x)>(y)?(x):(y)
//#define TPR      printf("%d\n",ONE);\
//		         printf("hello\n");           // \表示连接，其后一行都不能有内容，包括内容
//
//#define SHU(x)   printf("%s\n",#x)            
////#把x转变为字符串
//#define SHU_1(x,y)    printf("%s\n",#x ## #y) 
////##表示连接两个字符串
//
//int main(void)
//{
//	printf("%d\n", ONE);
//	printf("%d\n", SX);
//	printf("%d\n", 2 * SX);  //由于宏只做简单替换，不运算，最终值是-8，不是-20
//	HS ONE);                 //由此可以看出宏仅仅只起替换作用
//	PR(12 * 12)
//	printf("%d\n", SUM(2 * 2, 5 + 4));
//	printf("%d\n", MAX(6, 7));
//	SHU("hello");            //双引号属于x的一部分，是字符串，也被打印
//	SHU_1(asd, wer); 
//
//	unsigned int a=strlen("\a");
//	return 0;
//}