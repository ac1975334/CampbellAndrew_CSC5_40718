/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 22, 2015, 8:41 PM
 * Purpose: SAvitch 9thEd Chap4 ProgProj7
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
void cmpDiff(int,int,bool,int,int,bool);


//Execution begins here:
int main(int argc, char** argv) {
    //Declare variables
    int stHrs, stMins, endHrs, endMins;
    bool stIsAm=false, endIsAm=false;
    char ap,dummy;
    
    //Prompt for the start time
    cout<<"Input the start time:"<<endl;
    cout<<"The Hours, The minutes and AM/PM"<<endl;
    cin>>stHrs>>stMins>>ap>>dummy;
    //cout<<"Your input:"<<stHrs<<":"<<stMins<<" "<<ap<<"m"<<endl;
    if(ap=='A'||ap=='a')stIsAm=true;
    
    //Prompt for the end time
    cout<<"Input the end time:"<<endl;
    cout<<"The Hours, The minutes and AM/PM"<<endl;
    cin>>endHrs>>endMins>>ap>>dummy;
    //cout<<"You input:"<<endHrs<<":"<<endMins<<" "<<ap<<"m"<<endl;
    if(ap=='a'||ap=='A')endIsAm=true;
    
    

    
    cmpDiff(stHrs,stMins,stIsAm,endHrs,endMins,endIsAm);
    //cout<<(hrs<10?'0':'\0')<<hrs<<":"<<(min<10?'0':'\0')<<min;
    
    

    return 0;
}
void cmpDiff(int sHr, int sMin, bool sAm, int eHr,int eMin,bool eAm){
    //calculate the minutes for each
    
    if(!sAm&&!sHr==12)sHr+=12; //&& for times with 12: special case
    int sTime=sHr*60+sMin;
    if(!eAm&&!eHr==12)eHr+=12; //&& for times with 12: special case
    int eTime=eHr*60+eMin;
    int diffMin=eTime-sTime;
    if(diffMin<0)diffMin+=24*60;
    int hrs=diffMin/60;
    int min=diffMin-hrs*60;
    
    //output
    cout<<"The difference in time: ";
    cout<<(hrs<10?'0':'\0')<<hrs<<":"<<(min<10?'0':'\0')<<min<<endl;
    
    //output difference
}