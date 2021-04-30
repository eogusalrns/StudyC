#include <stdio.h>
void swap(int, int);
int main(void) 
{
	int a = 10, b = 20;
	swap(a, b);
}
//포인터써야함 return으로는 한 가지 값만 반환됨
void swap(int x, int y)
{
	printf("스왑 진행 전 a : %d, b : %d\n", x, y);
	int temp = x;
	x = y;
	y = temp;
	printf("스왑 진행 후 a : %d, b : %d\n", x, y);
}