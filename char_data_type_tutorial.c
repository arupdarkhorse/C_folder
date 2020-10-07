#include <stdio.h>

char capitalize(char ch)
{
    /* This function will capitalize the small letters */    
    if(ch>'a' && ch<'z')
    {
        ch = ch - 'a' + 'A';
    }

    return ch;

}
int main()
{
    char ch, temp;
    for(ch='A'; ch<'Z'; ch=ch+1)
    {
        printf("%c", ch);
    }
    ch = 'b';
    printf("Enter the character : ");
    scanf("%c", &temp);
    printf("The letter is : %c\n", temp);
    printf("capitalized char is : %c", capitalize(ch));

    /*return 0;*/
}