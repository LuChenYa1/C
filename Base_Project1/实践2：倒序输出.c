#include<stdio.h>
void tran(char* p1);
int main(void)
{
	char str1[20] = { 0 };
	scanf_s("%s", str1,20);
	tran(str1);
	return 0;
}
void tran(char*p1)
{
	/* for (int i = 19; i >= 0; i--)            倒序打印
	{
		printf("%c", p1[i]);
	} */
	int len = 0;                               //对称交换位置
	for (len = 0; p1[len] != '\0'; len++);     //测量字符串实际长度
	len--;                                     //最后一位是空格，与前面交换会让字符串清零
	for (int i = 0; i < len / 2; i++)
	{
		char temp = '0';
		temp = p1[i];
		p1[i] = p1[len - i];
		p1[len - i] = temp;
	}
	printf("%s", p1);
}