#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // �������
#include <stdlib.h>
#include <math.h>

int main() //���� �Լ� �� ������Ʈ�� �� ���� �����ؾ� ��
{
	//3-2��
	int a;
	char b;
	printf("���� �ϳ��� �Է��ϼ��� : $ ");
	scanf("%d", &a);
	getchar();//���ۿ��� �����ϳ� ������(��ǻ� ����)
	printf("���� �ϳ��� �Է��ϼ��� : $ ");
	scanf("%c", &b);//scanf(" %c", &b); �� ����
	printf("�Էµ� ���� %d, %c �Դϴ�.\n", a, b);
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
