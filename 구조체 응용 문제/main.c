#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct employee
{
	int id;
	char* name;
	int salary;
}Employee;

int main()
{
	Employee list[5];
	
	int i,sum=0;
	double avg = 0;
	for (i = 0; i < 5; i++)
	{
		list[i].name = (char*)malloc(20);
		printf("%d��° ����� ���̵� �̸� �޿��� �Է��ϼ��� : ",i+1);
		scanf("%d %s %d", &list[i].id, list[i].name, &list[i].salary);
		sum += list[i].salary;
		free(list[i].name);
	}
	avg = sum / 5.0;
	printf("����� �޿� �Ѿ� : %d, ��� �޿��� : %.1lf", sum, avg);
}