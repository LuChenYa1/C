//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//
//int main(void)
//{
//	//前提：栈区和堆区规则基本一致
//	
//	//数组指针
//
//	int a[5] = { 1,2,3,4,5 };
//
//	int(*p)[5] = &a;                                                       //数组指针，一维数组的二级指针
//	//(*p)[2] == 3;
//	//*p[2];                                                               //*p[2]不存在，p与[2]结合，以数组为偏移单位，偏移了两个数组a，再取*，过界了，无法取值  
//
//	int* p1 = a;                                                           //一维数组的一级指针
//	printf("%d,%d,%d,%d\n", **p,*p1,(*p)[2],p1[2]);                        //a==&a[0]
//
//	int b[2][3] = { 6,7,8,9,10,11};
//	int(*p2)[3] = b;                                                       //二维数组的一级指针
//	int(*p3)[2][3] = &b;                                                   //二维数组的二级指针
//
//	printf(" %d ，%d\n", (*p3)[0][1],p2[0][1]);                            //*p2，**p3不对应元素
//
//
//	int(*q)[2][3] = (int(*)[2][3])malloc(sizeof(int) * 6);                 //堆区二维数组
//  free(q);
//	int(*h)[4] = (int(*)[4])malloc(sizeof(int) * 4);                       //堆区一维数组的二级指针
//
//	if (h == NULL)
//	{
//		return NULL;
//	}
//
//	(*h)[1] = 2;
//	printf("%d ,%p  %p\n", (*h)[1],*h, (int(*)[4])malloc(sizeof(int) * 4));//结论：确认是二级指针，但无法确认相等
//	printf("%d", (*h)[1]);                                                 //类比栈区数组   
//
//	free(h);
//
//	//对比非数组
//
//	int* m = malloc(4);                                                    //非数组指针是一级指针
//
//	if (m == NULL)
//	{                          //啊啊啊啊啊操作指针前需要做的空指针判断是这样写的！！！！return NULL;
//		return NULL;
//	}
//
//	*m = 12;                   //在给一个指针分配内存（malloc）之后需要检查还有没有剩余空间,如果没有剩余空间，该指针就会返回null
//
//	free(m);
//
//	
//
//	//指针数组：
//	int c[2] = { 1,2 };
//	int d[3] = { 3,4,5 };
//	int e[4] = { 6,7,8,9};
//	int f[5] = { 10,11,12,13,14 };
//	int g[6] = { 15,16,17,18,19,20 };
//
//	int* i[5] = { c,d,e,f,g };               //拉链结构，套娃，h[0]==c
//	//printf("%d\n", i[4][3]);                   //输出18
//
//	return 0;
//}