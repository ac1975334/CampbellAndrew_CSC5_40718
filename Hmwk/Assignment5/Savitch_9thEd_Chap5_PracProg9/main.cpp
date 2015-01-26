/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 25, 2015, 8:18 PM
 * Purpose: Savitch 9thEd Chap5 PracProg9
 */
#include <iostream>
#include <iomanip>
#include <cmath>


//User Libraries
//Global Constants

//Function Prototypes

void triArea(int,int,int,int&,float&);


using namespace std;
//Execution begins:
int main(int argc, char** argv) {
    int sideA=0,sideB=0,sideC=0,prem=0;
    float area=0;
    //user input
    cout<<"Please enter the lengths in feet of each side of a triangle to "
            "determine the area."<<endl;
    cin>>sideA>>sideB>>sideC;
    triArea(sideA,sideB,sideC, prem, area);
    if (area==0)cout<<"Invalid triangle lengths entered"<<endl;
    else cout<<prem<<" ft perimeter "<<area<<" ft^2"<<endl;
    
    

    return 0;
}
void triArea (int a,int b,int c,int& prem,float& area){
    //checking that 2sides together are more than the other to make triangle
    if (a+b>c&&a+c>b&&b+c>a){
        prem=a+b+c;    
        float s = ((float)prem)/2;

        area=sqrt(s*((s-a)*(s-b)*(s-c)));
    }
}
