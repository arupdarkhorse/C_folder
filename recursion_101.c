#include <stdio.h>
#include <stdlib.h>


/* another efficient approach by breaking the formula ncr = n*n-1*n-2--n-r / r! */
int binomial_coeff(int n, int r)
{
    int result=1;
	if (n-r<r)
	{
	    r = n-r;
	}
	for(int i=0; i<r; i++)
	{
        result = result * (n-i);
		result = result/(i+1);
	}

	return result;
}

int find_combination(int n, int r)
{
    printf("n value inside : %d, r value : %d\n", n, r);
	if(r>n)
	{
		return 0;\
	}
    if(r==0 || r==n)
	{
		return 1;
	}
	else
	{ return find_combination(n-1, r-1)+find_combination(n-1, r); }
}


int main()
{
    int n=5, r=3, result;
	result = binomial_coeff(n,r);
	printf("n = %d, r = %d, result : %d\n", n, r, result);

    return 0;
}
