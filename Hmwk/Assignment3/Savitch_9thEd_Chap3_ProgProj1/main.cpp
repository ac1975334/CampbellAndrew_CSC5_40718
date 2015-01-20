/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 19, 2015, 12:45 PM
 * Purpose: Savitch 9thEd Chap3 ProgProj1
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
    char days[1],repeat=0;
    int callLen=0,time=0,cost=0,day=0;
    float totCost=0;
    
    //cin>>days;
    //cout<<(days[0]-32)<<"  "<<days;
    do{
    //ask for user input
        cout<<"What is time was the call started (in 24-hour format)?"<<endl;
        cin>>time;
        cout<<"What was the duration of the call to the nearest minute?"<<endl;
        cin>>callLen;
        cout<<"What day was the call placed on? (Mo, Tu, We, Th, Fr, Sa, Su"<<endl;
        cin>>days; //any lower or upper case combo ok

        
        if(days[0]>=97)days[0]=days[0]-32;
        if(days[1]>=97)days[1]=days[1]-32;

        //days to simple number
        if(days[0]==77)day=1;
        if((days[0]==84)&&(days[1]==85))day=2;
        if(days[0]==87)day=3;
        if((days[0]==84)&&(days[1]==72))day=4;
        if(days[0]==70)day=5;
        if(days[0]==83)day=6;
        cout<<days;

        //determine price
        if((day>=1)&&(day<=5)){
            if(time>=800&&time<=1800)cost=40;
            else cost=25;

        }
        if(day==6||day==7)cost=15;

        //calculate
        totCost=float(callLen*cost)/100;

        //output
        cout<<"The cost of the call is: $"<<setprecision(4)<<totCost<<endl;
        cout<<"Would you like to run with different values?";
        cin>>repeat;
                
    }while(repeat=='y'||repeat=='Y');
    

    
   
    

    return 0;
}

