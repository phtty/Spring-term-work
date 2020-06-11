#include <stdio.h>

int com_num(int num);

int main(void)
{
	int i, num = 0;
	for(i=2;i<=1000;i++)
	{
		com_num(i)?printf("%d\n",com_num(i)):0;
	}

	return 0;
}

int com_num(int num)
{
	int count = 0, temp;
	for(temp=1;temp<num;temp++)
	{
		if(0 == num%temp)
			count+=temp;
	}
	return count==num?num:0;
}