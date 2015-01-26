/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 25, 2015, 6:31 PM
 * Purpose: Savitch 9thEd Chap5 PracProg3
 */

#include <iostream>
#include <iomanip>
#include <cmath>


//User Libraries
//Global Constants
const float INCM=0.393701; //inches in 1cm
//Function Prototypes

float cmToIn(int); //convert cm to inches
void Prnt(float); //prints out conversion in feet and inches
int inMCM(); //func to ask for user input, output cm


using namespace std;
//Execution begins:
int main(int argc, char** argv) {
    char rpt=0;
    do{Prnt(cmToIn(inMCM()));
    cout<<"Would you like to run another conversion?"<<endl;
    cin>>rpt;
    }while(rpt=='y'||rpt=='Y');
    return 0;
}
int inMCM(){
    int m=0,cm=0;
    //user input
    cout<<"This program converts meter/centimeters to feet/inches."<<endl;
    cout<<"Enter the meters of the measurement you would like to convert: "<<endl;
    cin>>m;
    cout<<"Enter the centimeters of the measurement you would like to convert"<<endl;
    cin>>cm;
    return (m*100)+cm;    
}
float cmToIn(int cm){
    return (INCM*cm);
}
void Prnt(float inches){
    cout<<(int(inches/12))<<" ft "<<setprecision(2)
            <<fmod(inches,12)<<" inches"<<endl;
    
}

