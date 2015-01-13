/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 12, 2015, 6:26 PM
 * Purpose: Homework Assignment (Savitch_9thEd_Chap1_PracProg2)
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
    
    cout<<"Hello.\n"; 
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    
    cin>>number_of_pods; //Input number
    
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod; //Input 2nd number
    total_peas = number_of_pods / peas_per_pod; //Problem wanted this changed to /
    //and wanted peas_per_pod to be 0 to show that the program will error when dividing
    //by 0
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod then\n";
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods.\n"; //Shows the 2 numbers entered and product
    cout<<"Good-bye!\n"; 
    //End
    

    return 0;
}
