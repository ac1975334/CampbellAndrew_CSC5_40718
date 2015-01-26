/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 25, 2015, 9:56 PM
 * Purpose: Savitch 9thEd Chap5 ProgProj3
 */
#include <iostream>
#include <iomanip>



//User Libraries
//Global Constants

//Function Prototypes


void addWait(int,int,int,int);

using namespace std;
//Execution begins:
int main(int argc, char** argv) {
    int sHr=0,sMin=0,wHr=0,wMin=0;
    char rpt=0;
    
    do{
    cout<<"Enter the starting time:"<<endl;
    cin>>sHr>>sMin;
    cout<<"Enter the wait time:"<<endl;
    cin>>wHr>>wMin;
    addWait(sHr,sMin,wHr,wMin);
    cout<<"Do you want to repeat this calculation?"<<endl;
    cin>>rpt;
    }while(rpt=='y'||rpt=='Y');
    return 0;
}
void addWait(int sh,int sm,int wh, int wm){
    int eHr=sh+wh;
    int eMin=sm+wm;
    char ap='A';
    if (eMin>=60){  //checking for over 60min, if so sub 60 and add 1 to hour
        eMin-=60;
        eHr+=1;  
    }
    
    if(eHr>=24)eHr-=24; //ex 33-24 means it goes into 900am the next day
    if(eHr>=12)ap='P',eHr-=12;  //setting to pm, defaults at a
    
    cout<<sh<<":"<<sm<<" with a wait time of "<<wh<<":"<<wm<<" will be "
            <<(eHr<10?'0':'\0')<<eHr<<":"<<(eMin<10?'0':'\0')<<eMin<<" "
            <<ap<<'M'<<endl;
    
    
}
