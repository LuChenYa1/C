#include<stdio.h>
 
int main(void)
{
	char str[5] = "����";                                   //һ�����������ֽڣ�������'\0',2^16==65536,������ֵ��Χ0~65535
	printf("%s\n", str);
	printf("%c%c\n", str[0], str[1]);

	printf("%x,%x\n", str[0], str[1]);                     //b0fc��������ֵ
	char temp;
	temp = str[0];
	str[0] = str[1];                                       //����λ�ã�ǿת���ͣ��ɹ���ӡ��ֵ
	str[1] = temp;
	printf("%x��%hu",*(short*)str, * (short*)str);         //fcbo  ��С�ˣ��Ӹ�λ����λ��ȡ��ֵ����ַ��,����ȷ�����Խ������ֽ����ݵ���

	return 0;
}