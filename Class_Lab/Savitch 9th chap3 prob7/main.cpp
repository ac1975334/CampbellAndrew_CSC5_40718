/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 20, 2015, 8:30 PM
 */

#include <iostream>
#include <cmath>

//Global variables
const double PI=4*atan(1);

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    float apprxPi=1.0,tol=1e-6f;
    int terms=1,nTerms=0;
    //prompt user for terms to use
    do{
    cout<<"How many terms in series to use?"<<endl;
    cout<<"Choose an odd number"<<endl;
    cin>>nTerms;
    }while(!(nTerms%2));
    //calculate approx value of pi
    for(terms=1;terms<=nTerms;terms+=2){
        apprxPi+=(-1.0f/(terms+2)+1.0f/(terms+4));
    }
    apprxPi*=4;
    //output result
    cout<<"Exact value of PI = "<<PI<<endl;
    cout<<"Approximate vallue of PI = "<<apprxPi<<endl;
    
    
    
    

    return 0;
}

