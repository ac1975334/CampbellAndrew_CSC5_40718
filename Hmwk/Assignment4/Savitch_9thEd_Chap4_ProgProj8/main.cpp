/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 25, 2015, 9:44 AM
 * Purpose: Savitch 9thEd Chap4 ProgProj8
 */
#include <iostream>
#include <iomanip>


//User Libraries
//Global Constants

//Function Prototypes

bool hasDigt(int,int);


using namespace std;
//Execution begins:
int main(int argc, char** argv) {
    //Declare variables
    int oTemp=0,minTemp=0,maxTemp=0,count=0,inTemp=0,i=0,n=0; //o-input temp,min - lowest without 1,4,7
    char tmp=0,tmp1;

    
    //Ask user input desired oven temp
    cout<<"Please enter desired oven temp (from 0 to 999) and this program will "
            "determine the closest values without using 1,4,7."<<endl;
    cin>>inTemp;
    oTemp=inTemp;
    
    
    //finding next highest temp
    while(hasDigt(oTemp,1)==true||hasDigt(oTemp,4)==true||hasDigt(oTemp,7)){
        //cout<<oTemp<<endl;
        oTemp++;
    }
    maxTemp=oTemp;
    //finding lowest temp
    oTemp=inTemp;
    while(hasDigt(oTemp,1)==true||hasDigt(oTemp,4)==true||hasDigt(oTemp,7)){
        //cout<<oTemp<<endl;
        oTemp--;
    }
     
    
    minTemp=oTemp;
    cout<<"Without using the 1, 4, 7 keys, these are how close you can get to "
            "the entered temperature"<<endl;
    cout<<"The closest low end temp is: "<<minTemp<<" The closest high end temp "
            "is: "<<maxTemp<<endl;
    
    




    return 0;
}

bool hasDigt(int number,int digit){

    for(int i=number;i>0;i=(i/10)){
        cout<<number<<" i:"<<i<<endl;
        int n = i%10;
        if(n==digit){
            return true;
        }
        }
    return false;
}

