/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 25, 2015, 5:04 PM
 * Purpose: Savitch 9thEd Chapter 4 PracProg5
 */
#include <iostream>
#include <iomanip>


//User Libraries
//Global Constants

//Function Prototypes

float inflPct (float,float);
float estPric (float,float,int);


using namespace std;
//Execution begins:
int main(int argc, char** argv) {
    int years=0;
    float item1=0,item2=0;
    
    //user inputs item values
    cout<<"Please input the price one year ago of an item: "<<endl;
    cin>>item1;
    cout<<"Please input the price today of that same item: "<<endl;
    cin>>item2;
    cout<<"How many years into the future from today would you like to estimate"
            "the expected price of the item?"<<endl;
    cin>>years;
    
    cout<<"The rate of inflation is: "<<inflPct(item1,item2)<<"%"<<endl;
    cout<<"The item is expected to cost $"<<estPric(item2,inflPct(item1,item2),
            years)<<" in "<<years<<" years"<<endl;

    return 0;
}
//returns in percent
float inflPct(float i1,float i2){
    return ((i2-i1)/i1)*100;
}
float estPric(float cp, float inf,int yrs){ //cp=current price,inf=inflation rate
    //yrs=how many years out to estimate
    return ((cp*(inf/100))*yrs)+cp;
    
}