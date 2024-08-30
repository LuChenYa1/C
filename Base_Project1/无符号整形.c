//#include<stdio.h>
//int main(void)
//{
//	unsigned int a =4294967296;                            //范围0~4294967295，0~2……32-1
//	printf("%u\n", a);                                     //好奇怪，无符号整形下不能打印-2147483648~-4294967295，%d有符号，%u无符号
//	printf("%zu\n", sizeof(unsigned int ));                //int后无a，测大小时，格式符用%zu,%u可用，但有警示
//  unsigned short a=12;
//  printf("%hu", a);
//	return 0;
//}