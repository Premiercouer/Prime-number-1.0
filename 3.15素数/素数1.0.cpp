#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i < 1000; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;
		}
		if (i == j)
		{
			printf("%d ", i);
			count++;
		}
	}

	printf("\ncount = %d", count);
	return 0;
}