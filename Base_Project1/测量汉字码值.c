#include<stdio.h>
 
int main(void)
{
	char str[5] = "包东";                                   //一个汉字两个字节，加最后的'\0',2^16==65536,汉字码值范围0~65535
	printf("%s\n", str);
	printf("%c%c\n", str[0], str[1]);

	printf("%x,%x\n", str[0], str[1]);                     //b0fc是真正码值
	char temp;
	temp = str[0];
	str[0] = str[1];                                       //调换位置，强转类型，成功打印码值
	str[1] = temp;
	printf("%x，%hu",*(short*)str, * (short*)str);         //fcbo  大小端，从高位到低位读取码值（地址）,不正确，所以将两个字节内容调换

	return 0;
}