#include <stdio.h>

int main (void)
{
	int temp, num[10] = {0}, count = 0;

	for(temp = 0; temp < 10; temp++)
		scanf("%d", &num[temp]);

	printf("'3' is number: ");

	for(temp = 0; temp < 10; temp++)
		if(num[temp] == 3)
		{
			printf("%d ", temp+1);
			count += 1;
		}

	if(count == 0)
		printf("NOT FOUND '3'!");
	return 0;
}