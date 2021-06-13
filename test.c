#include <stdio.h>

int main()
{
    int a = 10;
	int *p, *q;
	p = &a;
	printf("%d", *p);
	&q = a;
	printf("%d\n", *q);
    printf("%p ", q);
    return 0;
}
