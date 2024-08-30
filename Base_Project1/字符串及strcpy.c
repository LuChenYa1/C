//#include<stdio.h>
//#include<string.h>
//
//int main(void)
//{
//	char a[5]={'a','b','c','d','\0'};        //字符串标准：最后一个元素为'\0'的字符数组，转义字符为%s
//	char b[4] = { 'a','\0' };
//	char c[6] = { 'a','b','\0','d','w' };    //'\0'==0;
//	char d[3] = { 'a','b' };                 //没有'\0'会过界
//	printf("%5s\n%5s\n%5s\n%5s", &a[2], &b[0], c, d);    //所有元素作为一个整体，叫“串”
//	printf(a);
//	char* p = "hello,C3程序猿";                  //双引号的作用是返回地址
//	printf("%s\n", p);                          //p=="hello,C3程序猿"
//	printf("%s\n", "hello，C3程序猿");           //常量字符串，自带'\0'
//	//printf('a');                              //形参是字符串，不是字符
//
//	char e[4];
//	e[0] = 'a';
//	e[1] = 'b';
//	e[2] = 'c';
//	//e[3] = '\0';                              //如果没有'\0'结束程序，未赋值的元素会随机乱码
//	printf("%s\n", e);
//
//	char f[12] = "hello world";                 //常量字符串在字符常量区，char在栈区
//	char g[] = "hello C3~";
//	char* p1 = g;                               //"hello C3~"
//	/*f[6] = 'B';
//	printf("%s\n", f);*/
//	//不要越界，不要把大空间硬塞进小空间，会崩溃
//	strcpy(f, g);                               //重新定义字符数组内容的函数，不能用f=g、f="hello C3~",全部覆盖，系统补'\0'
//	printf("%s\n", f);                          //strcpy_s(f,10,g)，_s是在中间加
//	strncpy(f, "uiop", 3);                      //部分覆盖，原有'\0'
//	printf("%s\n", f);                          
//	return 0;
//}