//#include<stdio.h>
//
//int main(void)
//{
//	char a[20];
//
//
//	//scanf_s                          //ϵͳ�Զ���'\0'���ո񣩣�20-1���������'\n'���س���,20-2,ʵ��ֻ������18��
//	//scanf_s("%s", a, 19);            //һ��Խ�磬��ʾ�հף�ԭ��ϵͳ�ڹ�����ַ�ǰ�����'\0'
//	//printf("%s\n", a);			   //ֻ�����������ַ�
//	//scanf_s("%s", a, 19);
//	//printf("%s\n", a);
//	 
//	//get_s:�ܶ��ո�
//	gets_s( a,19);                     //���Ӽ��           
//	printf("%s", a);
//
//	char str[30];
//	char ch;
//	printf("�������ַ�����");
//	//gets_s(str,29);                    //gets�Ὣ�������еĻس�ȡ��������
//	scanf_s("%s", str, 29);          //'\n'�ǽ�����־��û�б�scanf_s��ȡ�������ڻ�����
//	printf("%s", str);
//	scanf_s("%c", &ch,1);
//	printf("ch = %c\n", ch);
//
//	return 0;
//}