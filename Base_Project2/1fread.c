//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main(void)
//{
//	FILE* pFile = fopen("xie.txt", "a");//要读的时候不能用w模式
//	//char* str = "asdfghj";
//	char   STR[20] = { 0};
//	 
//	//fwrite(str, sizeof(char), strlen(str) + 1, pFile);
//
//	size_t a; //读入的字节数，越界则返回0
//	while(a = fread(STR, sizeof(char), 5, pFile))  //每次从STR[0]开始赋值
//		printf(STR);
//	//问题：a模式下无法边写边读，只能执行写，为啥？？？？
//
//	fclose(pFile);
//	return 0;
//
//}

