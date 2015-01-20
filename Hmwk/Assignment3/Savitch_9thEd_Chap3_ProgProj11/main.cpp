/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 19, 2015, 9:44 AM
 * Purpose: Savitch 9thEd Chap3 ProgProj11
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
    int oTemp=0,minTemp=0,maxTemp=0,count=0,inTemp=0; //o-input temp,min - lowest without 1,4,7
    char tmp=0,tmp1;

    
    //Ask user input desired oven temp
    cout<<"Please enter desired oven temp (from 0 to 999) and this program will "
            "determine the closest values without using 1,4,7."<<endl;
    cin>>inTemp;
    oTemp=inTemp;
    
    //finding next highest temp
    for(int i=oTemp;i>0;i=(i/10)){
        cout<<oTemp<<" i:"<<i<<endl;
        int digit = i%10;
        if(digit==1||digit==4||digit==7){
            oTemp++;
            i=oTemp; //to prevent last furthest left digit not triggering reset
        }
        
    }
    maxTemp=oTemp;
    oTemp=inTemp;
    for(int i=oTemp;i>0;i=(i/10)){
        cout<<oTemp<<" i:"<<i<<endl;
        int digit = i%10;
        if(digit==1||digit==4||digit==7){
            oTemp--;
            i=oTemp; //to prevent last furthest left digit not triggering reset
        }
        
    }
    minTemp=oTemp;
    cout<<"Without using the 1, 4, 7 keys, these are how close you can get to "
            "the entered temperature"<<endl;
    cout<<"The closest low end temp is: "<<minTemp<<" The closest high end temp "
            "is: "<<maxTemp<<endl;
    
    




    return 0;
}


