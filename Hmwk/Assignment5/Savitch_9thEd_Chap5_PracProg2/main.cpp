/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 25, 2015, 5:36 PM
 * Purpose: Savitch 9thEd Chap5 PracProg2
 */

#include <iostream>
#include <iomanip>
#include <cmath>


//User Libraries
//Global Constants
const float MTRINFT=0.3048; //meters in a foot
//Function Prototypes

float ftToM(float); //convert feet to meters
void Prnt(float); //prints out conversion in meters and centimeters
float inFIN(); //func to ask for user input, output ft with inch added


using namespace std;
//Execution begins:
int main(int argc, char** argv) {
    //Declare variables
    float feet=0;
    char rpt=0;
    
    do{feet=inFIN();

    Prnt(ftToM(feet));
    cout<<"Would you like to run another conversion?"<<endl;
    cin>>rpt;
    }while (rpt=='y'||rpt=='Y');

    return 0;
}
float ftToM(float ft){
    return ft*MTRINFT;
}
void Prnt(float m){
    int meter=m/1;
    float cm=fmod(m,1)*100; //take away the meter, leaving just cm
    cout<<meter<<"m "<<cm<<"cm"<<endl;
    
}
float inFIN(){
    float ftLngth,inLngth;
    //user input
    cout<<"This program converts feet/inches to meters/centimeter."<<endl;
    cout<<"Enter the feet of the measurement you would like to convert: "<<endl;
    cin>>ftLngth;
    cout<<"Enter the inches of the measurement you would like to convert: "<<endl;
    cin>>inLngth;
    ftLngth+=(inLngth/12);
    //cout<<"ft"<<ftLngth;
    return ftLngth;
            
}