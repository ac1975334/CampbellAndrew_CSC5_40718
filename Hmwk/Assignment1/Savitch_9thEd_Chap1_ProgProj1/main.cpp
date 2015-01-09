/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 8, 2015, 6:25 PM
 * Purpose: Homework assignment (Savitch_9thEd_Chap1_ProgProj1)
 */
//System Libraries

#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins:

int main(int argc, char** argv) {
    //Declare variables
    int op1,op2,sum=0,prod=1;
    //Prompt for two op variables
    cout<<"Input 2 Integers with range of [-2^31,2^31-1]"<<endl;
    cin>>op1>>op2;
    //Calculate sum and product
    sum=sum+op1;
    sum=sum+op2;
    prod=prod*op1;
    prod=prod*op2;
    //Output results
    cout<<op1<<" + "<<op2<<" = "<<sum<<endl;
    cout<<op1<<" * "<<op2<<" = "<<prod<<endl;
    
    //Exit        
    return 0;
}

