#include <stdio.h>

int main()
{
	int dan, i;
	printf("����ϰ� ���� �� ���� �Է��ϼ��� : ");
	scanf("%d", &dan);
	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
}