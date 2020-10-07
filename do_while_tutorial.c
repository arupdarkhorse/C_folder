#include <stdio.h>

/* do while loop */

int find_max_span()
{
    int p1, p2, len=1, max_len=1;
    printf("Enter the number : ");
    scanf("%d", &p1);
    p2 = p1;
    if (p1 !=1)
    {
        do
        {
            printf("Enter the number : ");
            scanf("%d", &p1);
            if (p1>p2)
            {
                len += 1;
            }
            else
            {
                if (max_len<len)
                {
                    max_len = len;
                }
                len = 1;
            }
            p2 = p1;
        }
        while(p1!=-1);
    }
    
    if (max_len<len)
    {
        max_len = len;
    }

    return max_len;
}

int main()
{
    int a;
    do 
    {
        printf("Enter the value of a : ");
        scanf("%d", &a);
        printf("The value of a is : %d\n", a);
    }
    while(a!=-1);
    printf("The maximum span is : %d\n", find_max_span());
    return 0;
}