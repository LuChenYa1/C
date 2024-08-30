//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//
////fput写入，fgets导出阅读
////按行写入（手动加\n）和读取
////只能针对字符和字符串
//int main(void)
//{
//	FILE* pFile = fopen("xie.txt", "r");
//
//	//size_t a;
//	//a=fputs("hello\n", pFile);//成功返回0；失败返回-1
//	//fputs("world\n", pFile);
//
//	//printf("%zu", a);
//
//	
//	
//	char* fp;
//	
//	char str[10] = "0";
//	 char str2[10]="0";
//	 
//	fp=fgets(str, 10, pFile);  //返回写入空间str的首地址
//	//10为最大的读取量
//	fgets(str2,10,pFile);      //自动换行读取
//
//	printf("%p\n ", fp);
//	printf("%s\n", str2);
//	printf(str);
//
//	fclose(pFile);
//}