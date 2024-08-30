#include<stdio.h>

int main(void)
{
	char a ;        
	while (1)
	{                                  
		//scanf_s("%d,%c,%d",&a,&b,1,&c);      //scanf_s中%c还需要一个参数，表示长度
		scanf_s("%c", &a,1);                 //C6064：缺少参数，解决：加长度
		if (a >= 65 && a <= 90)              //大写字母
		{
			printf("%c", a + 32);
		}
		else if (a >= 97 && a <= 122)        //小写字母
		{
			printf("%c", a - 32);
		}
		else if(a == '\n')
		{
			break;
		}

	}
	return 0;
}