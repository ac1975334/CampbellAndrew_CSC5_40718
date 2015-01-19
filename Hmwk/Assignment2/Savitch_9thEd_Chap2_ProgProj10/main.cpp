/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 18, 2015, 7:51 PM
 * Purpose: Savitch 9thEd Chap2 ProgProj 10
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
    int sum=0,sumPos=0,sumNeg=0,sumEven=0,sumOdd=0,negCt=0,posCt=0;
    float posAvg=0,negAvg=0,totAvg=0;
    //Prompt for user input then sum
    for(int count=1;count<=10;count++){
    
        cout<<"Enter an integer!"<<endl;
        cin>>input;
        sum+=input;
        if(input>0)sumPos+=input,posCt++;
        else sumNeg+=input,negCt++;
        if(input%2)sumOdd+=input;
        else sumEven+=input;
    }
    posAvg=float(sumPos)/(posCt); //casting sumPos as float to get decimal answer
    negAvg=float(sumNeg)/(negCt);
    totAvg=float(sum)/(posCt+negCt);
    
    //output results
    cout<<"Sum                  = "<<setw(4)<<sum<<endl;
    cout<<"The positive sum     = "<<setw(4)<<sumPos<<endl;
    cout<<"The negative sum     = "<<setw(4)<<sumNeg<<endl;
    cout<<"The even sum         = "<<setw(4)<<sumEven<<endl;
    cout<<"The odd sum          = "<<setw(4)<<sumOdd<<endl;
    cout<<"The positive average = "<<setw(4)<<posAvg<<endl;
    cout<<"The negative average = "<<setw(4)<<negAvg<<endl;
    cout<<"The total average    = "<<setw(4)<<totAvg<<endl;
    
    
    
    //end
    return 0;
}

