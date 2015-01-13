/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 12, 2015, 7:55 PM
 * Purpose: Homework Assignment (Savitch_9thEd_Chap1_ProgProj5)
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
    char c; //character to be used
    
    //Prompt for input of character 
    cout<<"This program will output a large letter \"C\""<<endl;
    cout<<"Input character you wish it to be done with: "<<endl;
    cin>>c;
    
    cout<<endl<<endl;
    
    //Begin output of large C
    cout << " " << " " << c << c << c << c << c<< endl;
    cout << " " << c << c << "   " << c << c << endl;
    cout << " " << c << endl;
    cout << " " << c << endl;
    cout << " " << c << endl;
    cout << " " << c << endl;
    cout << " " << c << endl;
    cout << " " << c << c << "   " << c << c << endl;
    cout << " " << " " << c << c << c << c << c<< endl;
    //Finished
    return 0;
}

