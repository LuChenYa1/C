//#include<stdio.h>
////struct stu
////{
////	int* p;                                //ָ���Ա
////}st;
////int main(void)
////{
////	int a[10] = {1,2,3,4,5,6,7,8};        //ջ��
////	st.p =  a ;
////	printf("%d", st.p[0]);
////	st.p = (int*)malloc(sizeof(int));     //����
////	st.p[0] = 24;
////
////	return 0;
////}
//
//struct stu
//{
//	void(*p)(double,float);            //������Ա��ʵ�ʻ���ָ���Ա
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