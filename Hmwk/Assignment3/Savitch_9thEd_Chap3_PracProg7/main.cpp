/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 19, 2015, 2:29 PM
 * Purpose Savitch 9thEd Chap3 PracProg7
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
    int tempC=0,tempF=0;
    
    //ask for starting Celsius temp
    
    cout<<"What Celsius temp should be used as a starting point?"<<endl;
    cin>>tempC;
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

