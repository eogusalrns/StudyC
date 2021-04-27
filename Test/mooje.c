#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // 헤더파일
#include <stdlib.h>
#include <math.h>

int main() //메인 함수 한 프로젝트에 한 개만 존재해야 함
{
	//3-2장
	int a;
	char b;
	printf("정수 하나를 입력하세요 : $ ");
	scanf("%d", &a);
	getchar();//버퍼에서 문자하나 가져옴(사실상 버림)
	printf("문자 하나를 입력하세요 : $ ");
	scanf("%c", &b);//scanf(" %c", &b); 도 가능
	printf("입력된 값은 %d, %c 입니다.\n", a, b);
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
