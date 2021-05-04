#include <stdio.h>

int main()
{
	char ch;
	printf("알파벳 하나를 입력하세요 : ");
	scanf("%c", &ch);
	if ((ch >= 'A') && (ch <= 'Z'))
		ch += 'a' - 'A';//대문자->소문자
	else
		ch -= 'a' - 'A';//소문자->대문자
	printf("%c", ch);
}