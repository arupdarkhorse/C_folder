#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
	int breadth;
};
/* passing array as parameter and change values inside it */
void point_func(int a[], int n)
{
    int i;
	printf("Enter elements: ");
    for(i=0; i<n; i++)
	{
        scanf("%d", &a[i]);
	}

}

/* passing array as parameter and return array */
int *fun(int n)
{
    int *arr;
	arr = (int *) malloc(n*sizeof(int));
	printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
	{
        scanf("%d", arr+i);
	}

	return arr;
}

int main()
{
    struct Rectangle *p;
	p = (struct Rectangle*) malloc(sizeof(struct Rectangle));
	(*p).length = 10; /* both will work */
	p->breadth = 5;

	printf("length : %d breadth : %d\n",p->length, p->breadth);
    free(p);
    
	/* using fun to return address from function */
	int *a, i;
	a = fun(5);
	printf("The elements of the arrays are : ");
    for(i=0; i<5; i++)
	{
        printf("%d ",*(a+i));
	}
	printf("\n");
    
	/* using point_func to manipulate array */
	point_func(a, 5);
	printf("The new elements are: ");
	for(i=0; i<5; i++)
	{
        printf("%d ",a[i]);
	}
	printf("\n");
    free(a);

	return 0;
}
