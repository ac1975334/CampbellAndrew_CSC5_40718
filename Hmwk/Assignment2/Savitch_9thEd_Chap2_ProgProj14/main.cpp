/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 19, 2015, 1:00 AM
 * Purpose: Savitch 9thEd Chap2 ProgProj14
 */
//System Libraries
#include <iostream>
#include <iomanip>

//User Libraries
//Global Constants

//Function Prototypes



using namespace std;
//Execution begins:
int main(int argc, char** argv) {
    //Declare variables
    float pctScor=0.0;
    int exerIn=0,totScor=0,totPoss=0,tmpin=0;
    
    //ask for user input
    cout<<"How many exercises to input?"<<endl;
    cin>>exerIn;
    
    //loop asking for scores/totals based on exerIn
    for(int count=1;count!=exerIn+1;count++) {
        cout<<"Score received for exercise "<<count<<":"<<endl;
        cin>>tmpin;
        totScor=totScor+tmpin;
        cout<<"Total points possible for exercise "<<count<<":"<<endl;
        cin>>tmpin;
        totPoss=totPoss+tmpin;
        
         
    }
        pctScor=((float)totScor/totPoss)*100;
        cout<<"Your total is "<<totScor<<" out of "<<totPoss<<", or "
                <<setprecision(4)<<pctScor<<"%.";
    

    return 0;
}

