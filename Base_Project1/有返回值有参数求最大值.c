//#include<stdio.h>
//
//int FindMaxnum(int* p, int length,int*p1);
//int main(void)
//{
//	int n=0;
//	int y[] = { 23,25,65,14,45,37,62 };
//	printf("%d,%d,%d\n", n,FindMaxnum(y, 7,&n),n);         //��Ϊ������ȼ����ڽ����
//
//	int(*p)(int*, int, int*) = FindMaxnum;                //��������ָ�룻���*p�������ţ�p�ͻ���������Ž���γɺ�����������������ʼ��
//	                                                      //������ַ+����==�������ã�������������������
//	p(y, 7, &n);                                          
//	
//	//int m;
//	//����ֵ
//	/*scanf_s("%d", &m);
//	m = m * 3;
//	printf("%d", m);
//	return 0;*/
//}
//
//int  FindMaxnum(int* p, int length,int*p1)
//{
//	int max = p[2];
//	for (int i = 0; i < length; i++)
//	{
//		if (max < p[i])
//		{
//			max = p[i];
//		}
//	}
//	*p1 = max;
//	printf("%d\n", max);
//	return max;
//}
