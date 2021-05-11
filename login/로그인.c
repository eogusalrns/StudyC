#include <stdio.h>
//login폴더에 password.txt가 없었음 문제해결
typedef struct
{
	char id[10];
	char password[10];
}Login;

int main(void)
{
	Login admin;
	Login user;
	printf("아이디를 입력하세요 : ");
	gets(user.id);
	printf("비밀번호를 입력하세요 : ");
	gets(user.password);
	printf("사용자 정보 : %s %s\n", user.id, user.password);
	FILE* fp;
	int res;
	fp = fopen("password.txt", "r");
	if (fp == NULL)
	{
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}
	while (1)
	{
		res = fscanf(fp, "%s%s", admin.id, &admin.password);
		//printf("%s %s\n", admin.id, admin.password);
		if (res == EOF)
		{
			break;
		}
		
	}
	printf("관리자 정보 : %s %s\n", admin.id, admin.password);
	fclose(fp);
	if ((*admin.id == *user.id) && (*admin.password == *user.password))
		printf("로그인되었습니다.\n");
	else
		printf("id를 찾을 수 없습니다.\n");

	
}