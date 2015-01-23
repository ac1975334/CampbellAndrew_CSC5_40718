/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 22, 2015, 5:51 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
//User Libraries
//Global Constants
const int64_t MAXRAND=pow(2,62);
//Function Prototype
//Execution begins here!
int main(int argc, char** argv) {
//Set random number seed
srand(static_cast<unsigned int>(time(0)));
//Declare a max variable
int64_t loop=59947000000; //2447000000
int64_t max=rand();
//Now loop to find the maximum random number
for(int64_t i=2;i<=loop;i++){
int64_t r=rand();
if(r>max)max=r;
}
//Now output the result
cout<<"2^31 = "<<MAXRAND<<endl;
cout<<"Maximum found = "<<max<<endl;
//Exit stage right
return 0;
}