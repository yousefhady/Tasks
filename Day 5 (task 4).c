#include <stdio.h>

int main()
{
	int z= 77127, sum = 0;
	for (int i = 0; i < 5; i++)
	{
		if (z % 10 == 7)
		{
			sum += 1;
		}
		z /= 10;
	}
	printf("%d\n", sum);
}