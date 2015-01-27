/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 22, 2015, 7:29 PM
 * Purpose: Savitch 9thEd Chap4 PracProg7
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
const float G=6.673e-8f;//Weak Force attraction cm^3/g/sec^2
//Function Prototype
// F m1 m2 d
float atrForc(float,float,float);
int main(int argc, char** argv) {
//Declare variables - found values on google
float mEarth=5.972e24f; //mass of earth in kilograms
float inWt=0.0f; //input weight
float rEarth=6.371e3; //radius of earth in kilometers
cout<<"Enter the weight to be converted to dynes: "<<endl;
cin>>inWt;

//Conversions for consistent units
mEarth*=1e3f; //convert to grams -> 10^3g/Kg
float massWt=inWt*453.59;//453.59g/lb
rEarth*=(1e3f*1e2f); //10^3m/km*10^2cm/m
//Calculate the attractive force in dynes
float dynes=atrForc(mEarth,massWt,rEarth);
float lbs=dynes*1/4.44822e5f;//Conversion 1lb/4.4dynes
//Output the results
cout<<"Weight in dynes = "<<dynes<<endl;
cout<<"Weight in lbs = "<<lbs<<endl;
//Exit stage right
return 0;
}
float atrForc(float m1,float m2,float d){
return G*m1*m2/d/d;
}
