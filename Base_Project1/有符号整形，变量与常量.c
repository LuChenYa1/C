//#include<stdio.h>
//int main(void)
//
//{
//	int a = 12;
//	a = 13;
//	a = -1;
//	printf("%d\n", a);
//                                                    // 12 = 13;错误，左值为变量，右值为常量
//	unsigned int b;                                     //范围：-2147483648~2147483647，为循环
//	b = 1;
//	b = -3;                                           
//	//b = 2147483648;                                   //输出-2147483648
//	                                                  //int4字节，一字节8个二进制位，一个二进制位装0或1，范围：-2……31~2……31-1
//	printf("%d\n", b);
//	printf("%zd\n", sizeof(int));                     //注意测量大小应用%zd
//
//	b = sizeof(int);
//	printf("%d\n", b);
//
//	//int c;//年龄
//	//int d;//体重
//
//	return 0;
//}