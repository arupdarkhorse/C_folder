#include <stdio.h>

int main()
{
    int maxchar, i;
    char current='\n', previous;

    printf("Enter the character in the editor : ");
    scanf("%d", &maxchar);
    getchar();

    for (i=0; i<maxchar; i++)
    {
        previous=current;
        current = getchar();
        if((current=='\n') && (previous=='\n'))
        {
            break;
        }
    }
    printf("%d\n", i);

    return 0;
}



