/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 19, 2015, 1:35 AM
 * Purpose: Savitch 9thEd Chap3 ProgProj10
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
    char sex=0,actiLvl=0;
    float wgtLbs=0,hgtIn=0,ageYrs=0,bmr=0,newbmr=0;
    int actiPct=0;
    
    //ask for user input
    cout<<"This program will tell you how many chocolate bars are needed"<<endl;
    cout<<"per day to maintain the current weight of inputted individual."<<endl;
    cout<<"Enter the individual's sex (M or F):"<<endl;
    cin>>sex;
    cout<<"Enter the individual's weight in pounds:"<<endl;
    cin>>wgtLbs;
    cout<<"Enter the individual's height in inches:"<<endl;
    cin>>hgtIn;
    cout<<"Enter the individual's age in years:"<<endl;
    cin>>ageYrs;
    cout<<"What is the activity level of the individual?"<<endl;
    cout<<"a = Sedentary. b = Somewhat active. c = Active. d = Highly active."<<endl;
    cin>>actiLvl;
    
    //the additional activity level variable calculation
    if(actiLvl=='a'||actiLvl=='A')actiPct=20; //increase by 20%
    if(actiLvl=='b'||actiLvl=='B')actiPct=30; //increase by 30%
    if(actiLvl=='c'||actiLvl=='C')actiPct=40; //increase by 40%
    if(actiLvl=='d'||actiLvl=='D')actiPct=50; //increase by 50%
    cout<<fixed;
    cout<<setprecision(2);
    
    
            
    
    
    
    //calculation
    //check which sex to determine the formula used
    if(sex=='f'||sex=='F'){
        wgtLbs=wgtLbs*4.3;
        hgtIn=hgtIn*4.7;
        ageYrs=ageYrs*4.7;
        bmr=655+wgtLbs+hgtIn-ageYrs;
        newbmr=bmr+((bmr/100)*actiPct); //increase by activity percent
        cout<<"This female's basal metabolic rate is: "<<bmr<<endl;
        cout<<"The amount of chocolate bars needed per day to maintain the current "
            "weight: "<<bmr/230<<endl;
        cout<<"Taking into account exercise the bmr is: "<<newbmr<<endl;
        cout<<"With exercise the amount of chocolate bars needed per day to "
                "maintain the current weight: "<<newbmr/230<<endl;
        
           
        
    }
    else if(sex=='m'||sex=='M'){
        wgtLbs=wgtLbs*6.3;
        hgtIn=hgtIn*12.9;
        ageYrs=ageYrs*6.8;
        bmr=66+wgtLbs+hgtIn-ageYrs;
        newbmr=bmr+((bmr/100)*actiPct);
        cout<<"This male's basal metabolic rate is: "<<bmr<<endl;
        cout<<"The amount of chocolate bars needed per day to maintain the current "
            "weight: "<<setprecision(2)<<bmr/230<<endl;
        cout<<"Taking into account exercise the bmr is: "<<newbmr<<endl;
        cout<<"With exercise the amount of chocolate bars needed per day to "
                "maintain the current weight: "<<newbmr/230<<endl;
    }
    //if the sex is entered wrong no calculations happen
    else{ 
        cout<<"The individual's sex was entered incorrectly"<<endl;
    }
    
  
    
    
    
    

    return 0;
}

