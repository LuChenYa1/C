//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//
//struct stu               //全局结构体
//{
//	char name[20];
//	unsigned int age;
//	double height;
//}stu1，stu2;              //下辖变量（可有可无）
//
//int main(void)
//{
//	struct stu stu1 = { "钟离",6000,1.81 };                   //全局变量，不初始化默认零
//	struct stu stu2 = { "达达利亚",20,1.89 };                 //赋值所有对象
//	struct stu stu3 = {.height=1.90};                        //部分初始化
//	//取成员运算符优先级最高，->和.
//	printf("%s,%lf\n", stu2.name, stu2.height);              //实例加名字和点取成员
//
//	struct stu* p1 = &stu1;
//	printf("%s,%lf,%d\n", p1->name, (&stu1)->height, (*p1).age);//指针箭头取地址
//
//	struct stu* p2 = (struct stu*)malloc(sizeof(struct stu));
//
//	if (p2 == NULL)                                          //判断空指针
//	{
//		return NULL;
//	}
//
//	(*p2).height = 1.6;                                     //利用指针赋值的两种方法
//	p2->age = 2000;                                         //箭头和.优先级很高
//	strcpy(p2->name, "魈");                                 //只能用strcpy赋值字符串
//    free(p2);                                               //释放堆区指针
//
//	stu1 = (struct stu){ "空",1000000,1.7 };                //复合文字结构赋值
//	printf("%s", stu1.name);
//
//	return 0;
//}