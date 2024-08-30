#include<stdio.h>
void main(void)
{
    int a=1;                                              //将1赋值给变量a，非等号，==是等号
    int b = 2;
    int c;
    c = a + b + 1;
    printf("%d\n", c);
    printf("%d\n%d\n", 2+(a + b) * (c + b),((3-a)*c)+5*b);//不能混合运算，例如3.1+2
    printf("%d\n",2345 / 10);                             //取整，得234
    printf("%d\n", 2345 / 10 / 20);                       //11
    printf("%d\n", 2345 / 100 % 10);                      //取余，3
    printf("%f", 1234.0/ 10);
}