#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

//����ʮ��****#include ��Ӧ����ϰ



//����ʮ����****ѧϰʹ��#if #ifdef��#ifndef���÷�
#define MAX
#define MAXIMUM(x,y)(x>y)?x:y
#define MINIMUM(x,y)(x>y)?y:x
int main()
{
	int a = 10, b = 20;
#ifdef MAX
	printf("\40:The larger one is %d\n",MAXIMUM(a,b));
#else
	printf("\40:The lower one is %d\n", MINIMUM(a, b));
#endif // MAX
#ifdef MIN
	printf("\40:The lower one is %d\n", MINIMUM(a, b));
#else
	printf("\40:The larger one is %d\n", MAXIMUM(a, b));
#endif // MIN

	return 0;
}


//����ʮ����****ѧϰʹ��#define���÷�3
//#define LAG>
//#define SMA<
//#define EQ=
//int main()
//{
//	int i = 10;
//	int j = 20;
//	if (i LAG j)
//		printf("\40:%d larger than %d\n", i, j);
//	else if (i SMA j)
//		printf("\40:%d smaller than %d\n", i, j);
//	else if (i EQ j)
//		printf("\40:%d equal to %d\n", i, j);
//	else
//		printf("\40:No such value.\n");
//	return 0;
//}


//����ʮ����****ѧϰʹ��#define���÷�2
//#define exchange(a,b){\
//	int t;\
//	t=a;\
//	a=b;\
//	b=t;\
//}
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("x=%d,y=%d\n",x,y);
//	exchange(x, y);
//	printf("x=%d;y=%d",x,y);
//	return 0;
//}



//����ʮ����****ѧϰʹ��#define���÷�1
//#define TRUE 1
//#define FALSE 0
//#define SQ(x) (x)*(x)
//int main()
//{
//	int num;
//	int again = 1;
//	printf("\40:Program will stop if input value less than 50.\n");
//	while (again)
//	{
//		printf("\40:Please input number==>");
//		scanf("%d",&num);
//		printf("\40:The square for this number is %d \n",SQ(num));
//		if (num >= 50)
//			again = TRUE;
//		else
//			again = FALSE;
//	}
//	return 0;
//}


//����ʮ����****ѧϰʹ��register���÷�
//int main()
//{
//	register int i;
//	int tmp = 0;
//	for (i = 1; i <= 100; i++)
//		tmp += i;
//	printf("The sum is %d\n",tmp);
//	return 0;
//}


//����ʮ����****ѧϰʹ��external���÷�
//int a, b, c;
//void add()
//{
//	int a;
//	a = 3;
//	c = a + b;
//}
//int main()
//{
//	a = b = 4;
//	add();
//	printf("The value of c equal to %d\n",c);
//	return 0;
//}



//����ʮ����****ѧϰʹ��static����һ���÷�
//int main()
//{
//	int i, num;
//	num = 2;
//	for (i = 0; i < 3; i++)
//	{
//		printf("\40:The num equal %d \n",num);
//		num++;
//		{
//			static int  num = 1;
//			printf("\40:The internal block num equal %d \n",num);
//			num++;
//		}
//	}
//	return 0;
//}




//����ʮ����****ѧϰauto���÷�
//int main()
//{
//	int i, num;
//	num = 2;
//	for (i = 0; i < 3; i++)
//	{
//		printf("\40:The num equal %d \n",num);
//		num++;
//		{
//			auto num = 1;
//			printf("\40:The internal block num equal %d \n",num);
//			num++;
//		}
//	}
//	return 0;
//}


//����ʮһ��***ѧϰstatic���徲̬�������÷�
//void varfunc()
//{
//	int var = 0;
//	static int static_var = 0;
//	printf("\40:var equal %d \n", var);
//	printf("\40:static var equal %d \n", static_var);
//	printf("\n");
//	var++;
//	static_var++;
//}
//int main()
//{
//	int i;
//	for (i = 0; i < 3; i++)
//		varfunc();
//	return 0;
//}