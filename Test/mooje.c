#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // �������
#include <stdlib.h>
#include <math.h>
#include "mooje.h"
//void func(int,int);
//int func() // �Է°� ����� ���� �Լ�
//{
//	int a = 10, b = 20;
//	int res = a + b;
//	printf("res : %d", res);
//	return res;
//}
//int get_num(void)
//{
//	int num;
//	printf("��� �Է� : ");
//	scanf("%d", &num);
//	return num;
//}
//void print_char(char ch,  int count)
//{
//	int i = 0;
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", ch);
//	}
//}
//void print_line()
//{
//	printf("--------------------\n");
//}
//void fruit(int count) {
//	printf("apple\n");
//	if (count == 3) return;
//	fruit(count + 1);
//	printf("jam\n");
//}
int main() //���� �Լ� �� ������Ʈ�� �� ���� �����ؾ� ��
{
	//8-2��
	char str[80] = "applejam";
	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� �� ���ڿ� : %s\n", str);
	//8-1��
	//int score[5], i, total = 0;
	//int count = sizeof(score) / sizeof(int);
	//for (i = 0; i < count; i++)
	//	scanf("%d", &score[i]);
	//for (i = 0; i < count; i++)
	//{
	//	total += score[i];
	//	printf("%5d", score[i]);//%5d : 5ĭ �鿩����
	//}
	//printf("\n");
	//double avg=total/(double)count;
	//printf("��� : %.1lf\n", avg);
	/*int arr[5] = { 10,20,10 + 20 };
	printf("%d %d %d %d %d", arr[0],arr[1],arr[2],arr[3],arr[4]);*/
	//7-2��
	/*fruit(1);*/
	/*print_line();
	printf("��ź ��� ��ũ\n");
	print_line();*/
	//print_char('@', 5);
	//printf("��ȯ�� : %d\n", get_num());
	//7-1��
	//int score=func();
	//6-2��
	/*int i, j;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (5 - i) + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	/*for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (j == i || j==(4-i))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}*/
	//6-1��
	/*int a = 1;
	do {
		a *= 2;
	} while (a < 10);
	printf("%d", a);*/
	//int a = 1,i;
	//for (i = 0; i < 5; i++)
	//{
	//	a *= 2;
	//}
	//printf("a : %d", a);
	/*int a = 1;
	while (a < 10)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);*/
	//5-2��
	/*int rank = 2, m = 0;
	switch (rank) 
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
	printf("m = %d", m);*/
	/*int a = 20, b = 10;
	if (a < 0)
		if (b < 0)
			printf("ok");
	else
		printf("ok");*/
		//int a = 20, b = 10;
	//if (a > 10)
	//	if (b >= 0)
	//		b = 1;
	//	else
	//		b = -1;
	//printf("a:%d,b:%d", a, b);
	//5-1��
	//int a = 0;
	//if (a > 0)
	//	printf("a�� ����Դϴ�.");
	//else if (a < 0)
	//	printf("a�� �����Դϴ�.");
	//else
	//	printf("a�� 0�Դϴ�.");
	//int a = 20, b = 0;
	//if (a > 10)
	//{
	//	b = a;
	//}
	//else
	//{
	//	b = -a;
	//}
	//printf("a : %d, b : %d", a, b);
	//4-2��
	/*int a = 10, b = 5, res;
	printf("res = %d\n", a / b * 2);
	printf("res = %d\n", ++a * 3);
	printf("res = %d\n", a > b && a!= 5);
	printf("res = %d\n", a % 3 == 0);*/
	//char ch = 128;//0b 1000 0000
	//unsigned char ch1 = 128;
	//printf("%d\n", ch >> 1);//0b 1100 0000 -64
	//printf("%d\n", ch1 >> 1);//  0100 0000  64
	//int a = 10;//00001010
	//int b = 12;//00001100
	//printf("a & b : %d\n", a & b);
	//printf("a ^ b : %d\n", a ^ b);
	//printf("a | b : %d\n", a | b);
	//printf("~a : %d\n", ~a);
	//printf("a << 1 : %d\n", a << 1);
	//printf("a >> 2 : %d\n", a >> 2); 
	/*int a = 10, b = 20, res;
	res = (a > b) ? a : b;
	printf("ū �� : %d\n", res);*/
	/*int a = 10, b = 20, res=(++a,b++);
	printf("a:%d b:%d\n", a, b);
	printf("res:%d\n", res);*/
	/*int a = 10, b = 20, res = 2;
	a += 20;
	res *= b + 10;
	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);*/
	/*int a = 10;
	double b = 3.14;
	char ch = 'ABC';
	printf("int double char �� ������ ũ�� : %d %d %d", sizeof a, sizeof(b), sizeof(ch));
	*///int a = 20, b = 3;//�������� ����ȯ ��ų �� ����
	//double res=(double)a/(double)b;
	//printf("a = %d, b = %d, res = %.1lf\n", a, b, res);
	//a = (int)res;
	//printf("(int) %.1lf�� ��� : %d\n", res, a);

	//4-1��
	//�Ǽ��� �����ʹ� ������������ �ȵ�
	/*int a = 10, b = 20, res=a+b;
	printf("a = %d, b = %d, res = %d\n", a, b, res);*/
	/*int a = 30;
	printf("(a>10) && (a<20) : %d\n", (a > 10) && (a < 20));
	printf("(a>10) || (a<20) : %d\n", (a > 10) || (a < 20));
	printf("!(a>10) : %d\n", !(a > 10));*/
	/*int a = 10, b = 20, c = 10;
	printf("a > b : %d\n", (a > b));
	printf("a < b : %d\n", (a < b));
	printf("a != b : %d\n", (a != b));
	printf("a != c : %d\n", (a != c));*/
	/*int a = 5, b = 5, pre = (++a) * 3, post = (b++) * 3;
	printf("a b �ʱⰪ %d %d \n", a, b);
	printf("���� : (++a)*3=%d, ���� : (b++)*3=%d", pre, post);*/
	/*int a = 10, b = 20;
	printf("���� ���� ������ %d, ���� ���� ������ %d", ++a, b++);*/
	//double apple = 5.0 / 2.0;
	//int banana = 5 / 2;
	//int orange = 5 % 2;
	//printf("%.1lf %d %d", apple, banana, orange);
	/*int a = 10, b = 20;
	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	int inv = -a;
	printf("a�� b�� : %d %d\n", a, b);
	printf("���� %d, ���� %d, ���� %d, a�� ���� %d\n", sum, sub, mul, inv);*/
	//3-2��
	//int a;
	//char b;
	//printf("���� �ϳ��� �Է��ϼ��� : $ ");
	//scanf("%d", &a);
	//getchar();//���ۿ��� �����ϳ� ������(��ǻ� ����)
	//printf("���� �ϳ��� �Է��ϼ��� : $ ");
	//scanf("%c", &b);//scanf(" %c", &b); �� ����
	//printf("�Էµ� ���� %d, %c �Դϴ�.\n", a, b);
	/*int age;
	double height;
	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf("%d%lf", &age, &height);
	printf("���̴� %d Ű�� %.1lf �Դϴ�.", age, height);*/
	/*char name[20];
	int age;
	char address[100];
	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("���� �Է� : ");
	scanf("%d", &age);
	printf("�ּ� �Է� : ");
	gets_s(address,sizeof(address));
	printf("%s�� ���̴� %d �̰�, �ּҴ� %s �Դϴ�.\n", name, age,address);*/
	//3-1��
	//int a = 10, b = a, c = a + 20;
	//double da = 3.5;
	//char ch = 'A';
	//char str = "abc";
	//printf("���� �� : %d %d %d %.1lf %c \n", a, b, c, da, ch);
	//printf("int ũ�� %d, double ũ�� %d, char ũ�� %d, string ũ�� %d \n", sizeof(a), sizeof(da), sizeof(ch), sizeof(str));
	//char ch1 = 'A', ch2 = 66;
	//printf("���� �� %c %c �ƽ�Ű �� %d %d\n", ch1, ch2, ch1, ch2);
	//printf("short�� int�� long�� long long�� ���� �ڷ��� ũ�� : %d %d %d %d\n", sizeof(short), sizeof(int), sizeof(long), sizeof(long long));
	//short sh = pow(2.0,15.0)-1;
	//int in = pow(2.0, 31.0)-1;
	//long lng = pow(2.0, 31.0)-1;
	//long long llng = pow(2.0, 63.0)-1;
	//printf("%d %d %ld %lld\n", sh,in,lng,llng);
	//unsigned int x = 4294967295;
	//printf("%d\n", x);
	//x = -1;
	//printf("%u\n", x);
	//float ft = 1.234567890123456789;
	//double db = 1.234567890123456789;
	//printf("%.20f %20lf\n", ft, db);
	//char fruit[20] = "strawberry";
	//printf("���� : %s\n", fruit);
	//printf("����´ : %s %s\n", fruit, "jam");
	//strcpy(fruit, "banana");
	//printf("�ٳ��� : %s\n", fruit);
	//int income = 456;
	//const double tax_rate = 0.12;
	//double tax = income * tax_rate;
	//printf("������ : %.1lf�Դϴ�.\n", tax);
	/*int trash;
	printf("%d", trash);*/
	//2��
	/*printf("%d %x %o\n", 12, 12, 12);
	printf("%.1lf %.7lf %le %.2le\n", 1e6, 3.14e-5, 0.0000314, 0.0000314);
	printf("%c, %s", '1', "break time\n");
	printf("�� �̸��� %s�̰� �������� %c�Դϴ�.\nŰ�� %.1lfcm �̰� �����Դ� %.1lfkg �Դϴ�.", "�ִ���", 'O', 170.0, 71.6);*/

	/* 1��
	int x = 2000, y = 21;
	printf("Hell Josun ");
	printf("%d\n",x + y);
	printf("version %.1lf\n", 1.0);
	printf("My\tfriend\n");
	printf("Goot\bd\t chance\n");
	printf("Cow\rWw\a\n");*/
	return ;
}
