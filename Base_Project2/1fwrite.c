//#define _CRT_SECURE_NO_WARNINGS     //去除警告写在前面
//#include<stdio.h>
//#include<string.h>
////适用所有类型数据，但数字数据会乱码
// 
// //二进制模式下行结尾为\r\n,文本模式由二进制的\r\n转换为\n,Linux系统为\n,因此文本模式的移植性更好
//void main(void)
//{
//	size_t a;
//    FILE*pFile=fopen("xie.txt","wb");   //擦除写只在打开文件时执行一次，一次性彻底清空  
//
//	char* p = "string";
//	//char str = '\n';
//	char str[3] = "\r\n";                 //二进制模式需要\r\n换行                                        
//	char* p1 = "hello world\n";
//
//	a = fwrite(p, sizeof(char), strlen(p)+1 , pFile);  //不加1也能输入，但不符合规范，少了'\0'空格
//
//	printf("%zu\n", a);
//
//	fwrite(str, sizeof(char), 3, pFile);
//	fwrite(p1, sizeof(char), strlen(p1) + 1, pFile);
//	//fwrite:执行成功，返回值为写入的字节数；执行失败，返回值为0，不是错误码
//	a = errno;//错误码
//	printf("%zu\n", a);
//
//	int b = 65;
//	fwrite(&b, 4, 1, pFile);        //所有的文本都是字符，65以A的形式写入文本
//	fclose(pFile);
//}