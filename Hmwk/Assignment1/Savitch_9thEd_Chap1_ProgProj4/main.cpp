/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 12, 2015, 7:42 PM
 * Purpose: Homework Assignment (Savitch_9thEd_Chap1_ProgProj4)
 */
//System Libraries

#include <iostream>

using namespace std;
//User Libraries

//Global Constants
const float GRAVITY=32.174f; // ft/sec^2

//Function Prototypes

//Execution begins:
int main(int argc, char** argv) {
    //Declare variables
    int time; //seconds
    float dist; //distance in feet
    //User Input for these variables
    
    cout<<"This program calculates free fall"<<endl;
    cout<<"distance dropped in feet with an"<<endl;
    cout<<"object starting at rest."<<endl;
    cout<<"Input the free-fall time to drop in seconds"<<endl;
    cout<<"Time input is a positive integer"<<endl;
    
    cin>>time;
    
    dist=0.5f*GRAVITY*time*time; //Solving for distance
    
    cout<<"Distance dropped = "<<dist<<" (ft)"<<endl;
    //Finished
    return 0;
}

