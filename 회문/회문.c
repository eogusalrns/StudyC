#include <stdio.h>

int main()
{
	int i,cnt;
	char ch[100];
	//madam strlen �ձ��� �ڱ��� ��Į�ڸ��� üũ
	printf("�ܾ �Է��ϼ��� : ");
	scanf("%s", &ch);
	cnt = strlen(ch);
	int check;
	//printf("%d", cnt);
	for (i = 0; i < cnt/2; i++)
	{
		if (ch[i] != ch[cnt - i -1])
		{
			check = 0;
			break;
		}
		else
			check = 1;
	}
	if (check==0)
		printf("ȸ���� �ƴմϴ�.\n");
	else
		printf("�Է��� �ܾ�� ȸ���Դϴ�.\n");
}