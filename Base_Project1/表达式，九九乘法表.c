#include<stdio.h>
void main()
{
	int a;
	//c=(a=2,4,b=a) �����ң�ִ�����ұ߽������2���޶��ż�Ϊ���ʽ�����Ϊĳһȷ��ֵ
	printf("���������ĳɼ�\n");
	scanf_s("%d\n", &a);
	if (a >= 60 && a<=100)                 //����д����60<=a<=100
	{
		printf("���ĳɼ��ϸ�\n");
	}
	else
	{
		printf("���ĳɼ����ϸ�\n");
	}
	/*int a,
		b,
		c=a*b;
	for (a = 1; a <= 9; a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d*%d=%d", b, a, c);
		}
		printf("\n");
	}
}*/

