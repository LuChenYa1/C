//#include<stdio.h>
//
////����˵������restrict
////ֻ������ָ�룬��ʾ��ָ���Ƿ��ʶ�Ӧ�ռ��Ψһ�ҳ�ʼ�ķ�ʽ
////���ڶ�ָ������������Ż�,����Ͽ�����Ч��
//void main(void)
//{
//	int a[5] = { 1,2,3,4 };
//	int* restrict p = a;
//
//	p[0] += 2;
//	p[0] += 3;               //�ᱻ�ϲ�Ϊp[0]+=5,������
//}