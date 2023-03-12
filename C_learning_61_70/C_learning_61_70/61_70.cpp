#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
//第七十题
//int length(char* p)
//{
//	int n = 0;
//	while (*p != '\0')
//	{
//		n++;
//		p++;
//	}
//	return n;
//}
//int main()
//{
//	int len;
//	char str[20];
//	printf("Please input a string:\n");
//	scanf("%s",str);
//	len = length(str);
//	printf("the string has %d characters.",len);
//	return 0;
//}

//第六十九题
//int main()
//{
//	int n,i,k=0;
//	int flag = 1;
//	printf("Please input n:");
//	scanf("%d",&n);
//	int a[50] = {0};
//	k = n;
//		for (i = 1; i <= n; i++)
//		{
//			a[i] = i;
//		}
//		while (k > 2)
//		{
//			k = 0;
//			for (int j=1; j <= n; j++)
//			{
//				if (a[j] != 0)
//					k++;
//				if (k % 3 == 0)
//					a[j] = 0;
//			}
//		}
//	for (i = 1; i <= n; i++)
//	{
//		if(a[i]!=0)
//			printf("\nthe number is %d",a[i]);
//	}
//	return 0;
//}


//第六十八题
//int main()
//{
//	int a[50];
//	int n,m;
//	printf("the total number is:");
//	scanf("%d",&n);
//	printf("back m:");
//	scanf("%d",&m);
//	printf("Please input some numbers:");
//	for (int i = 0; i < n; i++)
//		scanf("%d",&a[i]);
//	for (int i = n - m; i <= n - 1; i++)
//		printf("%d ",a[i]);
//	for(int i=0;i<n-m;i++)
//		printf("%d ",a[i]);
//	return 0;
//}

//第六十七题


//第六十六题
//void swap(int *p1,int *p2)
//{
//	int p;
//	p = *p1;
//	*p1 = *p2;
//	*p2 = p;
//}
//int main()
//{
//	int a, b, c;
//	int* number1, * number2, * number3;
//	printf("Please input three numbers:");
//	scanf("%d%d%d",&a,&b,&c);
//	number1 = &a;
//	number2 = &b;
//	number3 = &c;
//	if (a > b) swap(number1, number2);
//	if (a > c)swap(number1,number3);
//	if (b > c)swap(number2, number3);
//	printf("The sorted numbers are:%d,%d,%d",a,b,c);
//	return 0;
//}

//第六十二题-第六十五题


//第六十一题
//int main()
//{
//	int a[10] = {1,1,1,1,1,1,1,1,1,1};
//	int b[10] = {1,1,1,1,1,1,1,1,1,1};
//	for (int i = 0; i < 10; i++)
//	{
//		if (i > 1)
//		{
//			for (int m = 1; m < i-1 ; m++)
//			{
//				b[m] = a[m -1]+a[m];
//			}
//			for (int n = 0; n < 10; n++)
//			{
//				a[n] = b[n];
//			}
//		}
//		for (int j = 0; j < i; j++)
//		{
//			printf("%d  ",b[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}