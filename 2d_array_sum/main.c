#include <stdio.h>
void cal_stu(int(*)[4], int* sum, double* avg);
void cal_cour(int(*)[4],char** course);
int main()
{
	int arr[5][4];
	char* course[4] = { "국어","영어","수학","체육" };
	int i, j;
	int stu_sum[5] = { 0 };
	double stu_avg[5] = { 0 }, course_avg = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d번째 학생의 국어, 영어, 수학, 체육 점수를 입력하세요 : ", i + 1);
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
		printf("%d번째 학생의 총점 : %d 평균 : %.1lf\n", i + 1, sum[i], avg[i]);
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
		printf("%s 과목의 총점 : %d 평균 : %.1lf\n", *&course[i], course_sum, course_avg);
	}
}
