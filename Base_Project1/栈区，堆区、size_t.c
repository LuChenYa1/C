#include<stdio.h>
#include<stdlib.h>

#include<malloc.h>                               malloc()是内建函数

#include<memory.h>                               menset(首地址，赋值，字节数）
#include<string.h>

int main(void)
{
	  //软件包括文件和程序
	  //程序（软件）运行时将数据及指令从磁盘转移到内存条中
	  //内存条内部分为：栈区（堆栈区），堆区，静态全局区，字符常量区，代码区
	  //栈区：储存各种定义变量及数组，该区的空间由系统负责申请，当变量的生命周期结束，系统将释放空间
	  // 注，栈区有实际存储限制，一般为1MB,该数值可修改，实测与该数值的差距为返回值和函数参数占据空间
	  //变量生命周期：从被定义到程序结束被释放
	  //程序运行时，系统实时检测变量生命周期是否结束，即，CPU抽时间执行检测功能；虽然占用CPU，但自动化，较方便
	  //堆区：程序员随时申请并随时释放，减少CPU占用的工作量，但不方便
	  //另注，由于占用资源较少，其空间可修改范围比栈区大（属性——链接器）
	  //内存碎片：内存被多个程序占用时，会存在一部分较小的空间不符合申请的空间要求，因而无法使用
	
	 
	int a[1024 * 1024 / 256] = {1};                 //一编：栈区变量限制4112个（255），转换后为16KB，超过这个范围会爆栈，stack overflow


	int* b = (int*)malloc(0);                         //该式右边的（int*）使无类型空间强制转换为int类型
	int* p = (int*)malloc(sizeof(int));               //malloc函数使操作系统向堆区申请指定大小、连续的一段空间，并返回该空间的首地址
	double* p1 = (double*)malloc(sizeof(double));
	int* p2 = (int*)malloc(sizeof(int) * 5);
	int* p3 = (int*)malloc(sizeof(4));
	int* p4 = (int*)malloc(4u);                       //u是无符号后缀，一般整形默认有符号，系统转换成无符号，也可自己转换，即，加u
	int* p5 = (int*)malloc(sizeof(2*3));
	int* p6 = (int*)malloc(2u*1024u*1024u*1024u);     //无符号时，范围是2……32-1
	int* p7 = (int*)malloc(1024 * 1024 * 1024);       //有符号是2……31-1
    int* p8 = (int*)malloc(2 * 1024 * 1024 * 1024-1); //warning C4307 : “ * ” : 有符号整型常量溢出，
	                                                  //系统检测没有整体思维，先计算2……31，再看到“-1”
	//warning C4307: “*”: 有符号整型常量溢出
	//warning C4307: “-”: 有符号整型常量溢出


	free(p); free(b); free(p1);
	free(p2); free(p3); free(p4);
	free(p5); free(p6); free(p7);       free(p8);


	unsigned int x;                                   //相较栈区数组而言，堆区数组可以自主定义元素个数（数组长度）
	scanf_s("%d", &x);
	int* q = malloc(x);                               //*（q+i)=q[i],规则和栈区一样
	free(q);

	
	/* if (NULL == 某指针)                               //空指针被运行会使程序崩溃，加一个判断语句避免这种情况
	{                                                 
		//提示
		printf("申请空间失败");
	  return NULL;
		//结束程序
		//重新申请
	} */


	int* pp = (int*)malloc(40);

	if (pp == NULL)
	{
		return NULL;
	}
	//10个数全部赋值0
	memset(pp, 0, 40);                               //按字节赋值，(&pp)不报错但不打印，（pp）报错但打印
	for (int i = 0; i < 10; i++)                     // memset()只能适用于赋值0；
	{
		printf("%d\n", pp[i]);                       // 赋值1时，二进制表示为：00000001 00000001 00000001 00000001
	}

	//10个数全部赋值1
	for (int j = 0; j < 10; j++)                  
	{
		pp[j] = 1;
		printf("%d\n", pp[j]);
	}
	free(pp);

	//size_t,64位编译器环境下d大小是8字节，32位———4字节
	//64位编译器环境下，size_t==long unsigned int;32位时，size_t==unsigned int.

	int* m = malloc(8);                               //malloc前面省略，该情况只适用于部分基础类型
	int* n = m;                                       //没有这一步将导致内存泄漏，地址丢失但继续占用内存
	free(m);
	m = malloc(4);
	if (m == NULL)
	{
		return NULL;
	}
	*m = 12;

	//释放后再定义NULL，确保完全释放
	printf("%d,%p\n", *m, m);                         //free仅仅把空间归还给系统，地址不变
	free(m);                                          //野指针：有地址，但无法访问空间，free后是野指针
	printf("%d,%p\n", *m, m);
	m = NULL;                                         //空指针：内容为空，没有地址，赋值NULL后就是空指针


	int d[10]={1};                                    //不能释放栈区空间，系统崩溃了
	free(d);

	int* k = malloc(8);                               //不能重复释放，系统也崩溃了
	free(k);
	free(k);


	return 0;
}
