//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////fwrite�����ƾ�����д�ṹ��
//struct stu
//{
//	int num;
//	char b[10];
//	double height;
//	short age;
//};
//
//int main(void)
//{
//	struct stu stu1 = { 123,"asdfghj",1.55,19 };
//	struct stu stu2;
//	FILE* pFile = fopen("xie.txt", "r");  
//	//�м�ִ��д���ļ��Ͷ��ļ�����ʱҪ�л�ģʽ
//    //�ڴ���ģʽ��ִ�к������ó�������ٴ�����ȷģʽ�����л���ִ�����
//	//��ʱ��Ҫ���²����ı����ݣ�����д�룬�ٴ�����
//	//fwrite(&stu1, sizeof(stu1), 1, pFile);
//	//fwrite("\n", 1, 1, pFile);
//
//	fread(&stu2, sizeof(stu2), 1, pFile);
//	//���ڽṹ����ڴ�洢ģʽ��
//	//�Լ��ļ��Ὣ��������ת�����ַ�������
//	//�洢���ַ�ʱ���������
//	//����д���Ӧԭ���ͱ���ʱΪ��ȷֵ��������
//	printf("%hd", stu2.age );
//	fclose(pFile);
//}