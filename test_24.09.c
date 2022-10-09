#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//嵌套

//void test3()
//{
//	printf("hehe\n");
//}
//void test2()
//{
//	int i = 0;
//	for (i = 1; i < 4; i++)
//	{
//		test3();
//	}
//
//}
//int main()
//{
//	test2();
//	return 0;
//}



//链式访问
//#include<string.h>
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	//链式访问
//	printf("%d\n", strlen("abc"));
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}



////函数声明
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}




// 函数的递归
//

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//	
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}



//求字符串长度
//#include <string.h>
//int My_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	// 自己写出strlen
//	printf("%d\n", My_strlen(arr));
//	return 0;
//}
// 
//递归法
//int My_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + My_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	// 自己写出strlen
//	printf("%d\n", My_strlen(arr));
//	return 0;
//}



//迭代与递归
//阶乘
//迭代法
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//迭代法
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	
//	printf("%d\n", ret);
//	return 0;
//
//}


//第n个斐波那契数
// 1 1 2 3 5 8 13 21 33.....
//迭代法
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//循环法
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
// 青蛙台阶



