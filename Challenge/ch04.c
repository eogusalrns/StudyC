#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double weight,height,bmi;
	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%lf %lf", &weight, &height);
	bmi = weight / ((height / 100.0) * (height/100.0 ));
	((bmi >= 20.0) && (bmi <= 25.0))
		? printf("ǥ���Դϴ�%lf",bmi) 
		: printf("ü�߰����� �ʿ��մϴ�%lf",bmi);
	return 0;
}