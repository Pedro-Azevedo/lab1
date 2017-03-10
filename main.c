#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    int teste;
    /*Pedir número e teste scanf*/
    printf("Enter a character:\n");
    teste= scanf("%c", &ch);
    if (teste!=1)
    {
        printf("\nError: Please insert a valid character\n");
    }
    else
    {
        if(ch<='9' && ch>='0')
            printf("\nThe character is a number\n");
        else if((ch<='Z' &&ch>='A') || (ch<='z' &&ch>='a'))
        {
            printf("\nThe character is a letter\n");
            if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
                printf("It is a vowel\n");
            else
            {
                printf("It is a consonant\n");
                if (ch<='Z' && ch>='B')
                    printf("And it's uppercase\n");
                else
                    printf("And it is lowercase\n");
            }
        }
        else
            printf("\nThe character is a special character\n");
    }
    return EXIT_SUCCESS;
}
