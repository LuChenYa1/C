//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main(void)
//{
//	//  %+字母都是转换说明符，例如%d,%hu,%f
//	//  \+数字，最大377，+0数字，最大77，都是八进制，不能有八，\378和\0779和\078等等都是不存在的
//	//  \+x数字，最大ff，\xffa错误，超过了最大范围，\xffw正确，分为\xff和'w'
//
//	printf("qweer\rssd\n");                 //  \r回撤
//	printf("\tqwernvdh\n");                 //  \t制表符，空八格
//	printf("%zd", strlen("\t"));            //  注意是双引号，单字符
//	//printf("&zd", strlen("\w"));			//  不可识别的字符转义序列
//
//	printf("\\,\',\"");                     //加反斜杠输出/和‘和“
//
//	return 0;
//}