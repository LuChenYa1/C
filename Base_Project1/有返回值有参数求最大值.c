//#include<stdio.h>
//
//int FindMaxnum(int* p, int length,int*p1);
//int main(void)
//{
//	int n=0;
//	int y[] = { 23,25,65,14,45,37,62 };
//	printf("%d,%d,%d\n", n,FindMaxnum(y, 7,&n),n);         //都为最大，优先级大于结合性
//
//	int(*p)(int*, int, int*) = FindMaxnum;                //声明函数指针；如果*p不加括号，p就会与后面括号结合形成函数，报错：函数被初始化
//	                                                      //函数地址+（）==函数调用！！！！！！！！！！
//	p(y, 7, &n);                                          
//	
//	//int m;
//	//换算值
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
