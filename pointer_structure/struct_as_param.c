#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
	int breadth;
};

/* call by value */
int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

/* call by address */
int changeLength(struct Rectangle *b, int n)
{
    b->length = n;
}

int main()
{
    struct Rectangle a={10, 5};
	printf("area = %d\n", area(a));
    changeLength(&a, 23);
	printf("new area = %d\n", area(a));

	return 0;
}
