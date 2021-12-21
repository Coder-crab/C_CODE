#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//声明一下变量 
//extern int hh;
//int main()
//{
//	printf("%d\n",hh);
//	return 0;
//
//}

//int main() 
//{
//	const int num = 10;
//	num = 20;
//	printf("num=%d\n", num);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("你要好好学习吗？");
//	scanf("%d", &a);
//	if (a == 1)
//		printf("拿offer\n");
//	else
//		printf("卖红薯\n");
//	/*char arr[] = "hello";*/
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("写代码：第%d行\n", line);
//		line++;
//	}
//	if (line == 20000)
//		printf("拿到好 offer");
//	return 0;
//}

//
//int sum(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int s = sum(a, b);
//	printf("%d\n", s);
//	return 0;
//}

int main()
{
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	while (i<10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	
	return 0;
}