#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

//����ʮ��
//int main()
//{
//	int a[11] = {1,2,5,7,8,11,13,15,18,19,20};
//	int number;
//	int x;
//	printf("original array is:");
//	for (int i = 0; i <= 10; i++)
//		printf("%d  ",a[i]);
//	printf("\n");
//	printf("please input a new number:");
//	scanf("%d",&number);
//	for (int i = 0; i <= 10; i++)
//	{
//		if (a[i] <= number && a[i+1] >= number)
//		{
//			for (int j = 10; j > i; j--)
//			{
//				a[j] = a[j - 1];
//			}
//			a[i + 1] = number;
//			break;
//		}
//	}
//	printf("\n");
//	for (int i = 0; i <= 10; i++)
//		printf("%d  ", a[i]);
//	return 0;
//}


//����ʮ����
//int main()
//{
//	int a[3][3];
//	int sum1 = 0;
//	int sum2 = 0;
//	printf("please input nine numbers:\n");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);;
//			printf("  ");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (i == j)
//				sum1 += a[i][j];
//			if ((i == 0 && j == 2) || (i == 1 & j == 1) || (i == 2 && j == 0))
//				sum2 += a[i][j];
//		}
//	}
//	printf("\nthe right sum is %d",sum1);
//	printf("\nthe left sum is %d", sum2);
//	return 0;
//}


//����ʮ����
//int main()
//{
//	int a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		printf("\nplease input a number:");
//		scanf("%d",&a[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10 ; j++)
//		{
//			if (a[i] > a[j])
//			{
//				int num = a[j];
//				a[j] = a[i];
//				a[i] = num;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("\t%d",a[i]);
//	}
//	return 0;
//}


//����ʮ����  q����������
//int main()
//{
//	return 0;
//}


//����ʮ����


//����ʮ����
//void hello()
//{
//	printf("hello world");
//}
//int main()
//{
//	hello();
//	return 0;
//}


//����ʮ����
//int main()
//{
//	return 0;
//}


//����ʮ����**************************
//int main()
//{
//	int color;
//	for (color = 0; color < 8; color++)
//	{
//		textbackground(color);
//		cprintf("This is color %d\r\n", color);
//		cprintf("Press any key to continue\r\n");
//		_getch();
//	}
//	return 0;
//}


//����ʮһ��
//int main()
//{
//	char letter;
//	printf("please input the first letter of someday:");
//	while ((letter = getchar()) != 'Y')
//	{
//		switch (letter)
//		{
//		case 'S':
//			printf("\nplease input second letter:");
//			if ((letter = getchar()) == 'a')
//				printf("\nsaturday!");
//			else if ((letter = getchar()) == 'u')
//				printf("\nsunday!");
//			else
//				printf("\ndata error");
//			break;
//		case 'F':
//			printf("\nfriday!");
//			break;
//		case 'M':
//			printf("\nmonday!");
//			break;
//		case 'W':
//			printf("\nwedensday!");
//			break;
//		case 'T':
//			printf("\nplease input second letter:");
//			if ((letter = getchar()) == 'h')
//				printf("\nthuresday!");
//			else if ((letter = getchar()) == 'u')
//				printf("\ntuesday!");
//			else
//				printf("\ndata error");
//			break;
//		default:
//			printf("\ndata error!");
//		}
//	}
//	return 0;
//}


//����ʮ��
//int main()
//{
//	int a, b, c, d, e,x;
//	printf("please input a number:");
//	scanf("%d",&x);
//	a = x / 10000;//���λ
//	b = x % 10000 / 1000;//ǧ��λ
//	c = x % 1000 / 100;//�ٷ�λ
//	d = x % 100 / 10;//ʮ��λ
//	e = x % 10;//��λ
//	if (a == e)
//	{
//		if (b == d)
//		{
//			printf("\n%d �ǻ�������", x);
//		}
//		else
//			printf("�ⲻ�ǻ�����");
//	}
//	else
//		printf("�ⲻ�ǻ�����");
//	return 0;
//}

//�ڶ�ʮ����
//int get()
//{
//	printf("please input a number:");
//	int number;
//	scanf("%d",&number);
//	if (number < 100000&&number>0)
//	{
//		return number;
//	}
//	else
//	{
//		system("cls");
//		get();
//	}
//}
//int main()
//{
//	int a, b, c, d, e,x;
//	x = get();
//	a = x / 10000;//���λ
//	b = x % 10000 / 1000;//ǧ��λ
//	c = x % 1000 / 100;//�ٷ�λ
//	d = x % 100 / 10;//ʮ��λ
//	e = x % 10;//��λ
//	if (a != 0) printf("there are 5\n%d%d%d%d%d", e, d, c, b, a);
//	else if (b != 0) printf("there are 4\n%d%d%d%d",e, d, c, b);
//	else if (c != 0) printf("there are 3\n%d%d%d", e, d, c);
//	else if (d != 0) printf("there are 2\n%d%d", e, d);
//	else if (e != 0) printf("there are 1\n%d", e);
//	return 0;
//}


//�ڶ�ʮ����
//int number = 10;
//int age(int j)
//{
//	if (j == 1)
//	{
//		return number ;
//	}
//	else
//	{
//		age(j - 1);
//		number += 2;
//	}
//}
//int main()
//{
//	int i = 5;
//	printf("the 5th people's age is :%d",age(i));
//	return 0;
//}


//�ڶ�ʮ����
//void palin(int j)
//{
//	char next;
//	if (j <= 1)
//	{
//		next = getchar();
//		printf("\n����Ϊ��");
//		putchar(next);
//	}
//	else
//	{
//		next = getchar();
//		palin(j-1);
//		putchar(next);
//	}
//}
//int main()
//{
//	int i = 5;
//	printf("please input 5 datas:");
//	palin(i);
//	return 0;
//}


//�ڶ�ʮ����
//int fact(int j)
//{
//	int sum = 1;
//	while (j > 0)
//	{
//		sum = sum * j;
//		j--;
//	}
//	return sum;
//}
//int main()
//{
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("the %d! = %d\n",i,fact(i));
//	}
//	return 0;
//}



//�ڶ�ʮ����
//int main()
//{
//	int i = 20;
//	int sum = 0;
//	int number = 1;
//	while (i > 0)
//	{
//		for (int j = i; j > 0; j--)
//		{
//			number = j * number;
//		}
//		sum += number;
//		number = 1;
//		i--;
//	}
//	printf("the sum is %d",sum);
//	return 0;
//}


//�ڶ�ʮ����
//int main()
//{
//	float i = 1;
//	float j = 2;
//	float k = 0;
//	float sum = 0;
//	int time = 20;
//	while (time > 0)
//	{
//		sum = sum + (j / i);
//		//printf("the sum is %f\n", sum);
//		k = i;
//		//printf("the sum is %d\n", k);
//		i = j;
//		//printf("the sum is %d\n", i);
//		j = k + j;
//		//printf("the sum is %d\n", j);
//		time--;
//	}
//	printf("the sum is %f\n",sum);
//	return 0;
//}



//�ڶ�ʮ����
//int main()
//{
//	 int num = 6;
//	for (int i = 0; i <= 6; i++)
//	{
//		int sum = fabs(i-3);
//		while (sum > 0)
//		{
//			printf(" ");
//			sum--;
//		}
//		int j = fabs(7-fabs(num));
//		while(j>0)
//		{
//			printf("*");
//			j--;
//		}
//		num = num - 2;
//		printf("\n");
//	}
//	return 0;
//}


//�ڶ�ʮ����***************
//int main()
//{
//	char i, j, k;
//	for (i = 'x'; i <= 'z'; i++)
//	{
//		for (j = 'x'; j <= 'z'; j++)
//		{
//			if (i != j)
//			{
//				for (k = 'x'; k <= 'z'; k++)
//				{
//					if (i != k && j != k)
//					{
//						if (i != 'x' && k != 'x' && k != 'z')
//						{
//							printf("order is:\n");
//							printf("a vs %c\nb vs %c\nc vs %c", i, j, k);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//�ڶ�ʮһ��
//int main()
//{
//	int sum = 1;
//	int day = 10;
//	while (day>1)
//	{
//		sum = (sum + 1) * 2;
//		printf("the sum is %d\n",sum);
//		day--;
//	}
//	printf("\nthe sum is %d",sum);
//	return 0;
//}