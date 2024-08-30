//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////fwrite的优势就是能写结构体
//struct stu
//{
//	int num;
//	char b[10];
//	double height;
//	short age;
//};
//
//int main(void)
//{
//	struct stu stu1 = { 123,"asdfghj",1.55,19 };
//	struct stu stu2;
//	FILE* pFile = fopen("xie.txt", "r");  
//	//切记执行写入文件和读文件函数时要切换模式
//    //在错误模式下执行函数会让程序出错，再次在正确模式下运行会出现错误结果
//	//此时需要重新擦除文本内容，重新写入，再次运行
//	//fwrite(&stu1, sizeof(stu1), 1, pFile);
//	//fwrite("\n", 1, 1, pFile);
//
//	fread(&stu2, sizeof(stu2), 1, pFile);
//	//由于结构体的内存存储模式，
//	//以及文件会将所有数据转换成字符的特性
//	//存储非字符时会出现乱码
//	//但其写入对应原类型变量时为正确值，非乱码
//	printf("%hd", stu2.age );
//	fclose(pFile);
//}