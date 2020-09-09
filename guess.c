#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,n_guess=1;
    srand(time(0));
    number = rand()%100 + 1;
    //printf("The number is %d\n",number);

    do{
        printf("Guess the number between 1 and 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number please\n");
        }
        else if(guess<number){
            printf("higher number please\n");
        }
        else{
            printf("you guessed it in %d attemts\n",n_guess);
        }
        n_guess++;
    }while(guess!=number);
    return 0;
}