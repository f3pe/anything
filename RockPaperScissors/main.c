#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//use line below to run in windows and coment the line above
//#include <windows.h>

void play();
void rules();

//main menu
int main(){
    printf("Wellcome, chosse an option \n");
    printf("1 - Play vs Computer\n");
    printf("2 - Read the rules\n");
    printf("3 - Exit\n");
    printf("=>");
    int op;
    scanf("%d", &op);
    switch(op){
        case 1:
            play();
            break;
        case 2:
            rules();
            break;
        case 3:
            return 0;
            break;
        default:
            printf("This is a invalid option, chose 1,2 or 3.");
    }
    return 0;
}

void rules(){
    printf("Rock paper scissors is an intransitive hand game, usually played between two people, in which each player simultaneously forms one of three shapes with an outstretched hand. These shapes are \"rock\", \"paper\", and \"scissors\". The earliest form of \"rock paper scissors\"-style game originated in China and was subsequently imported into Japan, where it reached its modern standardized form, before being spread throughout the world in the early 20th century. A simultaneous, zero-sum game, it has three possible outcomes: a draw, a win or a loss. A player who decides to play rock will beat another player who has chosen scissors, but will lose to one who has played paper; a play of paper will lose to a play of scissors. If both players choose the same shape, the game is tied and is usually replayed to break the tie. \n\n");
    printf("Use 1 for rock\n");
    printf("Use 2 for paper\n");
    printf("Use 3 for scissors\n\n");
    main();
}

void play(){
    printf("Select your option \n [1] - rock\n [2] - paper\n [3] - scissors\n=>");
    int player;
    scanf("%d", &player);
    int machine = (rand() % 3) + 1;
    char* names[3] = {"rock", "paper", "scissors"};//words to use in the loop for a litle animation
    for(int i = 0; i<3; i++){
        printf("%s \n", names[i]);
        sleep(1);
    }
    if (player == machine){
        printf("DREW!");
    }else if((player == 1 && machine==3) || (player==2 && machine==1) || (player==3 && machine==2)){
        printf("WON!");
    }else{
        printf("LOST!");
    }
    printf("\nTher computer chose ");
    switch(machine){
    case 1:
        printf("rock\n");
        break;
    case 2:
        printf("paper\n");
        break;
    case 3:
        printf("scissors\n");
        break;
    }
    printf(" \nPlay again?[Y/N]\n=>");
    char op;
    scanf(" %c", &op);
    if((op == 'y') || (op == 'Y'))play();
    else printf("Bye bye");
}
