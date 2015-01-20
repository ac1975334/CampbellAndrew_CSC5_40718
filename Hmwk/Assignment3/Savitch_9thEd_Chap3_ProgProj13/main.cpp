/* 
 * File:   main.cpp
 * Author: Andrew Campbell
 *
 * Created on January 19, 2015, 6:44 PM
 * Purpose: Savitch 9thEd Chap3 ProgProj13
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
    int firstD=0,secndD=0,thirdD=0,fourthD=0,current=0;
    
    //calculation
    //do loop gets value for each digit spot
    do{
        current++;
        firstD=(current/1000); //first digit
        secndD=(current%1000)/100; //2nd digit
        thirdD=((current%1000)%100)/10; //3rd digit
        fourthD=(((current%1000)%100)%10); //4th digit
        
        //cout<<firstD<<secndD<<thirdD<<fourthD<<endl;
                
        
               
     //while statement makes sure 1.all 4 digits are different 
     //2.digit in thousands place is 3*tens place,
     //3.number is odd  4. sum of digits is 27   
    }while((firstD==secndD||firstD==thirdD||firstD==fourthD||secndD==thirdD||
            secndD==fourthD||thirdD==fourthD)||(firstD!=(3*thirdD))||
            (current%2==0)||(firstD+secndD+thirdD+fourthD)!=27);
    //output result
    cout<<current<<" is the address the Riddler plans to strike."<<endl;
           
    
    return 0;
}

