/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 13, 2015, 9:15 PM
 * Purpose: Illustrate branching code concepts
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    srand(static_cast<unsigned int>(time(0)));
    bool torf=rand()%2;
    //Output the random boolean
    cout<<"We randomly chose "<<torf<<endl;
    
    //Illustrate the ternary operator
    cout<<"The random boolean is ";
    cout<<(torf?"Odd":"Even")<<endl;
    
    //Illustrate the if statement
    if(torf==1)cout<<"Odd"<<endl;
    if(torf==0)cout<<"Even"<<endl;
    
    //Illustrate if-else single statement
    if(torf==1)cout<<"Odd"<<endl;
    else cout<<"Even"<<endl;
    
    //Illustrate the switch statement
    cout<<"The switch statement: ";
    switch(torf){
        case 1: cout<<"Odd"<<endl;break;
        default: cout<<"Even"<<endl;
        
    }
    
    
    return 0;
}

