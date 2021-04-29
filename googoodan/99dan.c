#include <stdio.h>

int main()
{
	int dan, i;
	printf("출력하고 싶은 단 수를 입력하세요 : ");
	scanf("%d", &dan);
	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
}