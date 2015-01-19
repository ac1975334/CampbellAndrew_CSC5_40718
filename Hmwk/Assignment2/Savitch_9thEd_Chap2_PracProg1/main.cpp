/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 14, 2015, 9:49 PM
 * Purpose: Savitch 9thEd Chap2 ProgProb1
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants
const float CMTNONS=35273.92f; //Metric ton in ounces
//Function Prototypes
 
 //Execution beings:
int main(int argc, char** argv) {
    //Declare variables
    float wtPckOz; //cereal in oz
    float wtPackTn; //cereal in metric tons
    float nPackTn; //number of cereal boxes in metric ton
    char answer; //repeat answer
    
    //Prompt user for inputs
    cout<<"Input the ounces of the cereal box to convert to metric tons"<<endl;
    cout<<"Format is float ddd.ddd (ounces)"<<endl;
    cin>>wtPckOz;
    
    //Calculate 
    
    wtPackTn=wtPckOz/CMTNONS;
    nPackTn=1/wtPackTn;
    
    //Output
    cout<<"Weight of the cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes in a metric ton = "<<nPackTn<<endl;
    
    cout<<"Would you like to repeat this calculation?"<<endl;
    cout<<"Or make a new calculation?"<<endl;
    cout<<"Type Y for yes and N for no."<<endl;
    cin>>answer;
    if(answer=='Y'||answer=='y'){
        //Prompt weights again
        cout<<"Input the ounces of the cereal box to convert to metric tons"<<endl;
        cout<<"Format is float ddd.ddd (ounces)"<<endl;
        cin>>wtPckOz;
        //Calculate 
    
        wtPackTn=wtPckOz/CMTNONS;
        nPackTn=1/wtPackTn;
        //Output
        cout<<"Weight of the cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
        cout<<"Number of cereal boxes in a metric ton = "<<nPackTn<<endl;
    }
    
    return 0;
}

