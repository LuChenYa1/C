//#include<stdio.h>
////struct stu
////{
////	int* p;                                //指针成员
////}st;
////int main(void)
////{
////	int a[10] = {1,2,3,4,5,6,7,8};        //栈区
////	st.p =  a ;
////	printf("%d", st.p[0]);
////	st.p = (int*)malloc(sizeof(int));     //堆区
////	st.p[0] = 24;
////
////	return 0;
////}
//
//struct stu
//{
//	void(*p)(double,float);            //函数成员，实际还是指针成员
//}hs;
//void fun(double m,float n)
//{
//	printf("%lf", m);
//}
//int main(void)
//{
//	//struct stu hs = { fun };
//	hs.p = fun;
//	(hs.p)(5,1.23f);
//
//	return 0;
//}