#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // �������
#include <stdlib.h>
#include <string.h>
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
//	printf("assign �Լ� a : %d\n", a);
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
//	int a = 20;//��������
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
//	printf("�� ������ ���� �Է��ϼ��� : ");
//	scanf("%d%d", &a, &b);
//	res = fp(a, b);
//	printf("������� : %d\n", res);
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
int main() //���� �Լ� �� ������Ʈ�� �� ���� �����ؾ� ��
{
	//17-2��
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
	//	{"ȫ�浿1",222,"111","�︪�� ����"},
	//	{"ȫ�浿2",222,"111-","���� ����"},
	//	{"ȫ�浿3",2222,"111-1","�� ����"},
	//	{"ȫ�浿4",22222,"111-11","����"},
	//	{"ȫ�浿5",222222,"111-111","��"}
	//};
	//print_list(list);

	
	//struct score umi = { 90,80,70 };
	//struct score* ps = &umi;

	//printf("���� : %d ���� : %d ���� : %d ", (*ps).kor, ps->eng, ps->math);
	//17-1��
	//struct vision robot;
	//printf("�÷� �Է� : ");
	//scanf("%lf%lf", &(robot.left), &(robot.right));
	//robot = exchange(robot);
	//printf("�ٲ� �÷� : %.1lf %.1lf\n", robot.left, robot.right);
	//struct student s1 = { 315,"ȫ�浿",2.4 },
	//	s2 = { 316,"�̼���",3.7 },
	//	s3 = { 317,"�������",4.4 };

	//struct student max;

	//max = s1;
	//if (s2.grade > max.grade) max = s2;
	//if (s3.grade > max.grade) max = s3;

	//printf("�й� : %d �̸� : %s ���� : %.1lf\n", max.id, max.name, max.grade);
	//struct student yuni;
	//yuni.pf.age = 17;
	//yuni.pf.height = 170.0;
	//yuni.id = 315;
	//yuni.grade = 4.3;
	//printf("���� : %d\n", yuni.pf.age);
	//printf("Ű : %.1lf\n", yuni.pf.height);
	//printf("�й� : %d\n", yuni.id);
	//printf("���� : %.1lf\n", yuni.grade);
	//struct profile yuni;

	//strcpy(yuni.name, "�ִ���");
	//yuni.age = 26;
	//yuni.height = 170.0;

	//yuni.intro = (char*)malloc(80);
	//printf("�ڱ� �Ұ� : ");
	//gets(yuni.intro);

	//printf("�̸� : %s\n", yuni.name);
	//printf("���� : %d\n", yuni.age);
	//printf("Ű : %.1lf\n", yuni.height);
	//printf("�ڱ�Ұ� : %s\n", yuni.intro);

	//free(yuni.intro);
	/*struct student s1;
	s1.num = 2;
	s1.grade = 2.7;
	printf("�й� : %d %.1lf\n", s1.num, s1.grade);*/
	//16-2��
	//char temp[80];
	//char* str[21] = { 0 };
	//int i = 0;

	//while (i < 20)
	//{
	//	printf("���ڿ��� �Է��ϼ��� : ");
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
	//	printf("���ڿ��� �Է��ϼ��� : ");
	//	gets(temp);
	//	str[i] = (char*)malloc(strlen(temp) + 1);
	//	strcpy(str[i], temp);
	//}

	//for (i = 0; i < 3; i++)
	//{
	//	printf("%s\n", str[i]);
	//	free(str[i]);
	//}

	//16-1��
	/*int* pi;
	int size = 5, count = 0, num, i;

	pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("����� �Է��ϼ��� : ");
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
		printf("�޸𸮰� �����մϴ�.\n");
		exit(1);
	}
	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}
	printf("�ټ� ���� ��� ���� : %1.lf\n", (sum / 5.0));
	free(pi);*/
	//int* pi;
	//double* pd;

	//pi = (int*)malloc(sizeof(int));
	//pd = (double*)malloc(sizeof(double));

	//if ((pi == NULL) || (pd == NULL))
	//{
	//	printf("# �޸𸮰� �����մϴ�.\n");
	//	exit(1);
	//}
	//
	//*pi = 10;
	//*pd = 3.4;

	//printf("���������� ��� : %d\n", *pi);
	//printf("�Ǽ������� ��� : %.1lf\n", *pd);

	//free(pi);
	//free(pd);
	//15-2��
	//int a = 10;
	//double b = 3.5;
	//void* vp;
	//vp = &a;
	//printf("a : %d\n", *(int*)vp);
	//vp = &b;
	//printf("b : %.1lf\n", *(double *)vp);
	//int sel;
	//printf("01 �� ������ ��\n");
	//printf("02 �� ������ ��\n");
	//printf("03 �� ���� �߿��� ū �� ���\n");
	//printf("���ϴ� ����� �����ϼ��� : ");
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
	//15-1��
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
	printf("  ary�� �� : %u\t", ary);
	printf("  ary�� �ּ� : %u\n", &ary);
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
	//printf("����  ������   &����    *����    **����\n");
	//printf("a%10d%10u\n", a, &a);
	//printf("pi%10u%10u%10d\n", pi, &pi, *pi);
	//printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);

	//14-2��
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
		//14-1��
		/*int score[2][3][4] = {
			{{72,80,95,60},{68,98,83,90},{75,72,84,90}},
			{{64,85,90,88},{95,92,88,95},{43,72,56,75}}
		};
		int i, j, k;

		for (i = 0; i < 2; i++)
		{
			printf("%d�� ����...\n", i + 1);
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
		//	printf("%d��° ������ ���� �Է� : ", i+1);
		//	for (j = 0; j < 4; j++)
		//	{
		//		scanf("%d", &score[i][j]);
		//		total += score[i][j];
		//	}
		//	avg = total / 4.0;
		//	printf("%d ��° ������ ���� %d ��� %.2lf\n", i + 1, total, avg);
		//}
		//13-2��
		//int* resp;
		//resp = ssum(10, 20);
		//printf("�� ������ �� : %d\n", *resp);
		//int a = 10;
		//add_ten(&a);
		//printf("a : %d\n", a);
		//13-1��
		//register int i;
		//int sum = 0;
		//for (i = 1; i <= 10000; i++)
		//	sum += i;
		//printf("%d", sum);
		//int i;
		//printf("�Ϲ� ���� ����(auto)�� ����� �Լ�...\n");
		//for (i = 0; i < 3; i++)
		//	auto_func();
		//printf("���� ���� ����(static)�� ����� �Լ�...\n");
		//for (i = 0; i < 3; i++)
		//	static_func();
		//printf("a�� ȣ�� �� �� : %d\n", a);
		//assign10();
		//assign20();
		//printf("a�� ȣ�� �� �� : %d\n", a);
		//int a = 10, b = 20;
		//printf("��ȯ �� a�� b�� �� : %d,%d\n", a, b);
		//{
		//	int temp;
		//	temp = a;
		//	a = b;
		//	b = temp;
		//}
		//printf("��ȯ �� a�� b�� �� : %d,%d\n", a, b);
		//auto int a = 0;
		//assign();
		//printf("main �Լ� a : %d\n", a);
		//12-2��
		//char str[80] = "strawberry";
		//printf("�ٲٱ� �� ���ڿ� : %s\n", str);
		//my_strcpy(str, "apple");
		//printf("�ٲ� �� ���ڿ� : %s\n", str);
		//printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));
		//char str1[80] = "pear";
		//char str2[80] = "peach";

		//printf("������ ���߿� ������ ���� �̸� : ");

		//if (strncmp(str1, str2,3) == 0)
		//	printf("����");
		//else
		//	printf("�ٸ���");
		//char str1[80], str2[80];
		//char* resp;

		//printf("2���� ���� �̸� �Է� : ");
		//scanf("%s%s", str1, str2);
		//if (strlen(str1) > strlen(str2))
		//	resp = str1;
		//else
		//	resp = str2;
		//printf("�̸��� �� ������ : %s", resp);
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
		printf("���� ���ڿ� : %s\n", str1);
		strcpy(str1, str2);
		printf("�ٲ� ���ڿ� : %s\n", str1);

		strcpy(str1, ps1);
		printf("�ٲ� ���ڿ� : %s\n", str1);

		strcpy(str1, ps2);
		printf("�ٲ� ���ڿ� : %s\n", str1);

		strcpy(str1, "banana");
		printf("�ٲ� ���ڿ� : %s\n", str1);*/
		//12-1��
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

		printf("���� �Է� : ");
		scanf("%d", &age);
		fgetc(stdin);
		printf("�̸� �Է� : ");
		gets(name);
		printf("���� : %d, �̸� : %s", age, name);*/
		/*char str[80];
		printf("������ ���Ե� ���ڿ� �Է� : ");
		fgets(str, sizeof(str), stdin);
		printf("�Էµ� ���ڿ��� %s�Դϴ�.", str);*/
		//char str[80];

		//printf("������ ���Ե� ���ڿ� �Է� : ");
		//gets(str);
		//printf("�Է��� ���ڿ��� %s�Դϴ�.", str);
		//strlen(str);
		/*printf("���ڿ� �Է� : ");
		scanf("%s", str);
		printf("ù ��° �ܾ� : %s\n", str);
		scanf("%s", str);
		printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str);*/

		//char* dessert = "apple";
		//printf("���� �Ľ��� %s�Դϴ�.\n", dessert);
		//dessert = "banana";
		//printf("���� �Ľ��� %s�Դϴ�.\n", dessert);

		/*printf("apple �ּ� ���� �� : %p\n", "apple");
		printf("�ι�° ���� �ּ� �� : %p\n", "apple"+1);
		printf("ù��° ���� : %c\n", *"apple");
		printf("�ι�° ���� : %c\n", *("apple"+1));
		printf("�迭�� ǥ���� �� ��° ���� : %c", "apple"[2]);*/

		//11-2��
		//int num, grade;
		//printf("������ �Է��ϼ��� : ");
		//grade = getchar();
		//printf("�й��� �Է��ϼ��� : ");
		//scanf("%d", &num);
		////getchar();//���ۺ���ش�
		//fflush(stdin);
		//printf("�й� : %d, ���� : %c", num, grade);

		//char str[7];
		//my_gets(str, sizeof(str));
		//printf("�Է��� ���ڿ� : %s\n", str);
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
		//11-1��
		//int ch = getchar();
		//printf("�Է��� ���� : ");
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
		//10-2��
		/*double arr[5], max;
		int size = sizeof(arr) / sizeof(arr[0]);
		input_ary(arr, size);
		max = find_max(arr, size);
		printf("�迭�� �ִ� : %.1lf\n", max);*/
		//int arr1[5] = { 10,20,30,40,50 };
		//int arr2[7] = { 10,20,30,40,50,60,70 };
		//print_arr(arr1, 5);
		//print_arr(arr2, 7);
		//int arr[5] = { 10,20,30,40,50 };
		//print_arr(arr);
		//10-1��
		//int arr[5] = { 10,20,30,40,50 };
		//int* pa = arr;
		//int* pb = pa + 3;
		//printf("pa : %u, pb : %u\n", pa, pb);
		//pa++;
		//printf("pb - pa : %u\n", pb - pa);
		//printf("�տ� �ִ� �迭 ����� �� ��� : ");
		//if (pa < pb) printf("%d\n", *pa);
		//else printf("%d\n", *pb);
		//int arr[3] = { 10,20,30 };
		//int* pa = arr;
		//int i;
		//printf("�迭�� �� : ");
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
		//printf("�� ��° ��� Ű���� �Է� : ");
		//scanf("%d", arr + 2);
		//for (i = 0; i < 3; i++)
		//{
		//	printf("%5d", *(arr + i));
		//}

		//9-2��
		//int a = 10, b = 20;
		//int a = 10;
		//int* p = &a;
		//double* pd;
		//pd = p;
		//printf("%lf\n",*pd);
		/*char ch, * pc = &ch;
		int in, * pi = &in;
		double db, * pd = &db;
		printf("char int double ������ �ּ� ũ�� : %d %d %d\n", sizeof(&ch), sizeof(&in), sizeof(&db));
		printf("char int double * ������ ������ �ּ� ũ�� : %d %d %d\n", sizeof(pc), sizeof(pi), sizeof(pd));
		printf("char int double * ������ ������ ����Ű�� ���� ũ�� : %d %d %d\n", sizeof(*pc), sizeof(*pi), sizeof(*pd));*/
		//9-1��
		//int a = 10, b = 20;
		//const int* pa = &a;//����Ű�� �� ���� �Ұ�
		////*pa = 20;
		//double* const pb = &b;//����Ű�� �ּ� ���� �Ұ�
		////pb = &a;
		//printf("������ ũ��� int double : %d %d\n", sizeof(pa), sizeof(pb));
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
		//8-2��
		/*char str[10];
		str[0] = 'C';
		str[2] = '\0';
		printf("%s", str);*/
		//char str[80];
		//printf("���ڿ� �Է� : ");
		//gets(str);
		//printf("���ڿ� ��� : ");
		//puts(str);
		//char str1[80] = "hangook";
		//char str2[40];
		//strcpy(str1, "�ѱ�");
		//strcpy(str2, str1);
		//printf("%s %s", str1, str2);
		//int i;
		//int arr[5] = { 10,20,30,40 };
		//int size = sizeof(arr) / sizeof(arr[0]);
		//for (i = size-1; i >= 0; i--)
		//	printf("arr[%d]=%d\n", i, arr[i]);
		/*char str[80] = "applejam";
		printf("���� ���ڿ� : %s\n", str);
		printf("���ڿ� �Է� : ");
		scanf("%s", str);
		printf("�Է� �� ���ڿ� : %s\n", str);*/
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
	return;
}
