#include<stdio.h>

int main(void)
{
	char a ;        
	while (1)
	{                                  
		//scanf_s("%d,%c,%d",&a,&b,1,&c);      //scanf_s��%c����Ҫһ����������ʾ����
		scanf_s("%c", &a,1);                 //C6064��ȱ�ٲ�����������ӳ���
		if (a >= 65 && a <= 90)              //��д��ĸ
		{
			printf("%c", a + 32);
		}
		else if (a >= 97 && a <= 122)        //Сд��ĸ
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