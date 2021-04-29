#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int plus(int x,int y)
{
	return x + y;
}
int minus(int x, int y)
{
	return x - y;
}
int multiple(int x, int y)
{
	return x * y;
}
int divide(int x, int y)
{
	return x / y;
}
int main() 
{
	//ver 4.0
	int x, y, res;
	char op, ch = 'y';
	while (ch == 'y') //무한루프 강제 취소 ctrl+c
	{
		printf("사칙연산 입력(100이하의 정수)  : ");
		scanf("%d%c%d", &x, &op, &y);
		while (x > 100 && y > 100)//100이상의 정수 예외처리
		{
			printf("너무 큰수를 입력하였습니다.\n");
			printf("100이하의 정수로 사칙연산을 입력하세요 : ");
			scanf("%d%c%d", &x, &op, &y);
		}
		switch (op)
		{
		case '+':
			res=plus(x, y);
			//res = x + y;
			break;
		case '-':
			res=minus(x, y);
			//res = x - y;
			break;
		case '*':
			res=multiple(x, y);
			//res = x * y;
			break;
		case '/':
			res=divide(x, y);
			//res = x / y;
			break;
		default:
			printf("이해할 수 없는 연산자입니다.\n");
			continue;
		}
		printf("%d%c%d=%d\n", x, op, y, res);
		printf("다시 수행하시겠습니까? [y/n] ");
		scanf(" %c", &ch);//한칸 뛰워줘야함(버퍼때문)
	}
	//calculator();
	//ver 3.0
	//int x, y, res;
	//char op, ch='y';
	//while (ch=='y') //무한루프 강제 취소 ctrl+c
	//{
	//	printf("사칙연산 입력(정수)  : ");
	//	scanf("%d%c%d", &x, &op, &y);
	//	switch (op)
	//	{
	//	case '+':
	//		res = x + y;
	//		break;
	//	case '-':
	//		res = x - y;
	//		break;
	//	case '*':
	//		res = x * y;
	//		break;
	//	case '/':
	//		res = x / y;
	//		break;
	//	}
	//	printf("%d%c%d=%d\n", x, op, y, res);
	//	printf("다시 수행하시겠습니까? [y/n] ");
	//	scanf(" %c", &ch);//한칸 뛰워줘야함(버퍼때문)
	//}
	//ver 2.0
	/*int x, y, res;
	char op;
	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d", &x,&op,&y);
	switch (op) 
	{
	case '+':
		res = x + y;
		break;
	case '-':
		res = x - y;
		break;
	case '*':
		res = x * y;
		break;
	case '/':
		res = x / y;
		break;
	}
	printf("%d%c%d=%d\n", x, op,y, res);*/
	/* ver1.0
	int x, y;
	printf("두 값을 입력하세요 : ");
	scanf("%d %d", &x, &y);
	int plus, minus, multiple, divide;
	plus = x + y;
	minus = x - y;
	multiple = x * y;
	divide = x / y;
	printf("덧셈 : %d, 뺄셈 : %d, 곱셈 : %d, 나눗셈 : %d\n", plus, minus, multiple, divide);*/
}
