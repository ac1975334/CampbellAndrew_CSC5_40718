/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 20, 2015, 6:42 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    int widHght;
    //user input
   cout<<"How large of a box?"<<endl;
   cin>>widHght;
   //countable loop

   for(int row=1;row<=widHght;row++){
       for(int col=1;col<=widHght*2;col++){
           cout<<"X";
           
       }
       cout<<endl;
   }
   
    return 0;
}

