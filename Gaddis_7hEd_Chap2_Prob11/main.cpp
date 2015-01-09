/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 8, 2015, 7:21 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;
//Global variables

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    float gasTank=20;//Tank size in gallons
    float inTown=21.5;//In town MPG
    float onHwy=26.8;//Hwy MPG
    float disTown=gasTank*inTown;
    float disHwy=gasTank*onHwy;
    
    //Output results
    cout<<"Total miles able to be driven in town:    "<<disTown<<endl;
    cout<<"Total miles able to be driven on Highway: "<<disHwy<<endl;
    
    
    return 0;
}

