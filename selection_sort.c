#include <stdio.h>


int main()
{
    int num, size, i=0;
    printf("Enter size of array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the number for the array, if complete ener -1 : ");
    scanf("%d", &num);
    while (num!=-1)
    {
        printf("Enter the number for the array, if complete ener -1 : ");
        scanf("%d", &num);
        arr[i] = num;
        printf("%d",i);
        i = i + 1;
    }
    for (i=0; i<size; i=i+1)
    {
        printf("%d", arr[i]);
    }

    return 0;
}