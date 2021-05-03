#include <stdio.h>

input_ary(int *pa);
swap_ary(int*pa,int size);//포인터 두개로 굳이?
print_ary(int*pa);

int main()
{
	int ary[10];
	int* pa = ary;
	input_ary(pa);
	print_ary(pa);
	swap_ary(pa,10);
	print_ary(pa);
	return;
}

input_ary(int *pa)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", pa+i);
	}
}

swap_ary(int*pa,int size)
{
	int i,temp;
	for (i = 0; i < size/2; i++)
	{
		temp = pa[i];
		pa[i] = pa[(size-1) - i];
		pa[(size-1) - i] = temp;
	}
}

print_ary(int * pa)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", pa[i]);
	}
	printf("\n");
}
