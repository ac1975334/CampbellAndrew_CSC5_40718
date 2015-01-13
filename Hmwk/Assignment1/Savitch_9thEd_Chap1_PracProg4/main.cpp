/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 12, 2015, 6:32 PM
 * Purpose: Homework Assignment (Savitch_9thEd_Chap1_PracProg3)
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
    int number_of_pods, peas_per_pod,total_peas;
    
    cout<<"Hello.\n"; //Problem wants this line added at start
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    
    cin>>number_of_pods; //Input number
    
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod; //Input 2nd number
    total_peas = number_of_pods + peas_per_pod; //Problem wants this modified to a +
    //From * to show a logic error, the words need this to be * to make sense.
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod then\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods.\n"; //Shows the 2 numbers entered and product
    cout<<"Good-bye!\n"; //Problem wants this line added
    
    //End
    
    
    return 0;
}
