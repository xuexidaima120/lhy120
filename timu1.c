#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int  main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));//8,10,12,14,16
//	}
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		printf("%d\n", i);
//	}
//	return 0;
// }

//int main()
//{
//	int m = 24;
//	int n = 12;
//	int r = 0;
//	scanf("%d%d", &m, &n);//最大公因数
//	while (r=m%n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2100;year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除是闰年
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//
//	}printf("\ncount=%d\n", count);
//	return 0;
//}

//打印素数
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i=100;i<=200;i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0) 
//			{
//				break;
//			}
//		}
//		if (j == i) {
//			count++;
//			printf("%d ", i);	
//		}
//		
//	}
//	printf("\ncount=%d\n", count);//数有多少个素数
//	return 0;
//}
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i=101;i<=200;i+=2)
	{
		//判断i是否为素数
		//素数判断的规则
		//1.试除法
		//产生2->i-1
		int j = 0;
		//sqrt-开平方的数学库函数-<math.h>
		for (j = 2; j <=sqrt(i); j++)
		{
			if (i%j == 0) 
			{
				break;
			}
		}
		if (j >sqrt(i)) {
			count++;
			printf("%d ", i);	
		}
		
	}
	printf("\ncount=%d\n", count);//数有多少个素数
	return 0;
}