/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on February 1, 2015, 10:47 PM
 * Purpose: Project 2 , Sliding Puzzle pt.2
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>

using namespace std;
//User Libraries

//Global constants
const int DIMNSN=4; //dimnsn x dimnsn for table size


//Function prototypes

void arySet(int [DIMNSN][DIMNSN]);
void prntBrd(int [DIMNSN][DIMNSN]);
bool moveNum(int [DIMNSN][DIMNSN], int &,int [DIMNSN][DIMNSN], int &); //pass by reference
bool gameWon(int [DIMNSN][DIMNSN], int [DIMNSN][DIMNSN]);
int bot(int [DIMNSN][DIMNSN],int [DIMNSN][DIMNSN], int);
bool winSpot (int, int [DIMNSN][DIMNSN]);  //determines if the number is in winning spot
int distance (int [DIMNSN][DIMNSN], int [DIMNSN][DIMNSN], int, int = 0);
bool moveNumt(int [DIMNSN][DIMNSN], int &,int [DIMNSN][DIMNSN], int &);

//Execution begins here:
int main(int argc, char** argv) {
    //seed random number
    srand(static_cast<unsigned int>(time(0)));
    //file 
    fstream scores;

    //declare variables
        
    bool moveOk = false;
    bool won = true;
    char player = 'p';
    int board[DIMNSN][DIMNSN] = {0};
    int oldBoard[DIMNSN][DIMNSN] = {0};
    int move = 0,sChoice = 0;
    int winBoard[DIMNSN][DIMNSN] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};
    int prevMove = 0;
    unsigned int moves = 0;
    string line;
    
    //Introduction to game and rules overview
    cout << "Welcome to the game of sliding puzzle!" << endl;
    cout << "The object of the game is to get all the numbers on the board in"
            "order." << endl;
    cout << "The finished winning puzzle would look like this: " << endl;
    prntBrd(winBoard);
    cout << "The numbers start by being placed randomly on the board and using " << endl;
    cout << "the one empty space on the board you move the numbers to the " << endl;
    cout << "correct order, by moving the numbers in and out of the space." << endl;
    cout << "The only numbers that can be moved into the empty space are those" << endl;
    cout << "direct above and below or to the left and right of the empty space." << endl;
    
    
    cout<<"Press 1 to begin playing Sliding Puzzle or 2 to view previous scores."<<endl;
    cin>> sChoice;
    switch(sChoice) {
            case 1: cout<<"Good Luck" << endl; 
            break;
        case 2: scores.open("hscores.txt");
        while (getline (scores, line)){
            cout << line << '\n';
        }
            cout << scores;
            cout << "Your board:" << endl;
            scores.close();
            break;
        case 3: player = 'c';
        break;
    }
    //create board
    arySet(board);
    //cout<< winSpot(12);

    do {
        //prntBrd(oldBoard);
        prntBrd(board);
        if (player == 'p') {

        //do loop so if invalid move entered can enter another move
        do {
            cout<<"Enter the number you would like to have moved: "<<endl;
            cout << "Move: "<<moves<<endl;
            //auto play program that doesnt work 
            //move = bot(board,oldBoard,prevMove);
            cin >> move;
            moveOk = moveNum(board, move, oldBoard, prevMove);
            if (moveOk==false) cout<<"Number must be next to empty square."<<endl;
        }while (moveOk==false);
        }
        else {
            move = bot(board,oldBoard,prevMove);
            moveNum(board,move,oldBoard,prevMove);
        }
        moves++;
        if (moves%100000==1){
            prntBrd(board);
            cout<<moves<<endl;
        }
        won = gameWon(board, winBoard);
    } while (won==false);


    if (won==true) cout<<"WON in "<<moves<<" moves.";
    //add score to hscore file
    scores.open("hscores.txt");
    scores <<moves<<" moves.";
    scores.close();
    return 0;
}

//Creates a randomized array of numbers 1-15 and a 0 for the blank spot
void arySet(int table[DIMNSN][DIMNSN]){
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


void prntBrd(int t[DIMNSN][DIMNSN]){
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
bool moveNum(int t[DIMNSN][DIMNSN], int &moveNum, int oldt[DIMNSN][DIMNSN], int &prevMove){
    int xNum = 0, yNum = 0, xZero = 0, yZero = 0,temp = 0;
    //cout<<t [2][2]<<endl;
    
    //keep previous number from being played again
    //if (prevMove == moveNum) return false;
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
    
    //copying previous turn's board into another array
    for (int i = 0; i < 4; i++){
        for (int y = 0; y < 4; y++){
            oldt[i][y] = t[i][y];
    }
    }
  
    //cout<<xNum<<"  "<<yNum<<endl;
    //move number positions
    t[xNum][yNum] = 0;
    t[xZero][yZero] = moveNum;
    prevMove = moveNum;
    
    return true;
}
bool gameWon(int t[DIMNSN][DIMNSN], int win[DIMNSN][DIMNSN]){
    for (int x = 0; x != 4; x++){
        for (int y = 0; y != 4; y++){
            if (t[x][y] != win[x][y]) return false;
        }
    }
    return true;
}
int bot (int oldt[DIMNSN][DIMNSN],int t[DIMNSN][DIMNSN], int prevMove) {
    int x = 0, y = 0, toBeMoved = 0;
    int choiceNumbers [] = {};
    int borderNum [11] = {1,2,3,4,5,8,9,12,13,14,15};
    for (int i = 0; i != 4; i++){
        //cout<<x<<endl;
       
        //finding the spot of blank/0 in array
        for (int j = 0; j != 4; j++) {
            if (t[i][j] == 0){
                x=i;
                y=j;
            } 
        }
    }
    //checking if against box borders and not to try and move outside of it
    if ((x > 0) && t[x-1][y] != prevMove) choiceNumbers[0] = t[x-1][y];
    if ((x < 3) && t[x+1][y] != prevMove) choiceNumbers[1] = t[x+1][y];
    if ((y > 0) && t[x][y-1] != prevMove) choiceNumbers[2] = t[x][y-1];
    if ((y < 3) && t[x][y+1] != prevMove) choiceNumbers[3] = t[x][y+1];
    
    int choic;
    if (0<((distance(t,oldt,choiceNumbers[0],prevMove))<choic)) choic=0;
    if (0<((distance(t,oldt,choiceNumbers[1],prevMove))<choic)) choic=1;
    if (0<((distance(t,oldt,choiceNumbers[2],prevMove))<choic)) choic=2;
    if (0<((distance(t,oldt,choiceNumbers[3],prevMove))<choic)) choic=3;

    switch(choic){
            case 0: toBeMoved=choiceNumbers[0];
            case 1: toBeMoved=choiceNumbers[1];
            case 2: toBeMoved=choiceNumbers[2];
            default: toBeMoved=choiceNumbers[3];
    }
    //trying to find if number is already in correct spot
            cout << "   case" << toBeMoved;

    //if (winSpot(toBeMoved, t) == true) cout<<"winSpot Hit";
    return toBeMoved;
    }


//used to figure out if number is in it's winning spot
bool winSpot (int n,int tbl[DIMNSN][DIMNSN]) {
    int winBoard[DIMNSN][DIMNSN] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0}, y=n;  
    if (n==0)return false;
    if ((n % 4)==0)y-=1; 
   // cout<<n<<" vs "<<(tbl[(n / 4)][(n % 4) - 1])<<endl;
    if ((tbl[(y / 4)][(n % 4) - 1]) == n){ //checks row/column of the table against input
        //cout<< "True";
        return true;
    }
    return false;
}

int distance (int oldt[DIMNSN][DIMNSN], int t[DIMNSN][DIMNSN], int move, int prevMove){ //trying to do manhattan distance
    if (move==0) return 0;
    moveNumt(t, move, oldt, prevMove);
    int dist=0;
    int arAdd = 0;
    int count = 0;
    for (int x = 0; x != 4; x++){
        for (int y = 0; y != 4; y++){
            count = 0;
            arAdd = ((x * 4)+(y % 4));
            for (arAdd; arAdd < t[x][y]; arAdd++){
                count+=1;
            }
            for (t[x][y]; t[x][y] < arAdd; arAdd--){
                count+=1;
            }
            dist+=count;
        }
    }
    //moveNum(t, prevMove, oldt, move); //returning table to original form
    return dist;
}
bool moveNumt(int t[DIMNSN][DIMNSN], int &moveNum, int oldt[DIMNSN][DIMNSN], int &prevMove){
    int xNum = 0, yNum = 0, xZero = 0, yZero = 0,temp = 0;
    //cout<<t [2][2]<<endl;
    //copying previous turn's board into another array
    for (int i = 0; i < 4; i++){
        for (int y = 0; y < 4; y++){
            oldt[i][y] = t[i][y];
    
    //keep previous number from being played again
    //if (prevMove == moveNum) return false;
    while (oldt[xNum][yNum] != moveNum) {
        for (int i = 0; i != 4; i++) {
            if (oldt[xNum][i] == moveNum) {
                yNum = i;
                xNum--;
            }
        }
        xNum++;
    }
    //checking if valid move, as in 0 left/right or up/down to it
    if (xNum - 1 >= 0 && oldt[xNum-1][yNum] == 0) {
        xZero = xNum - 1;
        yZero = yNum;
    }
    else if (xNum + 1 <= 3 && oldt[xNum+1][yNum] == 0) {
        xZero = xNum + 1;
        yZero = yNum;
    }
    else if (yNum - 1 >= 0 && oldt[xNum][yNum-1] == 0) {
        xZero = xNum;
        yZero = yNum - 1;
    }
    else if (yNum + 1 <= 3 && oldt[xNum][yNum+1] == 0) {
        xZero = xNum;
        yZero = yNum + 1;
    }
    else return false;
    

    }
    }
  
    //cout<<xNum<<"  "<<yNum<<endl;
    //move number positions
    oldt[xNum][yNum] = 0;
    oldt[xZero][yZero] = moveNum;
    prevMove = moveNum;
    
    return true;
}