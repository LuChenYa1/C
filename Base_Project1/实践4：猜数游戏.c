//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main(void)
//{
//	int right = 0, guss = -1, count = 0, con = 1;
//	srand((unsigned)time(NULL));                    //���ϵͳʱ��   
//	/////////////////////////////////////////////////srand((unsigned)time(NULL));����ʱ������
//	/////////////////////////////////////////////////right = rand() % 100 + 10;��������
//	while (con)
//	{
//		right = rand() % 100 + 10;        //������������֤����100����
//		printf("������һ��10~100������\n");
//		while (right != guss)
//		{
//			count++;
//			scanf_s("%d", &guss);
//			if (right > guss)
//			{
//				printf("С�ˣ�����������\n");
//			}
//			else if (right < guss)
//			{
//				printf("���ˣ�����������\n");
//			}
//			else
//			{
//				printf("�¶��ˣ�����%d,���ܹ�����%d��\n", right, count);
//				break;
//			}
//		}
//		printf("�Ƿ������Ϸ��0������1����\n");
//		scanf_s("%d",&con );
//	}
//	printf("ף��ʹ�����");
//		return 0;
//}