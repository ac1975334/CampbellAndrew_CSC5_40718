/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 19, 2015, 12:12 AM
 * Purpose: Savitch 9thEd Chapter 2 ProgProj11
 */

//System Libraries
#include <iostream>

//User Libraries
//Global Constants

//Function Prototypes



using namespace std;
//Execution begins:
int main(int argc, char** argv) {
    //Declare variables
    float velocty=0;
    int tempst=0,tempend=0;
    
    
    //ask for user inputs
    
    while(tempst>=tempend){ //to prevent the starting temp being entered > endtemp
    cout<<"Enter the starting air temperature for the speed of sound:"<<endl;
    cin>>tempst;
    cout<<"Enter the ending air temperature for the speed of sound:"<<endl;
    cin>>tempend;
    }
    
    //calculate 
    do{
        velocty=(331.3+(0.61*tempst)); //velocity formula given
        cout<<"At "<<tempst<<" degrees Celsius the velocity of sound is "<<
                velocty<<" m/s"<<endl;
        tempst++;
    } while (tempst!=tempend+1); //+1 so last degree is included in output
    
       
          
    
    

    return 0;
}

