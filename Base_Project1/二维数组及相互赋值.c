#include<stdio.h>
#include<string.h>                                   // <memory.h>

void main(void)
{
	/*int a[3][2] = { {1,2},{3,4},{5,6} };
	int a1[3][2] = { {1,2},
					{3,4},
					{5,6} };
	int a2[3][2] = { {1,2} ,{3,4} };
	int a3[3][2] = {{1},{2,3}};
	int a4[3][2] = { 1,2,3,4 };
	int a5[][2] = { 1,2,3 };
  int a6[0][4];二维数组的行可以不写，甚至为0
	printf("%d", a5[1][1]);
	 /
	for (int b = 0; b <= 2; b++)
	{
		for (int c = 0; c <= 1; c++)
		{
				printf("%d  ", a4[b][c]);            
		}
	}*/
	 
	//int d[3][2] = { a };                              //a==&a[0],a代表地址，是一个值

	int d[5] ={1,3,5,7,9};
	int e[4];
	for (int i = 0; i < 3; i++)
	{
		/*int e[3];
		e[i] = d[i+2];
		printf("%d  ", e[i]);
	}*/
	                                                    printf("%d", sizeof(int));
	memcpy(&e[1], &d[2], 8);                            //4字节一位
	printf("%d,%d,%d ", e[0],e[1],e[2]);
}