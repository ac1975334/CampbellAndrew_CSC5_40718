/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 25, 2015, 4:31 PM
 * Purpose: Savitch 9thEd Chap5 PracProg5
 */

#include <iostream>
#include <iomanip>
#include <cmath>


//User Libraries
//Global Constants
const float GRAMOZ=28.3495; //grams in an ounce
//Function Prototypes

float ozToGrm(int); //convert oz to grams
void Prnt(float); //prints out conversion in kilograms and grams
int inLBOZ(); //func to ask for user input, output oz


using namespace std;
//Execution begins:
int main(int argc, char** argv) {
    char rpt=0;
    do{Prnt(ozToGrm(inLBOZ()));
    cout<<"Would you like to run another conversion?"<<endl;
    cin>>rpt;
    }while(rpt=='y'||rpt=='Y');
    return 0;
}
int inLBOZ(){
    int lb=0,oz=0;
    //user input
    cout<<"This program converts pounds/ounces to kilograms/grams."<<endl;
    cout<<"Enter the pounds of the measurement you would like to convert: "<<endl;
    cin>>lb;
    cout<<"Enter the ounces of the measurement you would like to convert:"<<endl;
    cin>>oz;
    return (lb*16)+oz; //returning just ounces    
}
float ozToGrm(int oz){
    return (GRAMOZ*oz); //returns entire amount in grams
}
void Prnt(float grams){
    cout<<(int(grams/1000))<<" Kilograms "<<setprecision(3)
            <<fmod(grams,1000)<<" grams"<<endl; 
    
}

