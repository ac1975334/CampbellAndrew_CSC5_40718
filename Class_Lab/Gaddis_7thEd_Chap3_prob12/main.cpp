/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 15, 2015, 9:02 PM
 */

#include <iostream>
#include <string.h>
using namespace std;




/*
 * 
 */
int main(int argc, char** argv) {
        string month,year;
        float totCash,sales,dolSTax,dolCTax;
        float sSlsTax=4e-2f,cSlsTax=2e-2f;
        
        //inputs
        cout<<"What month of sales to calculate?"<<endl;
        getline(cin,month);
        cout<<"What year of sales to calculate?"<<endl;
        getline(cin,year);
        cout<<"What was the total cash received?"<<endl;
        cin>>totCash;
        
        //calc
        sales=totCash/(1+sSlsTax+cSlsTax);
        dolSTax=sales*sSlsTax;
        dolCTax=sales*cSlsTax;
        
        //output
        cout<<"Month: "<<month<<" Year: "<<year<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"Total collected:     $ "<<totCash<<endl;
        cout<<"Total sales:         $ "<<sales<<endl;
        cout<<"County Sales Tax:    $ "<<dolCTax<<endl;
        cout<<"State Sales Tax:     $ "<<dolSTax<<endl;
        cout<<"Total Sales Tax:     $ "<<dolSTax+dolCTax<<endl;
        
        
        
    return 0;
}

