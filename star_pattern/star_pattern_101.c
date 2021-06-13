#include <stdio.h>
#include <stdlib.h>

void number_pattern1(int l)
{
/*
1
2 3
4 5 6 
*/
    int i, j, temp = 1;
	for(i=0; i<l; i++)
	{
        for(j=0; j<=i; j++)
		{
            printf("%d ", temp);
			temp = temp + 1;
		}
		printf("\n");
	}
}

void right_descending_triangle(int l)
{
/*
  *
  **
  ***
*/
    int i, j;
	for(i=0; i<l; i++)
	{
        for(j=0; j<=i; j++)
		{
            printf("*");
		}
		printf("\n");
	}
	printf("\n");
}

void right_ascending_triangle(int l)
{
/*
  ***
  **
  *
*/
    int i, j;
	for(i=0; i<l; i++)
	{
        for(j=l; j>i; j--)
		{
            printf("*");
		}
		printf("\n");
	}
	printf("\n");
}

void left_ascending_triangle(int l)
{
/*
  ****
   ***
    **
     *
*/
    int i, j;
    for(i=0; i<l; i++)
    {
        for(j=0; j<l; j++)
	    {
            if ((i+j)<l)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
	    }
        printf("\n");
    }
    printf("\n");
}


void left_descending_triangle(int l)
{
/*
     *
    **
   ***
  ****
*/
    int i, j;
    for(i=0; i<l; i++)
    {
        for(j=l-1; j>=0; j--)
            {
			/* This can be done using i+j>l */
                if(j>i)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
	    printf("\n");
    }
    printf("\n");
}



int main()
{
    int l, b;
	printf("Enter pattern length: ");
    scanf("%d", &l);
	/*printf("Enter pattern breadth: ");
	#scanf("%d", &b);*/
    right_descending_triangle(l);
    right_ascending_triangle(l);
	left_ascending_triangle(l);
    left_descending_triangle(l);
    number_pattern1(l);

    return 0;
	
}
