//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	short a = 12;                                       //两字节，有符号，-2……15~2……15-1；-32768~32767
//  printf("short:%zd\n",sizeof(short));
//	signed short b;                                     //无符号，0~2……16-1；0~65535
//	b = -16;
//	printf("%hu\n", b);                                 //short的输入格式符为%hd或%hu，一般%d简写
//	long l;                                             //长整型4字节
//	l= 1555555555;                                      //ld
//	printf("%ld\n",l);
//	printf("%zd\n", sizeof(l));
//
//	long long e = 155559666666;                         //8字节，64位,lld
//	getchar();
//	printf("%lld\n",e);
//
//
//
//	//while (1);                                          //getchar()
//	return 0;
//}