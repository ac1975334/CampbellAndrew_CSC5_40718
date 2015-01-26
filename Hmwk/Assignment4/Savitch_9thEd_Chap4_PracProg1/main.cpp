/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 25, 2015, 4:36 PM
 * Purpose: Savitch 9thEd Chap 4 ProgProb1
 */
#include <iostream>
#include <iomanip>


//User Libraries
//Global Constants
const float LTINGAL=0.264179; //1 liter in a gallons
//Function Prototypes

float mpgCalc(int,int);


using namespace std;
//Execution begins:
int main(int argc, char** argv) {
    //Declare variables
    char rpt;
    int ltrs=0,miles=0;
    //user input
    do{cout<<"Enter the liters of gas used: "<<endl;
        cin>>ltrs;
        cout<<"Enter the miles traveled: "<<endl;
        cin>>miles;
        cout<<"Your MPG for the trip: "<<mpgCalc(ltrs,miles)<<" MPG"<<endl;
        cout<<"Would you like to repeat this calculation?"<<endl;
        cin>>rpt;
    }while(rpt=='y'||rpt=='Y');

    return 0;
}
float mpgCalc(int ltr,int mi){
    return (float)mi/(ltr*LTINGAL);
}
