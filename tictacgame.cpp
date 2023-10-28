

// CODE FOR TIC TAC GAME 
#include <bits/stdc++.h>  
// THIS bits/stdc++.h library contains all other libraries ,all libraries gave below
//#include<stdlib.h>
//#include<iostream>
//#include<math.h>
//#include<string>
using namespace std;
//ARRAY FOR THE BOARD
char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
//GLOBAL VARIABLE
int choice;
int row,column;
char turn = 'X';
bool draw = false;

void display_board()
{

    //BOARD

    
    cout<<"     |     |     \n";
    cout<< board[0][0]<<"    | "<<board[0][1]<<"   |  "<<board[0][2]<<endl;
    cout<<"____ |_____|_____\n";
    cout<<"     |     |     \n";
    cout<< board[1][0]<<"    | "<<board[1][1]<<"   |  "<<board[1][2]<<endl;
    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";
    cout<<board[2][0]<<"   | "<<board[2][1]<<"     |  "<<board[2][2]<<endl;
    cout<<"     |     |     \n";
}



void player_turn(){
    if(turn == 'X')
    {
        cout<<"player one turn ";
    }
    else if(turn == 'O')
    {
        cout<<"player 2 turn: ";
    }
    //TAKING INPUT FROM USER

    cin>> choice;

    //switch case 

    switch(choice){
        case 1:
         row=0; column=0; 
         break;
        case 2: 
        row=0; column=1;
         break;
        case 3:
         row=0; column=2; 
         break;
        case 4: 
        row=1; column=0; 
        break;
        case 5: 
        row=1; column=1;
         break;
        case 6: 
        row=1; column=2; 
        break;
        case 7: 
        row=2; column=0;
         break;
        case 8: 
        row=2; column=1;
         break;
        case 9: 
        row=2; column=2; 
        break;
        default:
            cout<<"Invalid Move";
    }

    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
    {
        
        //POSITION REMOVED BY X 
        board[row][column] = 'X';
        turn = 'O';
    }
    else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O'){
        
        //POSITION REMOVED BY 0
        board[row][column] = 'O';
        turn = 'X';
    }
    else 
    {
        //IF ALL POSITIONS ARE ALREADY FILLED
        cout<<"Box already has benn filled"<<endl;
        player_turn();
    }
    /* Ends */
    display_board();
}



bool gameover(){
    //checking the win for Simple Rows and Simple Column
    for(int i=0; i<3; i++)
    {
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
    return false;

    //checking the win for both diagonal

    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;
    }

    
    for(int i=0; i<3; i++)
    {
    for(int j=0; j<3; j++)
    if(board[i][j] != 'X' && board[i][j] != 'O')
    return true;
    }

    
    draw = true;
    return false;
}

/// MAIN FUNCTION WHERE WE CALL ALL THE FUNCTION

int main()
{
    string player1,player2;
    cout<<"LET'S PLAY TIC TAC GAME "<<endl;
    cout<<"enter name of the first player"<<endl;
    cin>>player1;
    cout<<"enter name of the second player"<<endl;
    cin>>player2;
    while(gameover()){
        display_board();
        player_turn();
        gameover();
    }
    if(turn == 'X' && draw == false)
    {
        cout<<"congratulations:"<<player1<<"won the game"<<endl;
    }
    else if(turn == 'O' && draw == false)
    {
        cout<<"congratulations:"<<player2<< "won the game"<<endl;
    }
    else
    {
    cout<<"game has been drawn"<<endl;
    }
} 