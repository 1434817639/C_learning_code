#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>


//�ڶ�ʮ��
//int main()
//{
//	float high = 100;
//	float sum = 100;
//	int time = 10;
//	while (time > 1)
//	{
//		high = high/2;
//		sum += high*2;
//		//printf("the total summary hight is %f\n", sum);
//		time--;
//	}
//	printf("the total summary hight is %f",sum);
//	printf("\nthe 10th hight is %f",high/2);
//	return 0;
//}



//��ʮ����
//int main()
//{
//	int number = 1000;
//	int sum=0;
//	printf("the numbers are:");
//	while (number > 0)
//	{
//		//printf("%d  ", number);
//		for (int i = 1; i < number; i++)
//		{
//			if (number % i == 0)
//			{
//				sum = sum + i;
//				//printf("%d  ", i);
//			}
//		}
//		//printf("\n  ");
//		if (sum == number)
//			printf("%d  ",number);
//		number--;
//		sum = 0;
//	}
//	return 0;
//}


//��ʮ����
//int main()
//{
//	int number, n;
//	int sum = 0;
//	printf("please input a number:");
//	scanf("%d",&number);
//	printf("\nplease input a time:");
//	scanf("%d",&n);
//	while (n > 0)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			sum = sum + number * pow(10,n-i);
//			//printf("\nthe sum is :%d", sum);
//		}
//		n--;
//	}
//	printf("the sum is :%d",sum);
//	return 0;
//}

//��ʮ����*****************
//int main()
//{
//	char c;
//	int letters = 0, space = 0, digit = 0,others = 0;
//	printf("please input some characters\n");
//	while ((c = getchar()) != '\n')
//	{
//		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//			letters++;
//		else if (c == ' ')
//			space++;
//		else if (c >= '0' && c <= '9')
//		{
//			digit++;
//			//printf("%d\n", digit);
//		}
//		else
//			others++;
//	}
//	printf("all in all:char=%d  space=%d  digit=%d  others=%d\n",letters,space,digit,others);
//	return 0;
//}



//��ʮ����
//int main()
//{
//	int m, n;
//	printf("��������������");
//	scanf("%d%d",&m,&n);
//	for (int i = (m < n ? n : m); i <= (m * n); i++)
//	{
//		//printf("\niΪ:%d", i);
//		if (i % m == 0 && i % n == 0)
//		{
//			printf("\n��С������Ϊ:%d",i);
//			break;
//		}
//	}
//	for (int i = (m < n ? n : m); i>0; i--)
//	{
//		if (m % i == 0 && n % i == 0)
//		{
//			printf("\n��С��Լ��Ϊ:%d",i);
//			break;
//		}
//	}
//	return 0;
//}

//��ʮ����
//int main()
//{
//	int score;
//	char grade;
//	printf("please input a score:");
//	scanf("%d",&score);
//	grade = score > 90 ? 'A' : (score > 60 ? 'B' : 'C');
//	printf("%d belongs to %c",score,grade);
//	return 0;
//}

//��ʮ����
//int main()
//{
//	int number;
//	printf("������һ����������");
//	scanf("%d",&number);
//	printf("����������Ϊ��%d = ",number);
//	for (int i = 2; i <= number; i++)
//	{
//		//printf("����Ϊ��%d = ", number);
//		if (number % i == 0 && number != i)
//		{
//			printf("%d*",i);
//			number = number / i;
//			i = 1;
//		}
//		if (number == i)
//		{
//			printf("%d\n",number);
//		}
//	}
//	return 0;
//}

//��ʮ����
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			for (int k = 0; k < 10; k++)
//			{
//				if ((i * i * i + j * j * j + k * k * k) == (i * 100 + j * 10 + k)&& (i * 100 + j * 10 + k)>100)
//					printf("ˮ�ɻ���Ϊ:%d\n",i*100+j*10+k);
//			}
//		}
//	}
//	return 0;
//}


//��ʮ����
//int main()
//{
//	/*int number;*/
//	int k=0;
//	for (int i = 101; i <= 200; i++)
//	{
//		for (int j = 2; j <= 200; j++)
//		{
//			if (i != j && i % j == 0)
//			{
//				k++;
//			}
//		}
//		if (k == 0)printf("\n����Ϊ:%d\t",i);
//		k = 0;
//	}
//	return 0;
//}


//��ʮһ��
//int main()
//{
//	int rabbit_number = 1;
//	int kid_number = 1;
//	int k,total;
//	printf("�������·ݣ�");
//	scanf("%d",&k);
//	for (int i = 1; i <= k; i++)
//	{
//		if (i<3)
//		{
//			rabbit_number = 1;
//		}
//		if (i == 3) rabbit_number = 2;
//		if (i > 3)
//		{
//			total = rabbit_number;
//			rabbit_number = rabbit_number + kid_number;
//			kid_number = total;
//		}
//
//	}
//	printf("\n��������Ϊ��%d",rabbit_number);
//	return 0;
//}


//��ʮ��(�Թ�)
//int main()
//{
//	printf("\l\l\n");
//	return 0;
//}


//�ھ���
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= 9; j++)
//		{
//			if ((i + j) % 2 == 0)
//				printf("%c%c", 218, 218);
//			else
//				printf("  ");
//		}
//		printf("\n");
//	}
//	return 0;
//}




//�ڰ���
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= 9; j++)
//		{
//			if (j <= i) printf("%d * %d = %-3d    ",j,i,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//������
//int main()
//{
//	                                                                                                                                                                                                  
//	return 0;
//}


//������
//int main()
//{
//	printf("\t\t*\n");
//	printf("\t     *\n");
//	printf("\t  *\n");
//	printf("\t*\n");
//	printf("\t*\n");
//	printf("\t  *\n");
//	printf("\t     *\n");
//	printf("\t\t*\n");
//	return 0;
//}


//������
//int main()
//{
//	int x, y, z;
//	printf("��������������");
//	scanf("%d\t%d\t%d",&x,&y,&z);
//	if (x > y)
//		if (z > y)
//		{
//			printf("\n%d\t", y);
//			if (x > z)
//			{
//				printf("%d\t%d\t", z, x);
//			}
//		}
//		else printf("\n%d\t%d\t%d", z, y, x);
//	else
//	{
//		if (x < z)
//		{
//			printf("\n%d\t", x);
//			if (y < z)
//				printf("%d\t%d\t", y, z);
//		}
//		else
//			printf("\n%d\t%d\t%d\t",z,x,y);
//	}
//	return 0;
//}





//������
//int main()
//{
//	int year, month, day;
//	int time=0;
//	printf("������ĳ�꣺");
//	scanf("%d",&year);
//	printf("������ĳ�£�");
//	scanf("%d", &month);
//	printf("������ĳ�գ�");
//	scanf("%d", &day);
//	//�ж��Ƿ�����
//	if (year % 4 == 0)
//	{
//		for (int i = 1; i < month; i++)
//		{
//			if (i == 2) time = time + 29;
//			else if ((i % 2) == 1)time = time + 31;
//			else time = time + 30;
//		}
//		time = time + day;
//		printf("��%d��ĵ�%d�졣", year, time);
//	}
//	else
//	{
//		for (int i = 1; i < month; i++)
//		{
//			if (i == 2) time = time + 28;
//			else if ((i % 2) == 1)time = time + 31;
//			else  time = time + 30;
//		}
//		time = time + day;
//		printf("��%d��ĵ�%d�졣",year,time);
//	}
//	return 0;
//}


//������
//int main()
//{
//	long number=0;
//	while (number<100000)
//	{
//		int x = number + 100;
//		int y = x + 168;
//		x = sqrt(x);
//		y = sqrt(y);
//		if ((x * x == (number + 100)) && (y * y == (number + 268)))
//		{
//			/*printf("%d\t", x);
//			printf("%d\t", y);*/
//			printf("%d\t", number);
//		}
//		number++;
//	}
//	return 0;
//}

//�ڶ���
//int main()
//{
//	long money=0;
//	int i = 0;
//	printf("����������");
//	scanf("%ld",&money);
//	if (money <= 10)
//		i = 1;
//	else if (money>10&&money<=20)
//		i = 2;
//	else if (money > 20 && money <= 40)
//		i = 3;
//	else if (money > 40 && money <= 60)
//		i = 4;
//	else if (money > 60 && money <= 100)
//		i = 5;
//	else if (money > 100)
//		i = 6;
//	switch (i)
//	{
//	case 1:
//		printf("\n���Ϊ��%0.1f", money * 0.1);
//		break;
//	case 2:
//		printf("\n���Ϊ��%f", 1+(money-10)*0.075);
//		break;
//	case 3:
//		printf("\n���Ϊ��%f", 1 + 0.75+(money-20)*0.05);
//		break;
//	case 4:
//		printf("\n���Ϊ��%f", 1 + 0.75 + 1+(money-40)*0.03);
//		break;
//	case 5:
//		printf("\n���Ϊ��%f", 1 + 0.75 + 1 + 0.6 +(money-60)*0.015);
//		break;
//	case 6:
//		printf("\n���Ϊ��%f", 1 + 0.75 + 1+ 0.6 + 0.6 +(money-100)*0.01);
//		break;
//	default:
//		printf("�������");
//		break;
//	}
//	return 0;
//}



//��һ��
//int main()
//{
//	int i, j, k;
//	int number;
//		for (i = 1; i < 5;  i++)
//		{
//			for (j = 1; j < 5; j++)
//			{
//				for (k = 1; k < 5 ; k++)
//				{
//					if (i != j && j != k && i != k)
//					{
//						number = k + j * 10 + i * 100;
//						printf("�������Ϊ%d\n", number);
//					}
//				}
//			}
//		}
//		system("pause");
//	return 0;
//}