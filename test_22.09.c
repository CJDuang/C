#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);
//	printf("%s ", arr1);
//	return 0;
//}-  




//int get_max(int x, int y)
//{
//	int max = 0;
//	if (x > y)
//		max = x;
//	else
//		max = y;
//	return max;
//}
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}




//void Swap(int* pa, int* pb)
//{
//	int pc = 0;
//	pc = *pa;
//	*pa = *pb;
//	*pb = pc;
//}
//
//int main()
//{
//	int a = 10;
//	
//	int b = 20;
//
//	printf("Vor: a=%d b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("Nach: a=%d b=%d\n", a, b);
//	return 0;
//}





//判断是否为素数
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//			//break;	
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if(is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}



//判断是否为闰年
//int is_leap_year(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0)
//	{
//		return 1;
//	}
//	else if (n % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y < 2001; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount = %d ", count);
//	return 0;
//}


//二分查找

//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key,sz);
//	if (-1 == ret)
//	{
//		printf("nicht gefunden\n");
//	}
//	else
//	{
//		printf("gefunden Fussnote ist: %d\n", ret);
//	}
//	return 0;
//}









//num次数增加
// 
//void Add(int* p)
//{
//	(*p)++;
//}


//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}