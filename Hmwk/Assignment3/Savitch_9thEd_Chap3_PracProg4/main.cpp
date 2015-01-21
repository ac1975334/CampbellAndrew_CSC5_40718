/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 19, 2015, 5:21 PM
 * Purpose: Savitch 9thEd Chap3 PracProg4
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
    char repeat=0;
    int month,day;
    string sign,element;
    bool cusp=false;
    //prompt for the input
    do{
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
    
    if(sign=="Aries"||sign=="Leo"||sign=="Sagittarius"){
        element="You are part of the FIRE element (Aries, Leo and Sagittarius)";
    }
    if(sign=="Taurus"||sign=="Virgo"||sign=="Capricorn"){
        element="You are part of the EARTH element (Taurus, Virgo and Capricorn)";
    }
    if(sign=="Gemini"||sign=="Libra"||sign=="Aquarius"){
        element="You are part of the AIR element (Gemini, Libra and Aquarius)";
    }
    if(sign=="Cancer"||sign=="Scorpio"||sign=="Pisces"){
        element="You are part of the WATER element (Cancer, Scorpio and Pisces)";
    }
    //output the sign and cusp
    cout<<"Your sign is "<<sign;
    if(cusp)cout<<" and you are on the cusp!"<<endl;
    else cout<<endl;
    cout<<element<<endl;
    cout<<"You are most compatible with those who share your element."<<endl;
    cout<<"Would you like to run this again?"<<endl;
    cin>>repeat;
    }while(repeat=='y'||repeat=='Y');
    
            
    return 0;
}
