#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int LS(const int array[], int key, int size);
int main()
{
	int a[SIZE], x, sk, e;
	for (x = 0; x < SIZE; x++)
	{
		a[x] = 2 * x;
	}
	printf("enter integer SK:\n");
	scanf_s("%d", &sk);
	e = LS(a, sk, SIZE);
	if (e != -1)
	{
		printf("found value in element %d\n", e);
	}
	else
	{
		printf("value not found\n");
	}
	return 0;
}
int LS(const int array[], int key, int size)
{
	int n;
	for (n = 0; n < size; ++n)
	{
		if (array[n] == key)
		{
			return n;
		}
	}
	return -1;
}



