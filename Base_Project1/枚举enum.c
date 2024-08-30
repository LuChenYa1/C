//#include<stdio.h>
//
//enum color {red,yellow,blue};  //red==0;yellow==1;blue==2;数字是常量，不占用空间，起了名字也不占用空间
//enum {a,b=5,c,d};              //输出0，5，6，7
//enum {e=5,f=89,g=34,h=25};     //一个数字可以有多个名字，但一个名字只能对应一个数字
//
//enum color {}en1;
//en1 = 20;          //enum color==int
//
////形式上类似结构体和联合模型，但本质不同，枚举占了四个字节，相当于int
//int main(void)
//{
//	printf("%d", red);
//	return 0;
//}