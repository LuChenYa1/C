//#include<stdio.h>
//
////从大到小排序
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
//void insertSort(int a[], int n)//插入法排序
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
//    //请同学们补充完善
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
//    inputData(a, N);//随机生成数组a
//    inputData(b, M);//随机生成数组b
//    insertSort(a, N); //对数组a进行排序
//    outputData(a, N);//输出排序后的数组a
//
//    insertSort(b, M);//对数组b进行排序
//    outputData(b, M);//输出排序后的数组b
//    k = merge(a, N, b, M, c); //将两个递增有序的数组a（长度为leba）与b（长度为lenb）有序合并到数组c，函数返回c的长度。
//    outputData(c, k);//输出数组c
//    return 0;
//}