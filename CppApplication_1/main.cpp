/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 8, 2015, 7:21 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;
//Globalvariables
int CONVPCT=100;
/*
 * 
 */
int main(int argc, char** argv) {
    float skPrice=2.177e1f; //Stock price
    unsigned short nShares=600; //Number of shares
    char comish=2; //2 percent
    //Calculate commission
    float slPrice=nShares*skPrice;
    float cmPrice=slPrice*comish/CONVPCT;
    float totPaid=slPrice+cmPrice;
    
    //Output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Sales Price =   $"<<setw(9)<<slPrice<<endl;
    cout<<"Commission Paid $"<<setw(8)<<cmPrice<<endl;
    cout<<"Total Paid      $"<<setw(8)<<totPaid<<endl;
    
    return 0;
}

