/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 12, 2015, 7:06 PM
 * Purpose: Homework Assignment (Savitch_9thEd_Chap1_PracProg6)
 * Using program from PracProg5 as base for inserting errors.
 */
//System Libraries

#include <iostream> //Inserting bad filename or if the < > aren't around it
//Because complier is expecting that format to know which libraries to include

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins:
int main(int argc, char** argv) { //Not having main makes program not able to 
    //compile since it won't know where to start
    //Declare variables
    int width, height,tLength; 
    
    cout<<"Hello.\n"; 
    cout<<"Press return after entering a number.\n"; //Leaving off ; at end of line
    //Because it is expected at end of every line that has program do something
    cout<<"Enter the width (in feet) of the area:\n";
    
    cin>>width; //Adding endl gives error because it takes it as the input
    
    cout<<"Enter the height (in feet) of the area:\n";
    cin>>height; 
    tLength = width*2+height*2; 
    cout<<"If you have an area that measures "; //Adding another << after string
    //gives error about expecting primary expression before ;
    cout<<width;
    cout<<" width by ";
    cout<<height;
    cout<<" height\n";
    cout<<"you need ";
    cout<<tLength;
    cout<<" feet of fencing to enclose the area.\n"; 
    
    cout<<"Good-bye!\n"; 
    
    //End
    
    return 0;  //Misspelling return gives error that it is not defined
}
