#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//
//	int a = -2 ;
//	printf("%d\n", ~a);
//	//��λȡ��
//	return 0;
//
//}
 
//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++
//	return 0;
//}

//static���ξֲ��������ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ洢���ͣ���
//static����ȫ�ֱ�����ʹ������ȫ�ֱ���ֻ�����Լ���Դ�ļ��ڲ�����ʹ�ã�����Դ�ļ�����ʹ�ã�
//static���κ�����ʹ�ú���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����������Դ�ļ��ڲ���ʹ��
// ������ static�ǽ��������ⲿ���ӱ�����ڲ��������ԣ���ȫ�ֱ���һ����
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

#define add(x,y) (x+y) //����Ǻꣻ

int main()
{
	printf("%d\n",3*add(2,5))��

	return 0;

}