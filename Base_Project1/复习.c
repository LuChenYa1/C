//#include<stdio.h>
//
////�Ӵ�С����
//int shuzu[10] = { 34,12,25,97,1,19,88,45,6,70 };
//
//void sort(int* p);
//int main(void)
//{
//	sort(shuzu);
//}
//
//void sort(int* p)
//{
//	for (int j = 0; j <= 8;j++)
//	{
//		for (int i = 0; i <= 8; i++)
//		{
//			if (p[i] > p[i + 1])
//			{
//				int m = p[i];
//				int n = p[i + 1];
//				p[i] = n;
//				p[i + 1] = m;
//			}
//		}
//	}
//	for (int q = 0; q <= 9; q++)
//	{
//		printf("%d\n", p[q]);
//	}
//}

//int main(void)
//{
//	int i, j;
//
//	for ( i = 1; i <= 99; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d   ", i);
//		}
//		
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define N 6
//#define M 8
//void inputData(int a[], int n)
//{
//    int i;
//    for (i = 0; i < n; i++)
//        scanf_s("%d", &a[i]);
//    return;
//}
//void outputData(int a[], int n)
//{
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        if (i % 10 == 0)
//            printf("\n");
//        printf("%5d", a[i]);
//    }
//    printf("\n");
//    return;
//}
//void insertSort(int a[], int n)//���뷨����
//{
//    int x, i, j;
//    for (i = 1; i < n; i++)
//    {
//        x = a[i];
//        j = i - 1;
//        while (j >= 0 && x < a[j])
//        {
//            a[j + 1] = a[j];
//            j--;
//        }
//        a[j + 1] = x;
//    }
//}
//int merge(int a[], int lena, int b[], int lenb, int c[])
//{
//    //��ͬѧ�ǲ�������
//    int i;
//    for (i = 0; i < lena; i++)
//    {
//        c[i] = a[i];
//    }
//    for (i = lena; i < lena + lenb; i++)
//    {
//        c[i] = b[i];
//    }
//    insertSort(c, lena + lenb);
//    return lena + lenb;
//}
//int main()
//{
//    int a[N], b[M], c[N + M], k;
//    inputData(a, N);//�����������a
//    inputData(b, M);//�����������b
//    insertSort(a, N); //������a��������
//    outputData(a, N);//�������������a
//
//    insertSort(b, M);//������b��������
//    outputData(b, M);//�������������b
//    k = merge(a, N, b, M, c); //�������������������a������Ϊleba����b������Ϊlenb������ϲ�������c����������c�ĳ��ȡ�
//    outputData(c, k);//�������c
//    return 0;
//}