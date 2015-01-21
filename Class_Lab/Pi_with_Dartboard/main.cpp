/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 20, 2015, 8:53 PM
 */

#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants
const double PI=4*atan(1);
const unsigned int MAXRAND=pow(2,31);

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    srand(static_cast<unsigned int>(time(0)));
    int nDarts,inCircl=0;
    //prompt user
    cout<<"How many darts should be thrown?"<<endl;
    cin>>nDarts;
    
    //play the game/throw darts
    for(int dart=1;dart<=nDarts;dart++){
        double x=1.0*rand()/MAXRAND; //(0,1) x coordinate 
        double y=1.0*rand()/MAXRAND; //(0,1) y coordinate
        if(x*x+y*y<=1)inCircl++;
        //cout<<"x= "<<x<<" y= "<<y<<endl;
        
        
    }
    double apprxPi=4.0*inCircl/nDarts;
    //output results
    
    cout<<"Exact: "<<PI<<" approx: "<<apprxPi<<" After "<<nDarts<<endl;
    
    return 0;
}

