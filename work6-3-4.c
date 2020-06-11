#include <stdio.h>

int suhsu(int n);

int main(void)
{
	int num, temp;
	for(temp = 2; temp <= 100; temp++)
	{
		num = suhsu(temp);
		num==1?printf("%d ", temp):0;
	}

	return 0;
}

int suhsu(int n)
{
	int temp;

	for(temp = n-1; temp>=2; temp--)
	{
		if(0 == n%temp)
			return 0;
	}

	return 1;
}