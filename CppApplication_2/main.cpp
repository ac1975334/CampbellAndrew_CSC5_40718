/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 8, 2015, 7:21 PM
 // GaddisCh2 Prob12
 */

#include <iostream>
#include <iomanip>

using namespace std;
//Globalvariables
const unsigned short CVFTACS=43560; //Percent Conv
/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    float inSqFt,outAcrs;
    //Prompt for input
    cout<<"Input the number of square feet"<<endl;
    cout<<"to convert to Acres"<<endl;
    cin>>inSqFt;
    //Calculate the Acres
    outAcrs=inSqFt/CVFTACS;
    //output the results
    cout<<inSqFt<<"(sq feet) = ";
    cout<<outAcrs<<"(acres)"<<endl;
    
    
    return 0;
}

