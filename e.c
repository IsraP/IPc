#include <stdio.h>

void main(void)
{
	int p, d;
	p = 0;
	d = *(p++);
	printf("%d", d);
}