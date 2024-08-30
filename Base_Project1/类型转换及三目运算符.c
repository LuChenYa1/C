//#include<stdio.h>
//int main(void)
//{
//  //原则：小空间转成大空间，有符号转成无符号，整形转成浮点型，long long >long , double 8字节，级别最高
//  //   4/5.0f = 4.0f/5.0f == 0.8f
//  // 特例：int a=12.34；赋值语句可能存在类型降级
//  // int *p=malloc(4);  这里不是隐式类型转换，它属于编译器自带的功能
//  // unsigned char a=(unsigned char)1234.6,a==1234%256
//	//int a = 10;
//	//float b = 1.23;
//	//double sum;                //隐式类型转换
//	//sum = a * b;
//	//printf("%lf", sum);
//
//	//int m = 5;
//	//float n;
//	//n = (float)m;             //强制类型转换
//	//printf("%f", n);
// 
// 
// //深入
//	//int x = 12;
//	//double* p1 = (double*)&x;  //x是4字节，*P1一次操作8字节空间，属于越界操作
//	//*p1 = 24;
//
//	//double y = 13;
//	//int* p2 = (int*)&y;                 //26未超过4字节限制大小，赋值成功
//	//*p2 = 26;
//
//	//int g = 14;
//	//float* p3 = (float*)&g;             //都是4字节，可以赋值
//	//*p3 = 12.3f;
//
//	double fz =15;
//	int* p4 = (int*)&fz;
//	*p4 = 12;                             //赋值前4个字节
//	//*(p4 + 1) = 13;                       //赋值后4个字节
//	*(int*)((short*)p4 + 1) = 26;       //对中间4个字节赋值
//	printf("%d,%d", *(int*)(&fz),*(int*)((char*)&fz+2));   //输出乱码，26，因为前面的赋值被覆盖了
//	//指针的类型决定其读取字节数
//
//	//printf("a和m中较大的是%d", a > m ? a : m); //三目运算符或者叫条件运算符
//	return 0;
//}