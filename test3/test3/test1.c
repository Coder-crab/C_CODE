#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//
//	int a = -2 ;
//	printf("%d\n", ~a);
//	//按位取反
//	return 0;
//
//}
 
//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++
//	return 0;
//}

//static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）；
//static修饰全局变量，使得整个全局变量只能在自己的源文件内部可以使用，其他源文件不能使用；
//static修饰函数，使得函数只能在自己所在的源文件内部使用，不能在其他源文件内部中使用
// 本质上 static是将函数的外部链接变成了内部链接属性（和全局变量一样）
//extern int add(int x, int y);
//
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//
//
//	return 0;
//
//}

#define add(x,y) (x+y) //这就是宏；

int main()
{
	printf("%d\n",3*add(2,5))；

	return 0;

}