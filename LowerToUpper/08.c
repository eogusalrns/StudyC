#include <stdio.h>
//#include <ctype.h>
int main(void) {
	int i, cnt = 0;
	char str[20];
	printf("문장 입력 : ");
	gets(str);
	//int size = sizeof(str) / sizeof(str[0]);
	for (i = 0; str[i] !='\0'; i++)
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))//isupper(str[i])
		{
			str[i] += ('a' - 'A');//tolower(str[i])
			cnt += 1;
		}
	}
	printf("바뀐 문장 : %s\n", str);
	printf("바뀐 문자 수 : %d\n", cnt);
}