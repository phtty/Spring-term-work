#include <stdio.h>
#include <math.h>

double SeriesSum(float x, float n);

int main(void)
{
	float x = 29, n = 20, s;

	s = SeriesSum(x, n);
	printf("%.16lf", s);

	return 0;
}

double SeriesSum(float x, float n)
{
	double sum = 0;
	int factorial, tsum, temp;

	for(temp = 1; temp <= n; temp++)
	{
		factorial = 1;
		for(tsum = temp; tsum >= 0; tsum--)
		{
			if(tsum==0)
				break;
			factorial *= tsum;
		}
		sum += pow(x, temp) / factorial;
	}

	return sum + 1;
}