 #include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int uni[3]={1,2,3};

int valid_check(int x){
  if(x==1||x==2||x==3)
    return 1;
  return 0;
}

int winner(int x, int y){
  if(x==y)
    return 0;
  else if(x==1){
    if(y==2)
      return 1;
    else
      return 2;
  }
  else if(x==2){
    if(y==3)
      return 1;
    else
      return 2;
  }
  else if(x==3){
    if(y==1)
      return 1;
    else
      return 2;
  }
}

int print_winnerpp(int c){
  if(c==0)
    cout<<"The match is draw.";
  else if(c==1)
    cout<<"Player1 is the winner.";
  else if(c==2)
    cout<<"Player2 is the winner.";
  return 0;
}

int print_winnercp(int c){
  if(c==0)
    cout<<"The match is draw.";
  else if(c==1)
    cout<<"Player is the winner.";
  else if(c==2)
    cout<<"Computer is the winner.";
  return 0;
}

int main(){
  cout<<"\n\n\n\t\t\t\tWelcome to the game\n";
  cout<<"\t\tEnter the mod 1. Human vs Human 2. Human Vs computer\t\t";
  int choice;
  cin>>choice; // To enter the mode in which u want to play
  while(1){
    int check,player1,player2,player, a;    
    cout<<"Enter 1 for stone,\n 2 for scissor,\n 3 for paper\n";
    switch(choice){
      case 1: //HUMAN VS HUMAN
          //int player1, player2;
          cout<<"\t\tEnter the player1 and player2 choice:";
          cin>> player1 >> player2;
          if(!(valid_check(player1) && valid_check(player2))){
            cout<<"Enter valid input";
            break;
          }
          check = winner(player1,player2);
          print_winnerpp(check);
          break;
          
      case 2: //HUMAN VS COMPUTER
          a=rand()%3;
          //int player;
          cout<<"\t\tEnter the player choice:";
          cin>>player;
          if(!(valid_check(player) )){
            cout<<"Enter valid input";
            break;
          }
          check = winner(uni[a],player);
          cout<<"\t\t\tPlayer input: "<<player<<" Computer input: "<<uni[a];
          print_winnercp(check);
          break;
          
      default: cout<<"Please enter the right option";
           break;
    }
    cout<<"Enter Y to continue or any to exit:";
    char c;
    cin>>c;
    if(!(c=='Y'||c=='y'))
      break;
      
  }
}
