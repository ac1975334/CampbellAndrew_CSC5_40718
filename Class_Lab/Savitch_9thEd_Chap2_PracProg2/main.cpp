/*
* File: main.cpp
* Author: Andrew Campbell
* Created on January 13, 2015, 10:15 AM
* Purpose: Savitch 9thEd Chap2 PracProg2
*/
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
float number,guess,r=0;
int count=0;
//Input a number
cout<<"Input a number to estimate it's square root"<<endl;
cout<<"The format fill be a positive float"<<endl;
cin>>number;
//First pass
guess=number/2;
while(abs((r-guess)/r)>.01) {
    r=number/guess;
    guess=(guess+r)/2;
    count++;
    //Output
    cout<<"Loop count "<<count<<" calculate -> "<<guess<<endl;
//} while(abs((r-guess)/r)>.01);
//} while(abs((number-r*r)/number)>0.01;)
} //while ((r-guess) !=0);



return 0;
}