#include <stdio.h>
void cal_stu(int(*)[4], int* sum, double* avg);
void cal_cour(int(*)[4],char** course);
int main()
{
	int arr[5][4];
	char* course[4] = { "����","����","����","ü��" };
	int i, j;
	int stu_sum[5] = { 0 };
	double stu_avg[5] = { 0 }, course_avg = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d��° �л��� ����, ����, ����, ü�� ������ �Է��ϼ��� : ", i + 1);
		for (j = 0; j < 4; j++)
			scanf("%d", &arr[i][j]);
	}
	printf("-----------------------------------\n");
	cal_stu(arr, stu_sum, stu_avg);
	printf("-----------------------------------\n");
	cal_cour(arr, course);
}

void cal_stu(int(*p)[4], int* sum, double* avg)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			sum[i] += p[i][j];
		}
		avg[i] = sum[i] / 4.0;
		printf("%d��° �л��� ���� : %d ��� : %.1lf\n", i + 1, sum[i], avg[i]);
	}
}

void cal_cour(int (*p)[4],char** course)
{
	int i,j;
	for (i = 0; i < 4; i++)
	{
		int course_sum = 0;
		for (j = 0; j < 5; j++)
		{
			course_sum += p[j][i];
		}
		double course_avg = course_sum / 5.0;
		printf("%s ������ ���� : %d ��� : %.1lf\n", *&course[i], course_sum, course_avg);
	}
}
