#include <stdio.h>
//#include <ctype.h>
int main(void) {
	int i, cnt = 0;
	char str[20];
	printf("���� �Է� : ");
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
	printf("�ٲ� ���� : %s\n", str);
	printf("�ٲ� ���� �� : %d\n", cnt);
}