#include<stdio.h>
#include<conio.h>

char square[10]={'o','1','2','3','4','5','6','7','8','9'};

int checkwin(){
    if(square[1]==square[2] && square[2]==square[3]){
        return 1;
    }
    else if(square[4]==square[5] && square[5]==square[6]){
        return 1;
    }
    else if(square[7]==square[8] && square[8]==square[9]){
        return 1;
    }
    else if(square[1]==square[4] && square[4]==square[7]){
        return 1;
    }
    else if(square[2]==square[5] && square[5]==square[8]){
        return 1;
    }
    else if(square[3]==square[6] && square[6]==square[9]){
        return 1;
    }
    else if(square[1]==square[5] && square[5]==square[9]){
        return 1;
    }
    else if(square[3]==square[5] && square[5]==square[7]){
        return 1;
    }
    else if(square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9'){
        return 0;
    }
    else{
        return -1;
    }
}

void board(){
    system("cls");
    printf("\n\nTIC TAC TOE\n\n");

    printf("player1(X)  -  player2(O)\n\n");

    printf("    |   |   \n");

    printf(" %C  | %c     | %c    \n",square[1],square[2],square[3]);
    printf("____|_______|_______\n");
    printf("    |       |        \n");
    printf(" %C  | %c     | %c    \n",square[4],square[5],square[6]);
    printf("____|_______|_______\n");
    printf("    |       |        \n");
    printf(" %C  | %c     | %c    \n",square[7],square[8],square[9]);
    printf("____|_______|_______\n");
    printf("    |       |        \n");

}

int main(){
    int player=1;
    int i,choice;
    char mark;
    
    do{
        board();
        player=(player%2==1)?1:2;
        printf("player%d enter your choice",player);
        scanf("%d",&choice);
        mark = (player==1)?'X':'O';
        if(choice==1 && square[1]=='1'){
            square[choice]=mark;
        }
        else if(choice==2 && square[2]=='2' ){
            square[choice]=mark;
        }
        else if(choice==3 && square[3]=='3' ){
            square[choice]=mark;
        }
        else if(choice==4 && square[4]=='4' ){
            square[choice]=mark;
        }
        else if(choice==5 && square[5]=='5' ){
            square[choice]=mark;
        }
        else if(choice==6 && square[6]=='6' ){
            square[choice]=mark;
        }
        else if(choice==7 && square[7]=='7' ){
            square[choice]=mark;
        }
        else if(choice==8 && square[8]=='8' ){
            square[choice]=mark;
        }
        else if(choice==9 && square[9]=='9' ){
            square[choice]=mark;
        }
        else{
            printf("invalid move\n");
            player--;
            getch();
        }
        i=checkwin();
        player++;

    }while(i==-1);

    board();

    if(i==1){
        printf("player%d has won\n",--player);
    }
    else{
        printf("the game is drawn\n");
    }

    getch();
    return 0;
}