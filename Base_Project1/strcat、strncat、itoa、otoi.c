#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char str[40] = "hello";
	strcat(str, "qweqwe");					  //���������ַ���
	printf("%s\n", str);
	strcat_s(str, 20, "qweqw");				  //���ֶ����룬'\0'�������ڣ���20����19
	printf("%s\n", str);

	strncat(str, "f ghjkl", 2);				  //��2������ֻ����Դ����λ�ַ����ո�Ҳ���ַ�
	printf("%s\n", str);
	strncat_s(str, 40, "vbnm", 3);			  //��40�����ƿռ䣬����Ŀ���ַ�������
	printf("%s\n", str);

	char str1[40]="0";
 	_itoa(2345, str1, 10);                    //����ת��Ϊ�ַ���װ���ַ����飬�ü�����ת��
	printf("%s\n", str1);

	int m = atoi("12345");                    //�ַ�ת��Ϊ���Σ�����ֵΪ���ν��
	printf("%d\n", m);

	sprintf(str1, "%d%c%.1f", 15, 'a', 13.13);//""��ȫΪ�ַ�����������
	for (int i = 0; i < 40; i++)              //����13.13תΪ'1','3','1','3'
	{
		printf("%c \n", str1[i]);
	}
	return 0;
}