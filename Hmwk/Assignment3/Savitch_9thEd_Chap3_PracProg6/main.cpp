/* 
 * File:   main.cpp
 * Author: Andrew
 *
 * Created on January 19, 2015, 3:45 PM
 * Purpose: Savitch 9thEd Chap3 ProgProb6
 */
#include <iostream>
#include <iomanip>


//User Libraries
//Global Constants

//Function Prototypes



using namespace std;
//Execution begins:
int main(int argc, char** argv) {
    //Declare variables
    int wgtIn=0,radiIn=0;
    float f=0,vol=0;
    float WATRWGT=62.4f; //lb/ft x V
    float PI=3.14;
    
    //ask for user inputs
    
    cout<<"Type the weight of the object in lbs to determine buoyancy:"<<endl;
    cin>>wgtIn;
    cout<<"Type the radius in ft that is submerged in the water:"<<endl;
    cin>>radiIn;
    
    //calculate
    
    vol=(4/3)*PI*radiIn*radiIn*radiIn;
    f=vol*WATRWGT;
    //object is said to float if buoyancy force(f) is > weight of object
    if(f>wgtIn)cout<<"The object will float"<<endl;
    else cout<<"The object will sink"<<endl;


    return 0;
}

