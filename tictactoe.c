#include <stdio.h>
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int choice,player;
void displayboard();
void markboard(char mark);
int checkforWin();

int main(){
    int gamestatus;
    player=1;
 do {
    displayboard();
    player = (player % 2)?1:2;
    char mark = (player == 1)?'X': 'O';
 printf("PLAYER %d, please enter your choice :", player);
 scanf("%d", &choice);
 markboard(mark);
 gamestatus = checkforWin();
 player ++;

 } while (gamestatus ==-1);
 if(gamestatus==0){
    printf("==> GAME IS DRAWN <==\n");
 }
 if(gamestatus==1){
    printf("==> PLAYER %d is the winner <==", --player);
 }
 
 
 
 

}


int checkforWin(){
    int gameStatus = 0;
    if(square[1]==square[2] && square[2]==square[3]){
        gameStatus=1;
    }
    else if (square[4]==square[5] && square[5]==square[6])
    {
        gameStatus=1;
    }
     else if (square[7]==square[8] && square[8]==square[9])
    {
        gameStatus=1;
    }
     else if (square[1]==square[4] && square[4]==square[7])
    {
        gameStatus=1;
    }
     else if (square[2]==square[5] && square[5]==square[8])
    {
        gameStatus=1;
    }
     else if (square[3]==square[6] && square[6]==square[9])
    {
        gameStatus=1;}
     
      else if (square[1]==square[5] && square[5]==square[9])
    {
        gameStatus=1;
    }
     else if (square[3]==square[5] && square[5]==square[7])
    {
        gameStatus=1;
    }
    else if (square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9'){
        gameStatus=0;
    }
    else{
        gameStatus = -1;
    }
    
    return gameStatus;
    
}


void displayboard () {
    
    printf("\n\n\n");
    printf("\n\n\t TIC TAC TOE \n\n");
    printf("Player-1(X)---- Player-2(O)\n");
    printf("\t   |   |   \n");
    printf("\t %c | %c | %c \n", square[1], square[2], square[3]);
    printf("\t___|___|___\n");
     printf("\t   |   |   \n");
    printf("\t %c | %c | %c \n", square[4], square[5], square[6]);
    printf("\t___|___|___\n");
     printf("\t   |   |   \n");
    printf("\t %c | %c | %c \n", square[7], square[8], square[9]);
    printf("\t   |   |   \n");
}
void markboard(char mark){
    if(choice==1){
        square[1]=mark;
    }
     else if(choice==2){
        square[2]=mark;
    }
     else if(choice==3){
        square[3]=mark;
    }
     else if(choice==4){
        square[4]=mark;
    }
     else if(choice==5){
        square[5]=mark;
    }
     else if(choice==6){
        square[6]=mark;
    }
    else if(choice==7){
        square[7]=mark;
    }
   else  if(choice==8){
        square[8]=mark;
    }
else if(choice==9){
        square[9]=mark;
 
   }
   else{
    printf("\tINVALID MOVE\n" );
     player--;
   }
}

