/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 15, 2015, 9:21 PM
 * Purpose: Savitch 9thEd Chap3 PracProg3
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
    char repeat;
    int month,day;
    string sign;
    bool cusp=false;
    do{
    //prompt for the input
    cout<<"Input the numerical month born in:"<<endl;
    cin>>month;
    cout<<"Input the integer day born on:"<<endl;
    cin>>day;
    //determine the sign
    if(month==1&&day<=20)sign="Capricorn";
    else if(month==1&&day>=20)sign="Aquarius";
    else if(month==2&&day<=18)sign="Aquarius";
    else if(month==2&&day>=19)sign="Pisces";
    else if(month==3&&day<=20)sign="Pisces";
    else if(month==3&&day>=21)sign="Aries";
    else if(month==4&&day<=19)sign="Aries";
    else if(month==4&&day>=20)sign="Taurus";    
    else if(month==5&&day<=20)sign="Taurus";
    else if(month==5&&day>=21)sign="Gemini";
    else if(month==6&&day<=21)sign="Gemini";
    else if(month==6&&day>=22)sign="Cancer";
    else if(month==7&&day<=22)sign="Cancer";
    else if(month==7&&day>=23)sign="Leo";
    else if(month==8&&day<=22)sign="Leo";
    else if(month==8&&day>=23)sign="Virgo";
    else if(month==9&&day<=22)sign="Virgo";
    else if(month==9&&day>=23)sign="Libra";
    else if(month==10&&day<=22)sign="Libra";
    else if(month==10&&day>=23)sign="Scorpio";
    else if(month==11&&day<=21)sign="Scorpio";
    else if(month==11&&day>=22)sign="Sagittarius";
    else if(month==12&&day<=21)sign="Sagittarius";
    else if(month==12&&day>=22)sign="Capricorn";
    //determine cusp
    if(month==1&&(day>18&&day<21))cusp=true;
    if(month==2&&(day>17&&day<20))cusp=true;
    if(month==3&&(day>19&&day<22))cusp=true;
    if(month==4&&(day>18&&day<21))cusp=true;
    if(month==5&&(day>19&&day<22))cusp=true;
    if(month==6&&(day>20&&day<23))cusp=true;
    if(month==7&&(day>21&&day<24))cusp=true;
    if(month==8&&(day>21&&day<24))cusp=true;
    if(month==9&&(day>21&&day<24))cusp=true;
    if(month==10&&(day>21&&day<24))cusp=true;
    if(month==11&&(day>20&&day<23))cusp=true;
    if(month==12&&(day>20&&day<23))cusp=true;
    
    //output the sign and cusp
    cout<<"Your sign is "<<sign;
    if(cusp)cout<<" and you are on the cusp!"<<endl;
    else cout<<endl;
    cout<<"Would you like to run this again?"<<endl;
    cin>>repeat;
    }while(repeat=='y'||repeat=='Y');
            
    return 0;
}

