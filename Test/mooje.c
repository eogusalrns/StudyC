#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // 헤더파일
#include <stdlib.h>
#include <string.h>
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
//void print_arr(int* p, int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	printf("\n");
//}
//void input_ary(double *pa,int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		scanf("%lf", pa+i);
//	}
//}
//double find_max(double* pa, int size)
//{
//	int i;
//	double max=pa[0];
//
//	for (i = 1; i < size; i++)
//	{
//		if (pa[i] > max)
//			max = pa[i];
//	}
//
//	return max;
//}
//void my_gets(char* str, int size)
//{
//	int ch, i = 0;
//	ch = getchar();
//	while ((ch != '\n') && (i < size - 1))
//	{
//		str[i] = ch;
//		i++;
//		ch = getchar();
//	}
//	str[i] = '\0';
//}
//char *my_strcpy(char* str, char *ch)
//{
//	char* po = str;
//
//	while (*ch != '\0')
//	{
//		*str = *ch;
//		str++;
//		ch++;
//	}
//	*str = '\0';
//	return po;
//}
//void assign(void)
//{
//	int a = 10;
//	printf("assign 함수 a : %d\n", a);
//}
//int a;
//
//void assign10(void)
//{
//	a = 10;
//}
//
//void assign20(void)
//{
//	int a = 20;//지역변수
//}
//void auto_func()
//{
//	int a = 0;
//	a++;
//	printf("%d\n", a);
//}
//void static_func()
//{
//	static int a;
//	a++;
//	printf("%d\n", a);
//}
//void add_ten(int *pa)
//{
//	*pa+= 10;
//}
//int *ssum(int a, int b)
//{
//	int res;
//	res = a + b;
//	return &res;
//}
//void swap_ptr(char** ppa, char** ppb)
//{
//	char* pt;
//	pt = *ppa;
//	*ppa = *ppb;
//	*ppb = pt;
//}
//void print_str(char** pps, int cnt)
//{
//	int i;
//	for (i = 0; i < cnt; i++)
//	{
//		printf("%s\n", pps[i]);
//	}
//}
//void print_ary(int (*pa)[4])
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%5d", pa[i][j]);
//		}
//		printf("\n");
//	}
//}
//int Sum(int a, int b)
//{
//	return (a + b);
//}
//void func(int (*fp)(int, int))
//{
//	int a, b, res;
//	printf("두 정수의 값을 입력하세요 : ");
//	scanf("%d%d", &a, &b);
//	res = fp(a, b);
//	printf("결과값은 : %d\n", res);
//}
//int Sum(int a, int b)
//{
//	return (a + b);
//}
//int mul(int a, int b)
//{
//	return (a * b);
//}
//int mmax(int a, int b)
//{
//	if (a > b) return a;
//	else return b;
//}
//void print_str(char** ps)
//{
//	while (*ps != NULL)
//	{
//		printf("%s\n", *ps);
//		ps++;
//	}
//}
//struct student
//{
//	int num;
//	double grade;
//};
//struct profile
//{
//	char name[20];
//	int age;
//	double height;
//	char* intro;
//};
//struct profile
//{
//	int age;
//	double height;
//};
//struct student
//{
//	struct profile pf;
//	int id;
//	double grade;
//};
//struct student
//{
//	int id;
//	char name[20];
//	double grade;
//};
//struct vision
//{
//	double left;
//	double right;
//};
//struct vision exchange(struct vision robot)
//{
//	double temp;
//
//	temp = robot.left;
//	robot.left = robot.right;
//	robot.right = temp;
//
//	return robot;
//}
//struct score
//{
//	int kor, eng, math;
//};
//struct address
//{
//	char name[20];
//	int age;
//	char tel[20];
//	char addr[20];
//};
//void print_list(struct address* lp)
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%10s%15d%15s%20s\n", lp[i].name, lp[i].age, (lp + i)->tel, (lp + i)->addr);
//	}
//}
struct list
{
	int num;
	struct list* next;
};
int main() //메인 함수 한 프로젝트에 한 개만 존재해야 함
{
	//17-2장
	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	struct list* head = &a, * current;

	a.next = &b;
	b.next = &c;

	printf("head->num : %d\n", head->num);
	printf("head->next->num : %d\n", head->next->num);

	printf("list all : ");
	current = head;
	while (current != NULL)
	{
		printf("%d ", current->num);
		current = current->next;
	}
	printf("\n");
	//struct address list[5] = {
	//	{"홍길동1",222,"111","울릉도 독도"},
	//	{"홍길동2",222,"111-","릉도 독도"},
	//	{"홍길동3",2222,"111-1","도 독도"},
	//	{"홍길동4",22222,"111-11","독도"},
	//	{"홍길동5",222222,"111-111","도"}
	//};
	//print_list(list);

	
	//struct score umi = { 90,80,70 };
	//struct score* ps = &umi;

	//printf("국어 : %d 영어 : %d 수학 : %d ", (*ps).kor, ps->eng, ps->math);
	//17-1장
	//struct vision robot;
	//printf("시력 입력 : ");
	//scanf("%lf%lf", &(robot.left), &(robot.right));
	//robot = exchange(robot);
	//printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);
	//struct student s1 = { 315,"홍길동",2.4 },
	//	s2 = { 316,"이순신",3.7 },
	//	s3 = { 317,"세종대왕",4.4 };

	//struct student max;

	//max = s1;
	//if (s2.grade > max.grade) max = s2;
	//if (s3.grade > max.grade) max = s3;

	//printf("학번 : %d 이름 : %s 학점 : %.1lf\n", max.id, max.name, max.grade);
	//struct student yuni;
	//yuni.pf.age = 17;
	//yuni.pf.height = 170.0;
	//yuni.id = 315;
	//yuni.grade = 4.3;
	//printf("나이 : %d\n", yuni.pf.age);
	//printf("키 : %.1lf\n", yuni.pf.height);
	//printf("학번 : %d\n", yuni.id);
	//printf("학점 : %.1lf\n", yuni.grade);
	//struct profile yuni;

	//strcpy(yuni.name, "최대현");
	//yuni.age = 26;
	//yuni.height = 170.0;

	//yuni.intro = (char*)malloc(80);
	//printf("자기 소개 : ");
	//gets(yuni.intro);

	//printf("이름 : %s\n", yuni.name);
	//printf("나이 : %d\n", yuni.age);
	//printf("키 : %.1lf\n", yuni.height);
	//printf("자기소개 : %s\n", yuni.intro);

	//free(yuni.intro);
	/*struct student s1;
	s1.num = 2;
	s1.grade = 2.7;
	printf("학번 : %d %.1lf\n", s1.num, s1.grade);*/
	//16-2장
	//char temp[80];
	//char* str[21] = { 0 };
	//int i = 0;

	//while (i < 20)
	//{
	//	printf("문자열을 입력하세요 : ");
	//	gets(temp);
	//	if (strcmp(temp, "end") == 0)break;
	//	str[i] = (char*)malloc(strlen(temp) + 1);
	//	strcpy(str[i], temp);
	//	i++;
	//}
	//print_str(str);
	//for (i = 0; str[i] != NULL; i++)
	//	free(str[i]);
	//char temp[80];
	//char* str[3];
	//int i;
	//for (i = 0; i < 3; i++)
	//{
	//	printf("문자열을 입력하세요 : ");
	//	gets(temp);
	//	str[i] = (char*)malloc(strlen(temp) + 1);
	//	strcpy(str[i], temp);
	//}

	//for (i = 0; i < 3; i++)
	//{
	//	printf("%s\n", str[i]);
	//	free(str[i]);
	//}

	//16-1장
	/*int* pi;
	int size = 5, count = 0, num, i;

	pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("양수만 입력하세요 : ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size)
		{
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);*/
	/*int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL)
	{
		printf("메모리가 부족합니다.\n");
		exit(1);
	}
	printf("다섯 명의 나이를 입력하세요 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}
	printf("다섯 명의 평균 나이 : %1.lf\n", (sum / 5.0));
	free(pi);*/
	//int* pi;
	//double* pd;

	//pi = (int*)malloc(sizeof(int));
	//pd = (double*)malloc(sizeof(double));

	//if ((pi == NULL) || (pd == NULL))
	//{
	//	printf("# 메모리가 부족합니다.\n");
	//	exit(1);
	//}
	//
	//*pi = 10;
	//*pd = 3.4;

	//printf("정수형으로 사용 : %d\n", *pi);
	//printf("실수형으로 사용 : %.1lf\n", *pd);

	//free(pi);
	//free(pd);
	//15-2장
	//int a = 10;
	//double b = 3.5;
	//void* vp;
	//vp = &a;
	//printf("a : %d\n", *(int*)vp);
	//vp = &b;
	//printf("b : %.1lf\n", *(double *)vp);
	//int sel;
	//printf("01 두 정수의 합\n");
	//printf("02 두 정수의 곱\n");
	//printf("03 두 정수 중에서 큰 값 계산\n");
	//printf("원하는 계산을 선택하세요 : ");
	//scanf("%d", &sel);

	//switch (sel)
	//{
	//case 1: func(Sum); break;
	//case 2: func(mul); break;
	//case 3: func(mmax); break;
	//}
	//int (*fp)(int, int);
	//int res;
	//fp = Sum;
	//res = fp(10, 20);
	//printf("result : %d\n", res);
	//15-1장
	//int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	//print_ary(ary);
	//int a = 10;
	//int* pa = &a;
	//printf("%p %p\n", &a, pa);
	//int ary1[2] = { 1,2 };
	//int(* pary1) = ary1;
	//printf("%p %p\n", ary1, pary1);
	//printf("%p %p\n", ary1 + 1, pary1 + 1);
	//int ary2[2] = { 'a','b' };
	//char* pary2 = ary2;
	//printf("%p %p\n", ary2, pary2);
	//printf("%p %p\n", ary2 + 1, pary2 + 1);
	//int ary3[][2] = { {1,2},{3,4} };
	//int(* pary3)[2] = ary3;
	//printf("%p %p\n", ary3, pary3);
	//printf("%p %p\n", ary3+1, pary3+1);
	//char* ary4[2] = { "hi","good" };
	//char** pary4 = ary4;
	//printf("%p %p\n", ary4, pary4);
	//printf("%p %p\n", ary4+1, pary4+1);
	// 
	//int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	//int(*pa)[4];
	//int i, j;
	//pa = ary;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//		printf("%5d", pa[i][j]);
	//	printf("\n");
	//}
	/*int ary[5];
	printf("  ary의 값 : %u\t", ary);
	printf("  ary의 주소 : %u\n", &ary);
	printf("  ary+1 : %u\t", ary+1);
	printf("  &ary+1 : %u\n", &ary+1);*/
	//char* ptr_ary[] = { "eagle","tiger","lion","squirrel" };
	//int count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	//print_str(ptr_ary, count);
	//char* pa = "success";
	//char* pb = "failure";
	//printf("pa -> %s, pb -> %s\n", pa, pb);
	//swap_ptr(&pa, &pb);
	//printf("pa -> %s, pb -> %s\n", pa, pb);
	//int a = 10;
	//int* pi = &a;
	//int** ppi = &pi;
	//printf("변수  변수값   &연산    *연산    **연산\n");
	//printf("a%10d%10u\n", a, &a);
	//printf("pi%10u%10u%10d\n", pi, &pi, *pi);
	//printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);

	//14-2장
	/*int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 5,6,7,8 };
	int ary3[4] = { 9,10,11,12 };
	int* pary[3] = { ary1,ary2,ary3 };
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}*/
	/*char* pary[5];
	int i;
	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)
		printf("%s\n", pary[i]);*/
		//14-1장
		/*int score[2][3][4] = {
			{{72,80,95,60},{68,98,83,90},{75,72,84,90}},
			{{64,85,90,88},{95,92,88,95},{43,72,56,75}}
		};
		int i, j, k;

		for (i = 0; i < 2; i++)
		{
			printf("%d반 점수...\n", i + 1);
			for (j = 0; j < 3; j++)
			{
				for (k = 0; k < 4; k++)
				{
					printf("%5d", score[i][j][k]);
				}
				printf("\n");
			}
			printf("\n");
		}*/
		//char animal[5][20];
		//int i, count;

		//count = sizeof(animal) / sizeof(animal[0]);
		//for (i = 0; i < count; i++)
		//	scanf("%s", animal[i]);
		//for (i = 0; i < count; i++)
		//	printf("%5s", animal[i]);
		//int num[3][4] = {
		//	{1,2,3,4,},
		//	{5,6,7,8,},
		//	{9,10,11,12}
		//};
		//int i, j;
		//for (i = 0; i < 3; i++) 
		//{
		//	for (j = 0; j < 4; j++)
		//		printf("%5d", num[i][j]);
		//	printf("\n");
		//}
		//int score[3][4];
		//int total, i, j;
		//double avg;
		//for (i = 0; i < 3; i++)
		//{
		//	total = 0;
		//	printf("%d번째 과목의 점수 입력 : ", i+1);
		//	for (j = 0; j < 4; j++)
		//	{
		//		scanf("%d", &score[i][j]);
		//		total += score[i][j];
		//	}
		//	avg = total / 4.0;
		//	printf("%d 번째 과목의 총점 %d 평균 %.2lf\n", i + 1, total, avg);
		//}
		//13-2장
		//int* resp;
		//resp = ssum(10, 20);
		//printf("두 정수의 합 : %d\n", *resp);
		//int a = 10;
		//add_ten(&a);
		//printf("a : %d\n", a);
		//13-1장
		//register int i;
		//int sum = 0;
		//for (i = 1; i <= 10000; i++)
		//	sum += i;
		//printf("%d", sum);
		//int i;
		//printf("일반 지역 변수(auto)를 사용한 함수...\n");
		//for (i = 0; i < 3; i++)
		//	auto_func();
		//printf("정적 지역 변수(static)를 사용한 함수...\n");
		//for (i = 0; i < 3; i++)
		//	static_func();
		//printf("a의 호출 전 값 : %d\n", a);
		//assign10();
		//assign20();
		//printf("a의 호출 후 값 : %d\n", a);
		//int a = 10, b = 20;
		//printf("교환 전 a와 b의 값 : %d,%d\n", a, b);
		//{
		//	int temp;
		//	temp = a;
		//	a = b;
		//	b = temp;
		//}
		//printf("교환 후 a와 b의 값 : %d,%d\n", a, b);
		//auto int a = 0;
		//assign();
		//printf("main 함수 a : %d\n", a);
		//12-2장
		//char str[80] = "strawberry";
		//printf("바꾸기 전 문자열 : %s\n", str);
		//my_strcpy(str, "apple");
		//printf("바꾼 후 문자열 : %s\n", str);
		//printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));
		//char str1[80] = "pear";
		//char str2[80] = "peach";

		//printf("사전에 나중에 나오는 과일 이름 : ");

		//if (strncmp(str1, str2,3) == 0)
		//	printf("같다");
		//else
		//	printf("다르다");
		//char str1[80], str2[80];
		//char* resp;

		//printf("2개의 과일 이름 입력 : ");
		//scanf("%s%s", str1, str2);
		//if (strlen(str1) > strlen(str2))
		//	resp = str1;
		//else
		//	resp = str2;
		//printf("이름이 긴 과일은 : %s", resp);
		//char str[80] = "straw";
		//strcat(str, "berry");
		//printf("%s\n", str);
		//strncat(str, "piece",3);
		//printf("%s\n", str);
		//char str[20] = "mango tree";
		//strncpy(str, "apple-pie", 6);
		////str[5] = '\0';
		//printf("%s", str);
		/*char str1[80] = "strawberry";
		char str2[80] = "apple";
		char* ps1 = "banana";
		char* ps2 = str2;
		printf("최초 문자열 : %s\n", str1);
		strcpy(str1, str2);
		printf("바뀐 문자열 : %s\n", str1);

		strcpy(str1, ps1);
		printf("바뀐 문자열 : %s\n", str1);

		strcpy(str1, ps2);
		printf("바뀐 문자열 : %s\n", str1);

		strcpy(str1, "banana");
		printf("바뀐 문자열 : %s\n", str1);*/
		//12-1장
		/*int i = 0;
		char ch, str[20];
		do {
			ch = getchar();
			str[i] = ch;
			i++;
		} while (ch != '\n');
		str[i] = '\0';
		printf("%s", str);*/
		//char str[80] = "apple juice";
		//char* ps = "banana";
		//puts(str);
		//fputs(ps, stdout);
		//puts("milk");
		/*int age;
		char name[20];

		printf("나이 입력 : ");
		scanf("%d", &age);
		fgetc(stdin);
		printf("이름 입력 : ");
		gets(name);
		printf("나이 : %d, 이름 : %s", age, name);*/
		/*char str[80];
		printf("공백이 포함된 문자열 입력 : ");
		fgets(str, sizeof(str), stdin);
		printf("입력된 문자열은 %s입니다.", str);*/
		//char str[80];

		//printf("공백이 포함된 문자열 입력 : ");
		//gets(str);
		//printf("입력한 문자열은 %s입니다.", str);
		//strlen(str);
		/*printf("문자열 입력 : ");
		scanf("%s", str);
		printf("첫 번째 단어 : %s\n", str);
		scanf("%s", str);
		printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);*/

		//char* dessert = "apple";
		//printf("오늘 후식은 %s입니다.\n", dessert);
		//dessert = "banana";
		//printf("내일 후식은 %s입니다.\n", dessert);

		/*printf("apple 주소 시작 값 : %p\n", "apple");
		printf("두번째 문자 주소 값 : %p\n", "apple"+1);
		printf("첫번째 문자 : %c\n", *"apple");
		printf("두번째 문자 : %c\n", *("apple"+1));
		printf("배열로 표현할 세 번째 문자 : %c", "apple"[2]);*/

		//11-2장
		//int num, grade;
		//printf("성적을 입력하세요 : ");
		//grade = getchar();
		//printf("학번을 입력하세요 : ");
		//scanf("%d", &num);
		////getchar();//버퍼비워준다
		//fflush(stdin);
		//printf("학번 : %d, 성적 : %c", num, grade);

		//char str[7];
		//my_gets(str, sizeof(str));
		//printf("입력한 문자열 : %s\n", str);
		//int res;
		//char ch;

		//while (1)
		//{
		//	res = scanf("%c", &ch);
		//	if (res == EOF) break;
		//	printf("%d ", ch);
		//}
		//char ch;
		//int i;

		//for (i = 0; i < 6; i++)
		//{
		//	scanf("%c", &ch);
		//	printf("%c", ch);
		//}
		//11-1장
		//int ch = getchar();
		//printf("입력한 문자 : ");
		//putchar(ch);
		/*char ch1, ch2;
		scanf("%c%c", &ch1, &ch2);
		printf("[%c%c %d%d]", ch1, ch2, ch1, ch2);*/
		//char small, cap = 'G';

		//if ((cap >= 65) && (cap <= 'Z'))
		//{
		//	small = cap + ('a' - 'A');
		//}

		//printf("%c %c\n", small, cap);
		//10-2장
		/*double arr[5], max;
		int size = sizeof(arr) / sizeof(arr[0]);
		input_ary(arr, size);
		max = find_max(arr, size);
		printf("배열의 최댓값 : %.1lf\n", max);*/
		//int arr1[5] = { 10,20,30,40,50 };
		//int arr2[7] = { 10,20,30,40,50,60,70 };
		//print_arr(arr1, 5);
		//print_arr(arr2, 7);
		//int arr[5] = { 10,20,30,40,50 };
		//print_arr(arr);
		//10-1장
		//int arr[5] = { 10,20,30,40,50 };
		//int* pa = arr;
		//int* pb = pa + 3;
		//printf("pa : %u, pb : %u\n", pa, pb);
		//pa++;
		//printf("pb - pa : %u\n", pb - pa);
		//printf("앞에 있는 배열 요소의 값 출력 : ");
		//if (pa < pb) printf("%d\n", *pa);
		//else printf("%d\n", *pb);
		//int arr[3] = { 10,20,30 };
		//int* pa = arr;
		//int i;
		//printf("배열의 값 : ");
		//for (i = 0; i < 3; i++)
		//{
		//	printf("%d ", *pa);
		//	pa++;
		//}
		//int arr[3];
		//int* pa = arr;
		//int i;
		//*pa = 10;
		//*(pa + 1) = 20;
		//pa[2] = pa[0] + *(pa + 1);
		//for (i = 0; i < 3; i++)
		//{
		//	printf("%5d", *(pa + i));
		//}
		//int arr[3], i;
		//*(arr + 0) = 10;
		//*(arr + 1) = *(arr + 0) + 10;
		//printf("세 번째 요소 키보드 입력 : ");
		//scanf("%d", arr + 2);
		//for (i = 0; i < 3; i++)
		//{
		//	printf("%5d", *(arr + i));
		//}

		//9-2장
		//int a = 10, b = 20;
		//int a = 10;
		//int* p = &a;
		//double* pd;
		//pd = p;
		//printf("%lf\n",*pd);
		/*char ch, * pc = &ch;
		int in, * pi = &in;
		double db, * pd = &db;
		printf("char int double 변수의 주소 크기 : %d %d %d\n", sizeof(&ch), sizeof(&in), sizeof(&db));
		printf("char int double * 포인터 변수의 주소 크기 : %d %d %d\n", sizeof(pc), sizeof(pi), sizeof(pd));
		printf("char int double * 포인터 변수가 가리키는 변수 크기 : %d %d %d\n", sizeof(*pc), sizeof(*pi), sizeof(*pd));*/
		//9-1장
		//int a = 10, b = 20;
		//const int* pa = &a;//가리키는 값 변경 불가
		////*pa = 20;
		//double* const pb = &b;//가리키는 주소 변경 불가
		////pb = &a;
		//printf("포인터 크기는 int double : %d %d\n", sizeof(pa), sizeof(pb));
		//printf("%d\n", *pa);
		//pa = &b;
		//printf("%d\n", *pa);
		//pa = &a;
		//a = 100;
		//printf("%d\n", *pa);
		/*int a = 10, b = 15, total;
		double avg;
		int* pa=&a, * pb=&b;
		int* pt = &total;
		double* pg = &avg;
		*pt = *pa + *pb;
		*pg = *pt / 2.0;
		printf("%d %d %d %.1lf", *pa, *pb, *pt, *pg);*/
		//int a, * pa;
		//pa = &a;
		//a = 10;
		//printf("%d %d", a, *pa);
		/*int a;
		double b;
		char c;
		printf("%p %p %p", &a, &b, &c);*/
		//8-2장
		/*char str[10];
		str[0] = 'C';
		str[2] = '\0';
		printf("%s", str);*/
		//char str[80];
		//printf("문자열 입력 : ");
		//gets(str);
		//printf("문자열 출력 : ");
		//puts(str);
		//char str1[80] = "hangook";
		//char str2[40];
		//strcpy(str1, "한국");
		//strcpy(str2, str1);
		//printf("%s %s", str1, str2);
		//int i;
		//int arr[5] = { 10,20,30,40 };
		//int size = sizeof(arr) / sizeof(arr[0]);
		//for (i = size-1; i >= 0; i--)
		//	printf("arr[%d]=%d\n", i, arr[i]);
		/*char str[80] = "applejam";
		printf("최초 문자열 : %s\n", str);
		printf("문자열 입력 : ");
		scanf("%s", str);
		printf("입력 후 문자열 : %s\n", str);*/
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
	return;
}
