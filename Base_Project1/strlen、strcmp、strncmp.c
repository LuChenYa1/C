#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[] = "hello";            //_s�ı����ַ�������ĺ��������м����Ŀ��ռ����ƣ��ֽ�����
	char* p1 = a;
	char b[] = "helqd";
	size_t m= strlen(p1);          //�����ֽ���������'\o'
	printf("%zd\n", m);
	int n = strcmp(a, b);          //��˳������ң�һλ��һλ�Ƚ�;a>b,1;a<b,-1;a==b,0
	printf("%d\n", n);
	int o = strncmp(a, b, 3);      //ָ��λ���Ƚϣ��ַ���Ӧ��ֵ�������ǱȽ�ǰ��λ
	printf("%d\n", o);

	return 0;
}
