//#include<stdio.h>
//void main()
//{
//	int m, n, i, s = 0;
//	for (n = 100; n < 1000; n++)
//	{
//		m = n % 10 * 100 + n / 10 % 10 * 10 + n / 100;
//		if (n >= m)continue;
//		for (i = 2; i <= n; i++)
//		{
//			if (n % i == 0)break;
//		}
//		if (n != i)continue;
//		for (i = 2; i <= m; i++)
//		{
//			if (m % i == 0)break;
//		}
//		if (m != i)continue;
//		else
//		{
//			printf("%10d,%10d\n", n, m);
//			s++;
//		}
//	}
//	printf("%d\n", s);
//}
//
// 
//void main()
//{
//	int m, n, t, i, c = 0;
//	scanf_s("%d,%d", &m, &n);
//	if (m > n)
//	{
//		t = m;
//		m = n;
//		n = t;
//	}
//	for (; m <= n; m++)
//	{
//		for (i = 2; i <= m; i++)
//		{
//			if (m % i == 0)break;
//		}
//		if (m == i)
//		{
//			printf("%8d", m);
//			c++;
//			if (c % 6 == 0)printf("\n");
//		}
//	}
//}

//void main()
//{
	/*int x, y, z;
	for (x = 0; x <= 20; x++)
	{
		for (y = 0; y <= 33; y++)
		{
			z = 100 - x - y;
			if (15 * x + 9 * y + z == 300)
			{
				printf("%d %d %d\n", x, y, z);
			}
		}
	}*/
	//printf("%lf", 3.1415926 *60/ 180);
//}