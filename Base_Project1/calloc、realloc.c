//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>                    //适用calloc、realloc
//
//int main(void)
//{
//	//int* p = (int*)calloc(3, 4);      //(元素个数，单个元素占字节数）
//
//	//if (p == NULL)
//	//{
//	//	return NULL;
//	//}
//
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	printf("%d\n", p[i]);        //初始值为0，和malloc不同
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
//	m = _msize(p1);           //用%zd会崩溃，用%u报C4477
//	printf("%d",m);           // C4477: “printf”: 格式字符串“%d”需要类型“int”的参数，但可变参数 1 拥有了类型“size_t”
//
//	free(p1);
//	free(p2);
//
//	return 0;
//}
