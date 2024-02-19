#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 1; c < 10; c++)
			{
				int h = 0;
				int e = 0;
				h = 100 * a + 10 * b + c;
				e = 100 * c + 10 * b + a;
				if (h + e == 1333)
				{
					printf("%d %d %d \n", a, b, c);
				}
			}
		}
	}


	return 0;
}