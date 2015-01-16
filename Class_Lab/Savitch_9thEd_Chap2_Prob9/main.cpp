/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 15, 2015, 7:51 PM
 * Purpose: Savitch 9thEd Chap2 Prob 9
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants

//Function Prototypes

 
//Execution Begins:
int main(int argc, char** argv) {
    //Declare variables
    int input;
    int sum=0,sumPos=0,sumNeg=0,sumEven=0,sumOdd=0;
    //Prompt for user input then sum
    for(int count=1;count<=10;count++){
    
        cout<<"Enter an integer!"<<endl;
        cin>>input;
        sum+=input;
        if(input>0)sumPos+=input;
        else sumNeg+=input;
        if(input%2)sumOdd+=input;
        else sumEven+=input;
    }
    //output results
    cout<<"Sum              = "<<setw(4)<<sum<<endl;
    cout<<"The positive sum = "<<setw(4)<<sumPos<<endl;
    cout<<"The negative sum = "<<setw(4)<<sumNeg<<endl;
    cout<<"The even sum     = "<<setw(4)<<sumEven<<endl;
    cout<<"The odd sum      = "<<setw(4)<<sumOdd<<endl;
    
    //end
    return 0;
}

