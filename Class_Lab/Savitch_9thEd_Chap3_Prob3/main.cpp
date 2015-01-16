/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 15, 2015, 9:21 PM
 * Purpose: Savitch 9thEd Chap3 Prob3
 */

//System Libraries
#include <iostream>
#include <iomanip>



using namespace std;

//User Libraries

//Global Constants
//Function Prototypes

//Execution begins:
int main(int argc, char** argv) {
    //Declare variables
    int month,day;
    string sign;
    bool cusp=false;
    //prompt for the input
    cout<<"Input the numerical month born in:"<<endl;
    cin>>month;
    cout<<"Input the integer day born on:"<<endl;
    cin>>day;
    //determine the sign
    if(month==1&&day<=20)sign="Capricorn";
    else if(month==1&&day>=20)sign="Aquarius";
    else if(month==2&&day<=18)sign="Aquarius";
    //determine cusp
    if(month==1&&(day>18&&day<22))cusp=true;
    if(month==2&&(day>16&&day<20))cusp=true;
    
    //output the sign and cusp
    cout<<"Your sign is "<<sign;
    if(cusp)cout<<" and you are on the cusp"<<endl;
    else cout<<endl;
    
            
    return 0;
}

