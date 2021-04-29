#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // 헤더파일
#include <stdlib.h>
#include <math.h>
#include "mooje.h"
//void func(int,int);
//int func() // 입력과 출력이 없는 함수
//{
//	int a = 10, b = 20;
//	int res = a + b;
//	printf("res : %d", res);
//	return res;
//}
//int get_num(void)
//{
//	int num;
//	printf("양수 입력 : ");
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
int main() //메인 함수 한 프로젝트에 한 개만 존재해야 함
{
	//8-2장
	char str[80] = "applejam";
	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s\n", str);
	//8-1장
	//int score[5], i, total = 0;
	//int count = sizeof(score) / sizeof(int);
	//for (i = 0; i < count; i++)
	//	scanf("%d", &score[i]);
	//for (i = 0; i < count; i++)
	//{
	//	total += score[i];
	//	printf("%5d", score[i]);//%5d : 5칸 들여쓰기
	//}
	//printf("\n");
	//double avg=total/(double)count;
	//printf("평균 : %.1lf\n", avg);
	/*int arr[5] = { 10,20,10 + 20 };
	printf("%d %d %d %d %d", arr[0],arr[1],arr[2],arr[3],arr[4]);*/
	//7-2장
	/*fruit(1);*/
	/*print_line();
	printf("발탄 비아 쿠크\n");
	print_line();*/
	//print_char('@', 5);
	//printf("반환값 : %d\n", get_num());
	//7-1장
	//int score=func();
	//6-2장
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
	//6-1장
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
	//5-2장
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
	//5-1장
	//int a = 0;
	//if (a > 0)
	//	printf("a는 양수입니다.");
	//else if (a < 0)
	//	printf("a는 음수입니다.");
	//else
	//	printf("a는 0입니다.");
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
	//4-2장
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
	printf("큰 값 : %d\n", res);*/
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
	printf("int double char 의 변수형 크기 : %d %d %d", sizeof a, sizeof(b), sizeof(ch));
	*///int a = 20, b = 3;//왼쪽항을 형변환 시킬 수 없음
	//double res=(double)a/(double)b;
	//printf("a = %d, b = %d, res = %.1lf\n", a, b, res);
	//a = (int)res;
	//printf("(int) %.1lf의 결과 : %d\n", res, a);

	//4-1장
	//실수형 데이터는 나머지연산이 안됨
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
	printf("a b 초기값 %d %d \n", a, b);
	printf("전위 : (++a)*3=%d, 후위 : (b++)*3=%d", pre, post);*/
	/*int a = 10, b = 20;
	printf("전위 증가 연산자 %d, 후위 증가 연산자 %d", ++a, b++);*/
	//double apple = 5.0 / 2.0;
	//int banana = 5 / 2;
	//int orange = 5 % 2;
	//printf("%.1lf %d %d", apple, banana, orange);
	/*int a = 10, b = 20;
	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	int inv = -a;
	printf("a값 b값 : %d %d\n", a, b);
	printf("덧셈 %d, 뺄셈 %d, 곱셈 %d, a의 음수 %d\n", sum, sub, mul, inv);*/
	//3-2장
	//int a;
	//char b;
	//printf("정수 하나를 입력하세요 : $ ");
	//scanf("%d", &a);
	//getchar();//버퍼에서 문자하나 가져옴(사실상 버림)
	//printf("문자 하나를 입력하세요 : $ ");
	//scanf("%c", &b);//scanf(" %c", &b); 도 가능
	//printf("입력된 값은 %d, %c 입니다.\n", a, b);
	/*int age;
	double height;
	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height);
	printf("나이는 %d 키는 %.1lf 입니다.", age, height);*/
	/*char name[20];
	int age;
	char address[100];
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("나이 입력 : ");
	scanf("%d", &age);
	printf("주소 입력 : ");
	gets_s(address,sizeof(address));
	printf("%s의 나이는 %d 이고, 주소는 %s 입니다.\n", name, age,address);*/
	//3-1장
	//int a = 10, b = a, c = a + 20;
	//double da = 3.5;
	//char ch = 'A';
	//char str = "abc";
	//printf("변수 값 : %d %d %d %.1lf %c \n", a, b, c, da, ch);
	//printf("int 크기 %d, double 크기 %d, char 크기 %d, string 크기 %d \n", sizeof(a), sizeof(da), sizeof(ch), sizeof(str));
	//char ch1 = 'A', ch2 = 66;
	//printf("문자 값 %c %c 아스키 값 %d %d\n", ch1, ch2, ch1, ch2);
	//printf("short형 int형 long형 long long형 정수 자료형 크기 : %d %d %d %d\n", sizeof(short), sizeof(int), sizeof(long), sizeof(long long));
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
	//printf("딸기 : %s\n", fruit);
	//printf("딸기쨈 : %s %s\n", fruit, "jam");
	//strcpy(fruit, "banana");
	//printf("바나나 : %s\n", fruit);
	//int income = 456;
	//const double tax_rate = 0.12;
	//double tax = income * tax_rate;
	//printf("세금은 : %.1lf입니다.\n", tax);
	/*int trash;
	printf("%d", trash);*/
	//2장
	/*printf("%d %x %o\n", 12, 12, 12);
	printf("%.1lf %.7lf %le %.2le\n", 1e6, 3.14e-5, 0.0000314, 0.0000314);
	printf("%c, %s", '1', "break time\n");
	printf("제 이름은 %s이고 혈액형은 %c입니다.\n키는 %.1lfcm 이고 몸무게는 %.1lfkg 입니다.", "최대현", 'O', 170.0, 71.6);*/

	/* 1장
	int x = 2000, y = 21;
	printf("Hell Josun ");
	printf("%d\n",x + y);
	printf("version %.1lf\n", 1.0);
	printf("My\tfriend\n");
	printf("Goot\bd\t chance\n");
	printf("Cow\rWw\a\n");*/
	return ;
}
