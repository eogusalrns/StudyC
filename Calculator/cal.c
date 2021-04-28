#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	//ver 2.0
	int x, y, res;
	char op;
	printf("»çÄ¢¿¬»ê ÀÔ·Â(Á¤¼ö) : ");
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
	printf("%d%c%d=%d\n", x, op,y, res);
	/* ver1.0
	int x, y;
	printf("µÎ °ªÀ» ÀÔ·ÂÇÏ¼¼¿ä : ");
	scanf("%d %d", &x, &y);
	int plus, minus, multiple, divide;
	plus = x + y;
	minus = x - y;
	multiple = x * y;
	divide = x / y;
	printf("µ¡¼À : %d, »¬¼À : %d, °ö¼À : %d, ³ª´°¼À : %d\n", plus, minus, multiple, divide);*/
}
