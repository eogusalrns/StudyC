#include <stdio.h>
void swap(int, int);
int main(void) 
{
	int a = 10, b = 20;
	swap(a, b);
}
//�����ͽ���� return���δ� �� ���� ���� ��ȯ��
void swap(int x, int y)
{
	printf("���� ���� �� a : %d, b : %d\n", x, y);
	int temp = x;
	x = y;
	y = temp;
	printf("���� ���� �� a : %d, b : %d\n", x, y);
}