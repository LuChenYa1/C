//#include<stdio.h>
//const int a = 12;
//void main(void)
//{
//	//存储内容：12,'c',"acv",1.23
//	//'c'之类的本质上就是码值，是数字常量
//	//特点：只读，无法修改，由系统申请和释放，类似栈区
//	//生命周期与系统共存亡，类似静态局部变量，空间不释放，但同级多次声明还是重定义了
//	//好绕啊，不要搞太乱了。。。判断：字符常量能改，地址随之变化，不同级的相同声明地址不变，const全局能改，const局部不能改
//	
//	char* p = "asd";
//	printf("%p\n", p);
//	p = "ass";            
//    printf("%s\n", p);   
//	//立即数存储：将一个字符赋值给字符常量，不需要特意先申请一段空间装着这个字符，是直接用的
//	{
//		char* p = "asd";
//		printf("%p\n", p);   //地址没改，说明空间没释放
//	}
//	
//	//const全局变量存储在字符常量区，不能被改变，const局部变量存储在栈区
//	printf("%d\n", a);//强制改变了const 全局a的值后，无法显示，出现问题，所以还是不能改
//	/*int* p1 = (int*)&a;
//	*p1 = 23;
//	printf("%d", a);*/
//
//	//代码区：程序编译而成的二进制代码，由系统管理，无法人为操作
//}