#include <stdio.h>
#include <stdlib.h>
void s(void);
void a(void);
int main()

{
	printf("first call to each function:\n");
	s();
	a();

	printf("\n\nsecond call to each function:\n");
	s();
	a();
	printf("\n");
	return 0;
}
void s(void)
{
	static int array1[3];
	int i;
	printf("\nvalues on entering staticarrayinit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d	", i, array1[i]);

	printf("\nvalues on exiting staticarrayinit:\n");
	for (i = 0; i <= 2; i++)
		printf("array1[%d] = %d	", i, array1[i] += 5);
}
void a(void)
{
	int array2[3] = { 1,2,3 };
	int i;
	printf("\n\nvalues on entering automicarrayinit:\n");
	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d	", i, array2[i]);

	printf("\nvalues on exiting automicarrayinit:\n");
	for (i = 0; i <= 2; i++)
		printf("array2[%d] = %d ", i, array2[i] += 5);
}

