#include <stdio.h>

int main()
{
	int num, i, j, cnt = 0;
	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &num);
	for (i = 2; i < num; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			printf("%d ", i);
			cnt++;
		}
		if (cnt == 5)
		{
			printf("\n");
			cnt = 0;
		}
	}
}