/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 12, 2015, 7:27 PM
 * Purpose: Homework Assignment (Savitch_9thEd_Chap1_ProgProj3)
 */
//System Libraries

#include <iostream>

using namespace std;
//User Libraries

//Global Constants
const short VALQTR=25;  //Quarter Value
const short VALDIME=10; //Dime Value
const short VALNKL=5; //Nickel Value

//Function Prototypes

//Execution begins:
int main(int argc, char** argv) {
    //Declare variables
    short qrtrs,dimes,nicks; //variables for AMOUNT of coins
    short tlChng; //Total change
    
    cout<<"This program counts your change."<<endl;
    cout<<"Enter the amount of quarters:"<<endl;
    cin>>qrtrs;
    cout<<"Enter the amount of dimes:"<<endl;
    cin>>dimes;
    cout<<"Enter the amount of nickels:"<<endl;
    cin>>nicks;
    tlChng = (qrtrs * VALQTR) + (dimes * VALDIME) + (nicks * VALNKL);
    //Getting total amount of change
    cout<<"You have ";
    cout<<tlChng;
    cout<<" cents in change"<<endl;
    //Fin

    return 0;
}

