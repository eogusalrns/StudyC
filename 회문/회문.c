#include <stdio.h>

int main()
{
	int i,cnt;
	char ch[100];
	//madam strlen 앞글자 뒤글자 데칼코마니 체크
	printf("단어를 입력하세요 : ");
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
		printf("회문이 아닙니다.\n");
	else
		printf("입력한 단어는 회문입니다.\n");
}