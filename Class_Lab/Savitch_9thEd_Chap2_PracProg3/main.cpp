/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 13, 2015, 8:22 PM
 * Purpose: Savitch 9thEd Chap2 PracProg3
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants
const int CNVHRMN=60; //Conversion from hrs to mins
const int CNVMNSC=60; //conversion from min to sec
//Function Prototypes
 
 //Execution beings:
int main(int argc, char** argv) {
    //Declare variables
    
    float mph; //miles per hour on treadmill
    float hpm; //pace as hours per mile
    float fmpm; //miles per minute as a float
    int impm; //miles per min as integer
    float fmspm; //fractional left for seconds per mile
    
    //Prompt for speed input
    cout<<"Enter speed in MPH that will determine the pace"<<endl;
    
    cin>>mph;
    //Calculate relevant pace
    hpm=1/mph;
    fmpm=hpm*CNVHRMN;
    impm=static_cast<int>(fmpm);
    fmspm=(fmpm-impm)*CNVMNSC;
    
    //Output results
    cout<<mph<<" = ";
    cout<<impm<<" (mins) ";
    cout<<fmspm<<" (secs) per mile";
    

//Finished
            
    
    
    return 0;
}

