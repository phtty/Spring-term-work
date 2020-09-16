#include <stdio.h>

void myStrcpy(char *dest, const char *source)
{
	int i;
	for(i = 0;i<=32;i++)
	{
		*(dest+i) = *(source+i);
	}
}

int main(void)
{
	char str[] = "wabibabu";
	char rts[32];

	myStrcpy(rts, str);
	puts(rts);

	return 0;
}