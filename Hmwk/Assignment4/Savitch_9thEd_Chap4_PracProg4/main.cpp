/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 25, 2015, 5:04 PM
 * Purpose: Savitch 9thEd Chapter 4 PracProg4
 */
#include <iostream>
#include <iomanip>


//User Libraries
//Global Constants

//Function Prototypes

float inflPct (float,float);


using namespace std;
//Execution begins:
int main(int argc, char** argv) {
    float item1=0,item2=0;
    
    //user inputs item values
    cout<<"Please input the price one year ago of an item: "<<endl;
    cin>>item1;
    cout<<"Please input the price today of that same item: "<<endl;
    cin>>item2;
    
    cout<<"The rate of inflation is: "<<inflPct(item1,item2)<<"%"<<endl;
    

    return 0;
}
float inflPct(float i1,float i2){
    return ((i2-i1)/i1)*100;
}
