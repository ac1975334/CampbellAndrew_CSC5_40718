/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 25, 2015, 7:05 PM
 * Purpose: Savitch 9thEd Chap5 PracProg4
 */

#include <iostream>
#include <iomanip>
#include <cmath>


//User Libraries
//Global Constants
const float INCM=0.393701; //inches in 1cm
const float MTRINFT=0.3048; //meters in a foot
//Function Prototypes

float cmToIn(int); //convert cm to inches
void PrntFt(float); //prints out conversion in feet and inches
int inMCM(); //func to ask for user input, output cm
float ftToM(float); //convert feet to meters
void PrntM(float); //prints out conversion in meters and centimeters
float inFIN(); //func to ask for user input, output ft with inch added
void fti2mcm(); //encapsulates all the functions for its calc
void mcm2fti(); //encapsulates all the functions for its calc


using namespace std;
int main(int argc, char** argv) {
    //Declare variables
    char rpt=0;
    int choice=0;
    
    //user input to chose what to run
    do{cout<<"This program can covert meters/centimeters to feet/inches or "
            "feet/inches to meters/centimeters"<<endl;
    cout<<"Press 1 to convert from meters/centimeters to feet/inches"<<endl;
    cout<<"Press 2 to convert from feet/inches to meters/centimeters"<<endl;
    cin>>choice;
    
    //deciding function to call based on the choice
    if(choice==1)mcm2fti();
    else if(choice==2)fti2mcm();
    else cout<<"Invalid entry"<<endl;
    cout<<"Would you like to run this program again?"<<endl;
    cin>>rpt;
    }while(rpt=='y'||rpt=='Y');
    return 0;
}
int inMCM(){
    int m=0,cm=0;
    //user input
    //cout<<"This program converts meter/centimeters to feet/inches."<<endl;
    cout<<"Enter the meters of the measurement you would like to convert: "<<endl;
    cin>>m;
    cout<<"Enter the centimeters of the measurement you would like to convert"<<endl;
    cin>>cm;
    return (m*100)+cm;    
}
float cmToIn(int cm){
    return (INCM*cm);
}
void PrntFt(float inches){
    cout<<(int(inches/12))<<" ft "<<setprecision(2)
            <<fmod(inches,12)<<" inches"<<endl;
    
}
float ftToM(float ft){
    return ft*MTRINFT;
}
void PrntM(float m){
    int meter=m/1;
    float cm=fmod(m,1)*100; //take away the meter, leaving just cm
    cout<<meter<<"m "<<cm<<"cm"<<endl;
    
}
float inFIN(){
    float ftLngth,inLngth;
    //user input
    //cout<<"This program converts feet/inches to meters/centimeter."<<endl;
    cout<<"Enter the feet of the measurement you would like to convert: "<<endl;
    cin>>ftLngth;
    cout<<"Enter the inches of the measurement you would like to convert: "<<endl;
    cin>>inLngth;
    ftLngth+=(inLngth/12);
    //cout<<"ft"<<ftLngth;
    return ftLngth;
            
}
void mcm2fti(){
    PrntFt(cmToIn(inMCM()));
}
void fti2mcm(){
    PrntM(ftToM(inFIN()));
}
