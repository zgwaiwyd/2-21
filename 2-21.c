#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;
	i = (i++) + (i++) + (i++);
	printf("%d\n", i);
	return 0;
}
