#include <stdio.h>

int main()
{
    int rowlen, collen, currint, colidx, rowidx = 0, rowsum, rowsumsq=0;
    printf("Enter the row and column length of matrix : ");
    scanf("%d%d", &rowlen, &collen);
    
    while(rowidx<collen)
    {
        rowsum = 0;
        colidx = 0;
        while (colidx<rowlen)
        {
            printf("Enter the numbers for the metrix : ");
            scanf("%d", &currint);
            colidx += 1;
            rowsum += currint;
        }
        printf("The row sum is : %d \n", rowsum);
        rowsumsq += rowsum * rowsum;
        rowidx += 1;
        
    }
    
    printf("The sum of numbers in matrix : %d\n", rowsumsq);

    return 0;
}