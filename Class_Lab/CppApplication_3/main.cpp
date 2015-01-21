/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 20, 2015, 7:00 PM
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
    float tempC,tempF=0;
    
    //ask for starting Celsius temp
    
    cout<<"What Celsius temp should be used as a starting point?"<<endl;
    //cin>>tempC;
    tempF=((9*tempC)/5)+32;
    
    //loops until finds == temps
    while(tempC!=tempF){
        cout<<tempC<<" Celsius = "<<tempF<<" Fahrenheit"<<endl;
        tempC--;
        tempF=((9*tempC)/5)+32;
        
    }
    //for final output showing ==
    cout<<tempC<<" Celsius = "<<tempF<<" Fahrenheit"<<endl;
    return 0;
}

