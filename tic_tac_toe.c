#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void display(char position, char square[], char symbol)
{
    for (int i = 0; i < 9; i++)
    {
        if (square[i] == position)
        {
            square[i] = symbol;
        }
    }
    printf("  %c  |  %c  |  %c  \n", square[0], square[1], square[2]);
    printf("-----|-----|-----\n");

    printf("  %c  |  %c  |  %c  \n", square[3], square[4], square[5]);
    printf("-----|-----|-----\n");

    printf("  %c  |  %c  |  %c  \n", square[6], square[7], square[8]);
    printf("-----|-----|-----\n");
}

int board_full(char square[]){
    int count=0;
    for(int i=0;i<9;i++){
        if(square[i]=='x' || square[i]=='o'){
            count++;
        }
    }
    if(count==9){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    char square[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};

    printf("Tic Tac Toe game\n");
    printf("  %c  |  %c  |  %c  \n", square[0], square[1], square[2]);
    printf("-----|-----|-----\n");

    printf("  %c  |  %c  |  %c  \n", square[3], square[4], square[5]);
    printf("-----|-----|-----\n");

    printf("  %c  |  %c  |  %c  \n", square[6], square[7], square[8]);
    printf("-----|-----|-----\n");

    //int player1,player2;
    char symbol;
    char position;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number <= 50)
    {
        printf("Player1 gets the choice to play first \n");
    }
    else
    {
        printf("Player2 gets the choice to play first \n");
    }

    printf("Choose your symbol X or o and Enter the position where you want to place your symbol\n");
    scanf("%c %c", &symbol, &position);
    printf("The symbol chosen is %c and number chosen is %c\n", symbol, position);
    display(position, square, symbol);

    while (board_full(square))
    {
        printf("Choose your symbol X or o and Enter the position where you want to place your symbol\n");
        scanf("%c %c", &symbol, &position);
        printf("The symbol chosen is %c and number chosen is %c\n", symbol, position);
        display(position, square, symbol);
    }


    return 0;
}