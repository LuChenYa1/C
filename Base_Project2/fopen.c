//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//
//void main(void)
//{
//	//文件储存在外存中，fopen()在物理内存中开辟一块空间，将外存中的文件复制过来
//	// 函数返回物理内存的首地址
//	//fclose（）是保存作用，将在内存中的改动更新到外存,
//	FILE* pFile = fopen(" file.txt","w");    //返回文件指针
//	printf("%d", errno);     
//	//errno是系统已经定义好的参数宏，是fopen的错误码>>工具>>错误查找：0无错 1函数不正确 2文件不存在
//	 fclose(pFile);
//	//文本模式>>r只读，不能打开不存在文件（r+同理），w擦除写，可创建一个原来没有的文件，a可读可追加写；r+可读可写(擦除写)，w+和a+没啥变化
//	//二进制模式>>rb,wb,ab;r+b/rb+,wb+/w+b,ab+/a+b
//
//	
//	FILE* pFile1 = NULL;
//	errno_t a=fopen_s(&pFile1,"qwe.txt","r");//返回错误码
//	printf("%d", a);
//	fclose(pFile);
//}
