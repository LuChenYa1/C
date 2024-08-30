#include <stdio.h>
int fun()
{
	return 1.23;
}
void main(void)
{
	int a, b;
	scanf_s("%d,%d",&a,&b);
	printf("%d",fun());
}
