//#include<stdio.h>
//
//struct stu1  
//{
//	double m;
//	float x;
//}st;
//
//struct stu2
//{
//	int a;
//	struct stu1 st;           //不能把定义也写进来，会有问题
//	char n;
//}sd;
//int main(void)
//{
//	struct stu2 sd = { 1,{1.23,2.33f},'\0' };
//	printf("%d,%lf,%f",sd.a,sd.st.m,sd.st.x);            //连用两个.来取值
//	return 0;
//}