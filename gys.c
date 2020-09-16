#include <stdio.h>

int main(void)
{
	int num1, num2, i, temp;

	scanf("%d %d", &num1, &num2);
	if(num1 > num2)
		temp = num2;
	else
		temp = num1;

	for(i = temp;i >= 1;i--)
	{
		if(num1%i==0 && num2%i==0)
			break;
	}

	printf("\n%d", i);

	return 0;
}