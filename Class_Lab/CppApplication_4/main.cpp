/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on February 1, 2015, 10:47 PM
 * Purpose: Project 1 , Sliding Puzzle
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iomanip>
#include <fstream>

using namespace std;
//User Libraries
//Global constants
const int COL=4;
//Function prototypes
void arySet(int [4][COL]);
void prntBrd(int [4][COL]);
bool moveNum(int [4][COL], int);
bool gameWon(int [4][COL], int [4][COL]);
int bot(int [4][COL]);

int main(int argc, char** argv) {
    //seed random number
    srand(static_cast<unsigned int>(time(0)));
    //file 
    ofstream scores;

    //declare variables
        
    bool moveOk = false, won = true;
    int board[4][COL] = {0}, move = 0,sChoice = 0;
    int winBoard[4][COL] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};
    unsigned short moves = 0;
    cout<<"Press 1 to begin playing Sliding Puzzle or 2 to view winning puzzle"<<endl;
    cin>> sChoice;
    switch(sChoice) {
            case 1: cout<<"Good Luck" << endl; 
            break;
        case 2: cout << "Winning Board:" << endl; prntBrd(winBoard); 
            cout << "Your board:" << endl; 
            break;
    }
    //create board
    arySet(board);
    

    do {
        prntBrd(board);
        //do loop so if invalid move entered can enter another move
        do {
            cout<<"Enter the number you would like to have moved: "<<endl;
            cin>>move;
            moveOk = moveNum(board, move);
            if (moveOk==false) cout<<"Number must be next to empty square."<<endl;
        }while (moveOk==false);
        cout<<bot(board);
        moves++;
        won = gameWon(board, winBoard);
    } while (won==false);


    if (won==true) cout<<"WON in "<<moves<<" moves.";
    //add score to hscore file
    scores.open("hscores.dat");
    scores <<moves<<" moves.";
    scores.close();
    return 0;
}
void arySet(int table[4][COL]){
    for (int count = 0; count != 15; count++){
        int x = 0, y = 0;
        do{
            x = rand()%4;
            y = rand()%4;
        }while (table[x][y] != 0); //getting a box without value entered yet
        //cout<<x<<","<<y<<"   "<<endl;
        table[x][y] = count + 1;
    }
}
void prntBrd(int t[4][COL]){
    for(int row = 0, rowPrnt = 0; row!=9; row++){
        if (row % 2 == 0){ //every other row (the ones without numbers))
                cout<<"■■■■■■■■■■■■■■■■■■■■■■■";
        }
        else { 
            for(int col = 0; col!=4; col++) {
                if (t[rowPrnt][col] == 0){
                    cout<< setw(3)<< " "<< " ▐ ";
                }
                else {
                    cout<< setw(3)<< t[rowPrnt][col]<< " ▐ ";
                }
            }
            rowPrnt++;
        }
        cout<<endl;
    }
}
bool moveNum(int t[4][COL], int moveNum){
    int xNum = 0, yNum = 0, xZero = 0, yZero = 0,temp = 0;
    //cout<<t [2][2]<<endl;
    while (t[xNum][yNum] != moveNum) {
        for (int i = 0; i != 4; i++) {
            if (t[xNum][i] == moveNum) {
                yNum = i;
                xNum--;
            }
        }
        xNum++;
    }
    //checking if valid move, as in 0 left/right or up/down to it
    if (xNum - 1 >= 0 && t[xNum-1][yNum] == 0) {
        xZero = xNum - 1;
        yZero = yNum;
    }
    else if (xNum + 1 <= 3 && t[xNum+1][yNum] == 0) {
        xZero = xNum + 1;
        yZero = yNum;
    }
    else if (yNum - 1 >= 0 && t[xNum][yNum-1] == 0) {
        xZero = xNum;
        yZero = yNum - 1;
    }
    else if (yNum + 1 <= 3 && t[xNum][yNum+1] == 0) {
        xZero = xNum;
        yZero = yNum + 1;
    }
    else return false;
    //cout<<xNum<<"  "<<yNum<<endl;
    //move number positions
    t[xNum][yNum] = 0;
    t[xZero][yZero] = moveNum;
    
    return true;
}
bool gameWon(int t[4][COL], int win[4][COL]){
    for (int x = 0; x != 4; x++){
        for (int y = 0; y != 4; y++){
            if (t[x][y] != win[x][y]) return false;
        }
    }
    return true;
}
int bot (int t[4][COL]) {
    int x = 0, y = 0, toBeMoved = 0;
    int choiceNumbers [] = {0,0,0,0};
    for (int i = 0; i != 4; i++){
        //cout<<x<<endl;
        for (int j = 0; j != 4; j++) {
            if (t[i][j] == 0){
                x=i;
                y=j;
            } 
        }
    }
    if (x > 0) choiceNumbers[0] = t[x-1][y];
    if (x < 3) choiceNumbers[1] = t[x+1][y];
    if (y > 0) choiceNumbers[2] = t[x][y-1];
    if (y < 3) choiceNumbers[3] = t[x][y+1];
    
    cout<<x<<"  "<<y<<" :: "<<choiceNumbers[0]<<choiceNumbers[1]<<choiceNumbers[2]
            <<choiceNumbers[3]<<endl;
    do {
        toBeMoved = choiceNumbers[rand()%4];
        
    } while (toBeMoved == 0);
    return toBeMoved;
}