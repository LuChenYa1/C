//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>                    //����calloc��realloc
//
//int main(void)
//{
//	//int* p = (int*)calloc(3, 4);      //(Ԫ�ظ���������Ԫ��ռ�ֽ�����
//
//	//if (p == NULL)
//	//{
//	//	return NULL;
//	//}
//
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	printf("%d\n", p[i]);        //��ʼֵΪ0����malloc��ͬ
//	//}
//	//free(p);
//
//	int* p1 = (int*)malloc(8);
//	if (p1 == NULL)
//	{
//		return NULL;
//	}
//	size_t m = _msize(p1);
//	printf("%d", (int)m);
//	
//	int* p2 = (int*)realloc(p1,20);
//	if (p2 == NULL)
//	{
//		return NULL;
//	}
//	m = _msize(p1);           //��%zd���������%u��C4477
//	printf("%d",m);           // C4477: ��printf��: ��ʽ�ַ�����%d����Ҫ���͡�int���Ĳ��������ɱ���� 1 ӵ�������͡�size_t��
//
//	free(p1);
//	free(p2);
//
//	return 0;
//}
