//#define _CRT_SECURE_NO_WARNINGS     //ȥ������д��ǰ��
//#include<stdio.h>
//#include<string.h>
////���������������ݣ����������ݻ�����
// 
// //������ģʽ���н�βΪ\r\n,�ı�ģʽ�ɶ����Ƶ�\r\nת��Ϊ\n,LinuxϵͳΪ\n,����ı�ģʽ����ֲ�Ը���
//void main(void)
//{
//	size_t a;
//    FILE*pFile=fopen("xie.txt","wb");   //����дֻ�ڴ��ļ�ʱִ��һ�Σ�һ���Գ������  
//
//	char* p = "string";
//	//char str = '\n';
//	char str[3] = "\r\n";                 //������ģʽ��Ҫ\r\n����                                        
//	char* p1 = "hello world\n";
//
//	a = fwrite(p, sizeof(char), strlen(p)+1 , pFile);  //����1Ҳ�����룬�������Ϲ淶������'\0'�ո�
//
//	printf("%zu\n", a);
//
//	fwrite(str, sizeof(char), 3, pFile);
//	fwrite(p1, sizeof(char), strlen(p1) + 1, pFile);
//	//fwrite:ִ�гɹ�������ֵΪд����ֽ�����ִ��ʧ�ܣ�����ֵΪ0�����Ǵ�����
//	a = errno;//������
//	printf("%zu\n", a);
//
//	int b = 65;
//	fwrite(&b, 4, 1, pFile);        //���е��ı������ַ���65��A����ʽд���ı�
//	fclose(pFile);
//}