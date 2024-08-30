//#include<stdio.h>
//
//int main(void)
//{
//	char a[20];
//
//
//	//scanf_s                          //系统自动加'\0'（空格），20-1，输入完后按'\n'（回车）,20-2,实际只能输入18个
//	//scanf_s("%s", a, 19);            //一旦越界，显示空白，原因：系统在过界的字符前面加了'\0'
//	//printf("%s\n", a);			   //只能输入连续字符
//	//scanf_s("%s", a, 19);
//	//printf("%s\n", a);
//	 
//	//get_s:能读空格
//	gets_s( a,19);                     //更加简洁           
//	printf("%s", a);
//
//	char str[30];
//	char ch;
//	printf("请输入字符串：");
//	//gets_s(str,29);                    //gets会将缓冲区中的回车取出来丢掉
//	scanf_s("%s", str, 29);          //'\n'是结束标志，没有被scanf_s读取，留存于缓冲区
//	printf("%s", str);
//	scanf_s("%c", &ch,1);
//	printf("ch = %c\n", ch);
//
//	return 0;
//}