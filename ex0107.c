#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row;
    char col;
    int testrow, testcol;
    /*Linha do tabuleiro*/
    printf("Insert a row of the chessboard(a number from 1 to 8:\n");
    testrow=scanf("%d", &row);
    if(testrow!=1 || (row>8 || row<1))
        printf("Error: Please insert a number in the range from 1 to 8\n");
    else
    {
        /*Coluna do tabuleiro*/
        printf("Insert a column of the chessboard(a lowercase letter from a to h:\n");
        testcol=scanf(" %c", &col);
        if(testcol!=1 || (col>'h' || col<'a'))
            printf("Error: Please insert a lowercase letter in the range from 'a' to 'h'\n");
        else
        {
            col=(int)(col-'a'+1);
            if((col%2==0 && row%2==0)||(col%2!=0 && row%2!=0))
                printf("The chosen square of the chessboard is black\n");
            else
                printf("The chosen square of the chessboard is white\n");
        }
    }

    return EXIT_SUCCESS;
}
