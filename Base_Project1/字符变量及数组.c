//#include<stdio.h>
//int main(void)
//{
//	printf("A");					  //单个字符，不能是“AB”
//	printf("%c", 'A'); 
//	putchar('A');
//
//    //49=='1'!=1   码值、字符、数字
// 
//	char c1, c2;					  //一字节
//	c1 = 'a';						  //asc2码 0~255，大于255的码对应汉字字符
//	c2 = 67;
//	putchar(c1);					  //putchar实参只有一个
//	printf("\n%c,%c\n%d,%d\n", c1, c2, c1, c2);
//
//	char str[5] = { 'a','b' };
//	char* p = str;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);          //规则和普通数组差不多
//	}
//	return 0;
//}