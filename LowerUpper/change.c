#include <stdio.h>

int main()
{
	char ch;
	printf("���ĺ� �ϳ��� �Է��ϼ��� : ");
	scanf("%c", &ch);
	if ((ch >= 'A') && (ch <= 'Z'))
		ch += 'a' - 'A';//�빮��->�ҹ���
	else
		ch -= 'a' - 'A';//�ҹ���->�빮��
	printf("%c", ch);
}