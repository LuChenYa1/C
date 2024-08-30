#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[] = "hello";            //_s改变了字符串本身的函数，在中间加上目标空间限制（字节数）
	char* p1 = a;
	char b[] = "helqd";
	size_t m= strlen(p1);          //测量字节数，不算'\o'
	printf("%zd\n", m);
	int n = strcmp(a, b);          //按顺序从左到右，一位对一位比较;a>b,1;a<b,-1;a==b,0
	printf("%d\n", n);
	int o = strncmp(a, b, 3);      //指定位数比较，字符对应码值，这里是比较前三位
	printf("%d\n", o);

	return 0;
}
