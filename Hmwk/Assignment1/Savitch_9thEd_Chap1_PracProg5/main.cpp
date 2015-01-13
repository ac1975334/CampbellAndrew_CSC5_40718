/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 12, 2015, 6:36 PM
 * Purpose: Homework Assignment (Savitch_9thEd_Chap1_PracProg5)
 */
//System Libraries

#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins:
int main(int argc, char** argv) {
    //Declare variables
    int width, height,tLength; 
    
    cout<<"Hello.\n"; //Problem wants this line added at start
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the width (in feet) of the area:\n";
    
    cin>>width; //Input width variable
    
    cout<<"Enter the height (in feet) of the area:\n";
    cin>>height; //Input height variable
    tLength = width*2 + height*2; //Solving for total fence needed
    cout<<"If you have an area that measures ";
    cout<<width;
    cout<<" width by ";
    cout<<height;
    cout<<" height\n";
    cout<<"you need ";
    cout<<tLength;
    cout<<" feet of fencing to enclose the area.\n"; //Variables entered and solution
    //Should have printed
    cout<<"Good-bye!\n"; //Problem wants this line added
    
    //End
    
    return 0;
}
