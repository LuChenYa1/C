#include<stdio.h>

union Un
{
	char a;
	short b;
	int d[5];     //5>字宽4，尾部补齐后大小是8
	int c;
}un1;
//联合类型，所有成员共用一个空间,覆盖式赋值
//想初始化哪个成员，就把那个成员放前边
//初始化部分，其他部分默认为零
int main(void)
{
	union Un un1 = { .c=34 };
	un1.c = 321;     
	//一般赋值类型占字节最大的变量，一次性赋值所有成员，321=256+65，正好使char输出A
	printf("%p , %p , %p\n", &un1.a,&un1.b, &un1.c);        
	printf("a=%c\nb=%hd\nc=%d\n", un1.a,un1.b,  un1.c); 
	//一个字节最大可装255,1111 1111
	//256是 0001 0000 0000，char型变量能装的只有0000 0000
	printf("%zd", sizeof(un1));
	//联合类型不涉及成员补齐，但有结尾补齐
}