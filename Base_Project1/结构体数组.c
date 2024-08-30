//#include<stdio.h>
//
//struct stu
//{
//	char name[20];
//	int age;
//}stu1;
//int main(void)
//{
//	//一个大结构体里有3个小结构体
//	struct stu stu1[3] = { {"达达利亚",20},{"摩拉克斯"},{"阿贾克斯",20} };
//	//内部括号一般要加，防止结构混乱，已赋值其余元素，未赋值默认0
//	printf("%s,%d", stu1[0].name, stu1[2].age);
//	stu1[1] = (struct stu){"摩拉克斯",6000};      
//	//对大结构体里的小结构体重新赋值
//
//	return 0;
//}