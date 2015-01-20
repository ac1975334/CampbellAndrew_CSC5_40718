/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 19, 2015, 12:06 PM
 * Purpose: Savitch 9thEd Chap3 ProgProj6
 */
#include <iostream>
#include <iomanip>


//User Libraries
//Global Constants

//Function Prototypes



using namespace std;
//Execution begins:
int main(int argc, char** argv) {
    //Declare variables
    char repeat=0;
    int days=0,stLbs=0,oldLbs=0,sLbs=0,tmpLbs=0;
    
    //ask for user input

    do{
        stLbs=0;
        oldLbs=0;
        cout<<"Please enter the starting pounds of green crud:"<<endl;
        cin>>stLbs;
        cout<<"Please enter the grow period in days:"<<endl;
        cin>>days;
    
    
    //calc

        for(int count=1;count<=days;count++){
            if (count%5==0){
                tmpLbs=stLbs+oldLbs;
                oldLbs=stLbs;
                stLbs=tmpLbs;
            }

        }     
        cout<<"The green crud is now "<<stLbs<<" pounds after "<<days<<endl;
        cout<<"Do you wish to repeat this simulation?"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');


    return 0;

}
