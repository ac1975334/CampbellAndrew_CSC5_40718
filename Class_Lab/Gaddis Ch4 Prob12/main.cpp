/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 20, 2015, 7:32 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    double wallet=1,days=0; //integer number of pennies
    double totPay=0; //total pay
    //output number of days to double
    cout<<"How many days to double the contents of your wallet?"<<endl;
    cout<<"Your wallet starts with $0.01"<<endl;
    cout<<"Max days allowed = 31"<<endl;
    cin>>days;
    //calculate
    for(int count=1;count<=days;count++){
        wallet*=2;
        
        cout<<"Day"<<count<<"  "<<wallet<<endl;
        totPay=totPay+wallet;
        cout<<"Day"<<count<<"  Total: "<<totPay<<endl;
        cout<<count<<"  "<<(wallet>0)<<endl;
        if(count%10==0){
            wallet/=10;
        }
        
    }
    //convert
    cout<<"Your wallet = $"<<wallet/100.0f;
    
    
    return 0;
}

