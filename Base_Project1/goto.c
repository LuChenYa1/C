//#include<stdio.h>
//
//void main(void)
//{
//	int a, b,d;
//	for (a = 0; a <= 2; a++)
//	{
//		for (b = 0; b <=2; b++)
//		{
//			for (d = 0; d <= 2; d++)
//			{
//				printf("����ѭ��\n");
//				if (d ==1)
//				{
//					goto step;
//				}
//			}
//		}
//	}
//	step:
//	;                                     //����Ҫ����䣬�����Ҳ��
//	/////////////////////////////////////////////////////////////////
//	for (a = 0; a <= 2; a++)
//	{
//		for (b = 0; b <= 2; b++)
//		{
//			for ( d = 0; d <= 2; d++)
//			{
//				printf("����ѭ��\n");
//				if (d == 1)
//				{
//					break;
//				}
//			}
//			if (d == 1)                       //��������������棬ʹ��������ѭ����ʶ
//			{
//				break;
//			}
//		}
//		if (d == 1)
//		{
//			break;
//		}
//	}
//	step1:
//	printf("����ѭ��");                       //goto��ʹ������ң���������Ƕ��ѭ����������
//	goto step1;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a, b, c;
//	scanf_s("%lf,%lf,%lf",&a,&b,&c);
//	double p = 1.0 / (a * b * c);
//	double sum = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("sum=%lf", sum);
//}
