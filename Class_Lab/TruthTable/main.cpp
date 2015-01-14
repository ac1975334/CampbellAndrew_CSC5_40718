/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 13, 2015, 6:29 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    bool X,Y;
    int a,b;
    
    //output the heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<"X^Y^X !(X||Y)!X&&!Y !(X&&Y) !X||!Y"<<endl;
    //fill in the first row
    X=true;Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X&&Y)?'T':'F')<<"     ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"        ";
    cout<<(!X||!Y?'T':'F')<<"    ";
    
    cout<<endl;
    //fill in the second row
    X=true;Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X&&Y)?'T':'F')<<"     ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"        ";
    cout<<(!X||!Y?'T':'F')<<"    ";
    cout<<endl;
    
    //fill in the third row
    X=false;Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X&&Y)?'T':'F')<<"     ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"        ";
    cout<<(!X||!Y?'T':'F')<<"    ";
    cout<<endl;
    
    //fill in the fourth row
    X=false;Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"      ";
    cout<<(!(X&&Y)?'T':'F')<<"     ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"        ";
    cout<<(!X||!Y?'T':'F')<<"    ";
    cout<<endl;
    
    //Swap A/B
    a=2;b=3;
    
    a=a^b;
    cout<<a<<"  "<<b<<endl; 
    b=a^b;
    cout<<a<<"  "<<b<<endl;
    a=(a^b)^b;
    cout<<a<<"  "<<b<<endl;
    
    

    
            
    
    return 0;
}

