#include <stdio.h>

void find_longest_sequence()
{
    int len=1, p1, p2, max_len=0;
    printf("Enter the number : ");
    scanf("%d", &p1);
    p2 = p1;
    while (p1!=-1)
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
    if (max_len<len)
    {
        max_len = len;
    }
    printf("The longest incresing sequence length is : %d \n", max_len);

}

int main()
{
    printf("Keep on entering the numbers for sequence, to stop the sequence press -1 \n");
    find_longest_sequence();

    return 0;
}
