#include <stdio.h>
//login������ password.txt�� ������ �����ذ�
typedef struct
{
	char id[10];
	char password[10];
}Login;

int main(void)
{
	Login admin;
	Login user;
	printf("���̵� �Է��ϼ��� : ");
	gets(user.id);
	printf("��й�ȣ�� �Է��ϼ��� : ");
	gets(user.password);
	printf("����� ���� : %s %s\n", user.id, user.password);
	FILE* fp;
	int res;
	fp = fopen("password.txt", "r");
	if (fp == NULL)
	{
		printf("������ ������ ���߽��ϴ�.\n");
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
	printf("������ ���� : %s %s\n", admin.id, admin.password);
	fclose(fp);
	if ((*admin.id == *user.id) && (*admin.password == *user.password))
		printf("�α��εǾ����ϴ�.\n");
	else
		printf("id�� ã�� �� �����ϴ�.\n");

	
}