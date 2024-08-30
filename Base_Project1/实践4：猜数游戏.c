//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main(void)
//{
//	int right = 0, guss = -1, count = 0, con = 1;
//	srand((unsigned)time(NULL));                    //获得系统时间   
//	/////////////////////////////////////////////////srand((unsigned)time(NULL));播撒时间种子
//	/////////////////////////////////////////////////right = rand() % 100 + 10;获得随机数
//	while (con)
//	{
//		right = rand() % 100 + 10;        //获得随机数，保证其在100以内
//		printf("请输入一个10~100的整数\n");
//		while (right != guss)
//		{
//			count++;
//			scanf_s("%d", &guss);
//			if (right > guss)
//			{
//				printf("小了，请重新输入\n");
//			}
//			else if (right < guss)
//			{
//				printf("大了，请重新输入\n");
//			}
//			else
//			{
//				printf("猜对了，答案是%d,您总共猜了%d次\n", right, count);
//				break;
//			}
//		}
//		printf("是否继续游戏？0结束，1继续\n");
//		scanf_s("%d",&con );
//	}
//	printf("祝您使用愉快");
//		return 0;
//}