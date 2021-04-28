#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double weight,height,bmi;
	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%lf %lf", &weight, &height);
	bmi = weight / ((height / 100.0) * (height/100.0 ));
	((bmi >= 20.0) && (bmi <= 25.0))
		? printf("표준입니다%lf",bmi) 
		: printf("체중관리가 필요합니다%lf",bmi);
	return 0;
}