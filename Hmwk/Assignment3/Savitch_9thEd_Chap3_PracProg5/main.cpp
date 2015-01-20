/* 
 * File:   main.cpp
 * Author: Andrew
 *
 * Created on January 19, 2015, 4:17 PM
 * Purpose: Savitch 9thEd Chap3 PracProg5
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
    int runTo=100,i2=2;
    
    for(int i=3;i<runTo;i++){
        for(i2=2;i2<=i;i2++){
            //check for evenly divide
            if (i%i2==0)break;
            
            
        }
        //anything remaining gets checked if it is anything but the current number
        if(i==i2)cout<<i<< " ";
    }
    

    return 0;
}

