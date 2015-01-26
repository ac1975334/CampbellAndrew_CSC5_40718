/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 25, 2015, 4:51 PM
 * Purpose: Savitch 9thEd Chap4 PracProg2
 */

#include <iostream>
#include <iomanip>


//User Libraries
//Global Constants
const float LTINGAL=0.264179; //1 liter in a gallons
//Function Prototypes

float mpgCalc(int,int);


using namespace std;
//Execution begins:
int main(int argc, char** argv) {
    //Declare variables
    int ltrs=0,miles=0;
    float car1=0,car2=0;
    //user input
    cout<<"Enter the liters of gas used by car 1: "<<endl;
    cin>>ltrs;
    cout<<"Enter the miles traveled by car 1: "<<endl;
    cin>>miles;
    car1=mpgCalc(ltrs,miles);
    cout<<"MPG for car 1's trip: "<<car1<<" MPG"<<endl;
    
    //car 2 input
    cout<<"Enter the liters of gas used by car 2: "<<endl;
    cin>>ltrs;
    cout<<"Enter the miles traveled by car 2: "<<endl;
    cin>>miles;
    car2=mpgCalc(ltrs,miles);
    cout<<"MPG for car 1's trip: "<<car2<<" MPG"<<endl;
    
    //output car with highest mpg
    if(car1>car2)cout<<"Car 1 had the best fuel efficiency at "
            <<car1<<" MPG"<<endl;
    if(car1<car2)cout<<"Car 2 had the best fuel efficiency at "
            <<car2<<" MPG"<<endl;
    if (car1==car2)cout<<"The cars had equal fuel efficiency at "
            <<car1<<" MPG"<<endl;
    

    return 0;
}
float mpgCalc(int ltr,int mi){
    return (float)mi/(ltr*LTINGAL);
}