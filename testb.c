#include <stdio.h>

int main(void)
{
    int a[3][2] = {10, 20, 30, 40, 50, 60};
	int *(p)[2] = a;

	printf("%d", *(*(p+2) + 1));

	return 0;
}
