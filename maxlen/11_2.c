#include <stdio.h>

int main()
{
	int len, max = 0;
	char ch;
	while (1)
	{
		ch = getchar();
		if (ch == -1)
			break;
		len = 0;
		while (ch != '\n')
		{
			len++;
			ch = getchar();
		}
		if (len > max)
			max = len;
	}
	printf("가장 긴 단어의 길이 : %d", max);
}