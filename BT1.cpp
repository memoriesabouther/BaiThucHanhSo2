#include <stdio.h>

int chiaHetCho7(int n)
{
	return (n % 7 == 0);
}

void inBoi7HaiChuSo()
{
	int i;
	for (i = 10; i <= 99; i++)
	{
		if (chiaHetCho7(i))
		{
			printf("%d ", i);
		}
	}
}

int main()
{
	inBoi7HaiChuSo();
	return 0;
}