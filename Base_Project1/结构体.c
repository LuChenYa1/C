//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//
//struct stu               //ȫ�ֽṹ��
//{
//	char name[20];
//	unsigned int age;
//	double height;
//}stu1��stu2;              //��Ͻ���������п��ޣ�
//
//int main(void)
//{
//	struct stu stu1 = { "����",6000,1.81 };                   //ȫ�ֱ���������ʼ��Ĭ����
//	struct stu stu2 = { "�������",20,1.89 };                 //��ֵ���ж���
//	struct stu stu3 = {.height=1.90};                        //���ֳ�ʼ��
//	//ȡ��Ա��������ȼ���ߣ�->��.
//	printf("%s,%lf\n", stu2.name, stu2.height);              //ʵ�������ֺ͵�ȡ��Ա
//
//	struct stu* p1 = &stu1;
//	printf("%s,%lf,%d\n", p1->name, (&stu1)->height, (*p1).age);//ָ���ͷȡ��ַ
//
//	struct stu* p2 = (struct stu*)malloc(sizeof(struct stu));
//
//	if (p2 == NULL)                                          //�жϿ�ָ��
//	{
//		return NULL;
//	}
//
//	(*p2).height = 1.6;                                     //����ָ�븳ֵ�����ַ���
//	p2->age = 2000;                                         //��ͷ��.���ȼ��ܸ�
//	strcpy(p2->name, "��");                                 //ֻ����strcpy��ֵ�ַ���
//    free(p2);                                               //�ͷŶ���ָ��
//
//	stu1 = (struct stu){ "��",1000000,1.7 };                //�������ֽṹ��ֵ
//	printf("%s", stu1.name);
//
//	return 0;
//}