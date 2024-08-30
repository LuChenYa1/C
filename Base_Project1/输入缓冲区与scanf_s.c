//#include<stdio.h>
//
//int main(void)
//{
//	//int a, b, c, d;
//	//scanf_s("%d", &a);
//	//scanf_s("%d", &b);                 //在数据足够时，多个scanf只需一个回车
//	//scanf_s("%d", &c);
//	//
//	//printf("%d,%d,%d\n", a, b, c);     //原理：在控制台上输入数据，立刻存入输入缓冲区，
//	//
//	//scanf_s("%d", &d);                 //按下回车，scanf_s将缓冲区数据存入对应变量
//	//printf("%d,%d,%d,%d", a, b, c, d); //缓冲区有数据则直接读取并对应，无数据会跳弹窗让你输入数据
//	//如果上一次输入数据中有多余的内容，那么它会对后面的scanf_s造成影响，所以要清空输入缓存区，或者给前面的数据都找个家
//
//
//
//	//char m, n;
//	//scanf_s("%c", &m,1);                          //C4473：没有传递足够多的参数；解决：加上sizeof（变量名）;
//	////char x= getchar();                          //声明一个变量装着返回值
//	////char q;
//	////while ((q = getchar()) != '\n' && m != EOF);//清空输入缓存区，
//	//setbuf(stdin, NULL);						  //getchar()是从输入缓冲区中读取一个字符
//	//scanf_s("%c", &n,1);						  //一次性输入两个scanf所需数据再按回车，因为空格和回车都是字符，会被读取，容易出错
//	//printf("%c,%c\n", m, n);					  //还是报C4477错,原因：64位编译器的scanf_s只接受long unsigned int的size_t
//	//return 0;
//
//	/*float num = 3.1415926f;
//	printf("%f", num);*/
//	//putchar('h' );
//	//int i = 1.7f;//有灵活性，但会报错，会数据丢失
//	/*int a[] = {1, 2, 3, 4};
//	char b[10] = {12, 'g',"asd"};
//	printf("%c", b[3]);*/
//	int a[5] = {1, 2, 3, 4, 5};
//	
//}