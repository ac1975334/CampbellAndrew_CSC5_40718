/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 14, 2015, 11:54 PM
  * Purpose: Savitch 9thEd Chap2 ProgProj3
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
 
 //Execution beings:
int main(int argc, char** argv) {
    //Declare variables
    float incrPct = 7.6f; //pay increase percentage
    float prevAnu; //previous annual pay
    float payDue; //retroactive pay due
    float newAnu; //new annual pay
    float newMthS; //new monthly pay
    char answer;
    short mnths; //months of retroactive pay
    
    //ask user for inputs
    cout<<"What is the previous annual salary?"<<endl;
    cin>>prevAnu;
    cout<<"How many months of retroactive pay?"<<endl;
    cin>>mnths;
    
    //calculate
    newAnu = prevAnu+((prevAnu/100)*incrPct); //finding new annual pay
    newMthS = newAnu/12; //new monthly pay
    payDue = (newMthS-(prevAnu/12))*mnths; // monthly pay difference * months
    
    cout<<"The new Yearly pay is: $"<<newAnu<<endl;
    cout<<"The new Monthly pay is: $"<<newMthS<<endl;
    cout<<"The 6 months of retroactive pay totals: $"<<payDue<<endl;
    
    //Ask to repeat
    cout<<"Would you like to repeat this calculation?"<<endl;
    cin>>answer;
    while(answer=='Y'||answer=='y'){ //Use while loop to run as many times as wanted
        //Same code as above
        //ask user for inputs
        cout<<"What is the previous annual salary?"<<endl;
        cin>>prevAnu;
        cout<<"How many months of retroactive pay?"<<endl;
        cin>>mnths;

        //calculate
        newAnu = prevAnu+((prevAnu/100)*incrPct); //finding new annual pay
        newMthS = newAnu/12; //new monthly pay
        payDue = (newMthS-(prevAnu/12))*mnths; // monthly pay difference *months

        cout<<"The new Yearly pay is: $"<<newAnu<<endl;
        cout<<"The new Monthly pay is: $"<<newMthS<<endl;
        cout<<"The 6 months of retroactive pay totals: $"<<payDue<<endl;
        //Ask to repeat
        cout<<"Would you like to repeat this calculation?"<<endl;
        cin>>answer;
    

    }
        
    
    
    

    return 0;
}

