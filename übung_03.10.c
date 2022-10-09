#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//1-100 wie viele 9??

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if(i / 10 == 9)
//			count++;
//
//	}
//	printf("%d\n", count);
//	return 0;
//}



//berechnen 1/1-1/2+1/3-1/4+1/5....+1/99-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += 1.0 / i;
//		}
//		else
//		{
//			sum -= 1.0 / i;
//		}
//		
//	}
//	printf("%f\n", sum);
//
//	return 0;
//}
///// zweite Methode

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		
//		sum += flag * 1.0 / i;
//		flag = -flag;
//		
//
//	}
//	printf("%f\n", sum);
//
//	return 0;
//}




// multipulikation

//int main()
//{
//	//int Intgration = 0;
//	int i = 1;
//	
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			//Intgration = i * j;
//			printf("* %d*%d = %-2d *", i, j, i * j);
//
//		}
//		printf("\n");
//
//	}
//		
//	return 0;
//}




