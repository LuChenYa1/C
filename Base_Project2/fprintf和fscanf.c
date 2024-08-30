//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
////适用于数字和字符类型数据，不会乱码
//int main(void)
//{
//	FILE* pFile = fopen("xie.txt","r");
//	//fprintf(pFile, "%d,%s ,%4.3lf", 12, "asd", 1.56);
//	////写入字符串时，转换说明符后面加个空格，以便读取字符串时及时停止，防止错误读取非字符
//
//	int a;
//	char b[20] = { 0 };
//	double c=0.0;
//	size_t d=fscanf_s (pFile, "%d,%s ，%lf", &a,b,4, &c);//问题：浮点型数据有误，赋值不正确
//	printf("%d,%s,%lf", a, b, c);
//
//	fclose(pFile);
//
//	return 0;
//}