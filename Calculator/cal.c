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
	while (ch == 'y') //���ѷ��� ���� ��� ctrl+c
	{
		printf("��Ģ���� �Է�(100������ ����)  : ");
		scanf("%d%c%d", &x, &op, &y);
		while (x > 100 && y > 100)//100�̻��� ���� ����ó��
		{
			printf("�ʹ� ū���� �Է��Ͽ����ϴ�.\n");
			printf("100������ ������ ��Ģ������ �Է��ϼ��� : ");
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
			printf("������ �� ���� �������Դϴ�.\n");
			continue;
		}
		printf("%d%c%d=%d\n", x, op, y, res);
		printf("�ٽ� �����Ͻðڽ��ϱ�? [y/n] ");
		scanf(" %c", &ch);//��ĭ �ٿ������(���۶���)
	}
	//calculator();
	//ver 3.0
	//int x, y, res;
	//char op, ch='y';
	//while (ch=='y') //���ѷ��� ���� ��� ctrl+c
	//{
	//	printf("��Ģ���� �Է�(����)  : ");
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
	//	printf("�ٽ� �����Ͻðڽ��ϱ�? [y/n] ");
	//	scanf(" %c", &ch);//��ĭ �ٿ������(���۶���)
	//}
	//ver 2.0
	/*int x, y, res;
	char op;
	printf("��Ģ���� �Է�(����) : ");
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
	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d", &x, &y);
	int plus, minus, multiple, divide;
	plus = x + y;
	minus = x - y;
	multiple = x * y;
	divide = x / y;
	printf("���� : %d, ���� : %d, ���� : %d, ������ : %d\n", plus, minus, multiple, divide);*/
}
