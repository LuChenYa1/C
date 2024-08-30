#include <stdio.h>


double fun(int n)
{
	int  i;
	double s = 0;
	for(i = 1; i <= n; i++)
	{
		s = s + 1.0 / (3 * i - 2);
	}
	return s;
}
int main(void)
{ 
	//unsigned char a[][3];
	int w[3][5] = {1, 2, 3, 4};
	printf("%d", *((w + 1)[4]));
}
