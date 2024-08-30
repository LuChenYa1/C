#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char str[40] = "hello";
	strcat(str, "qweqwe");					  //连接两个字符串
	printf("%s\n", str);
	strcat_s(str, 20, "qweqw");				  //非手动输入，'\0'计算在内，是20不是19
	printf("%s\n", str);

	strncat(str, "f ghjkl", 2);				  //“2”代表只连接源的两位字符，空格也是字符
	printf("%s\n", str);
	strncat_s(str, 40, "vbnm", 3);			  //“40”限制空间，放在目标字符串后面
	printf("%s\n", str);

	char str1[40]="0";
 	_itoa(2345, str1, 10);                    //整形转变为字符，装载字符数组，用几进制转变
	printf("%s\n", str1);

	int m = atoi("12345");                    //字符转变为整形，返回值为整形结果
	printf("%d\n", m);

	sprintf(str1, "%d%c%.1f", 15, 'a', 13.13);//""内全为字符，包括逗号
	for (int i = 0; i < 40; i++)              //数字13.13转为'1','3','1','3'
	{
		printf("%c \n", str1[i]);
	}
	return 0;
}