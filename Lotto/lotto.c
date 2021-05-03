#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int* lotto_nums)
{
	int num,dup;
	int i,j;
	for (i = 0; i < 6; i++)
	{
		printf("��ȣ �Է� : ");
		scanf("%d", &num);
		dup = 0;
		for (j = 0; j < i; j++)
		{
			if (num == lotto_nums[j])
			{
				dup = 1;
				break;
			}
		}

		if (!dup)
		{
			lotto_nums[i] = num;
		}
		else
		{
			printf("���� ��ȣ�� �ֽ��ϴ�!\n");
			i--;
		}
	}
}

void print_nums(int* lotto_nums)
{
	int i = 1;
	printf("�ζ� ��ȣ : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ",lotto_nums[i]);
	}
}
