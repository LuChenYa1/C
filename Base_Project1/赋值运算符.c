#include<stdio.h>
void main(void)
{
    int a=1;                                              //��1��ֵ������a���ǵȺţ�==�ǵȺ�
    int b = 2;
    int c;
    c = a + b + 1;
    printf("%d\n", c);
    printf("%d\n%d\n", 2+(a + b) * (c + b),((3-a)*c)+5*b);//���ܻ�����㣬����3.1+2
    printf("%d\n",2345 / 10);                             //ȡ������234
    printf("%d\n", 2345 / 10 / 20);                       //11
    printf("%d\n", 2345 / 100 % 10);                      //ȡ�࣬3
    printf("%f", 1234.0/ 10);
}