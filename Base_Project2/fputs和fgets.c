//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//
////fputд�룬fgets�����Ķ�
////����д�루�ֶ���\n���Ͷ�ȡ
////ֻ������ַ����ַ���
//int main(void)
//{
//	FILE* pFile = fopen("xie.txt", "r");
//
//	//size_t a;
//	//a=fputs("hello\n", pFile);//�ɹ�����0��ʧ�ܷ���-1
//	//fputs("world\n", pFile);
//
//	//printf("%zu", a);
//
//	
//	
//	char* fp;
//	
//	char str[10] = "0";
//	 char str2[10]="0";
//	 
//	fp=fgets(str, 10, pFile);  //����д��ռ�str���׵�ַ
//	//10Ϊ���Ķ�ȡ��
//	fgets(str2,10,pFile);      //�Զ����ж�ȡ
//
//	printf("%p\n ", fp);
//	printf("%s\n", str2);
//	printf(str);
//
//	fclose(pFile);
//}