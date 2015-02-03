/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 29, 2015, 8:16 PM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
//User Libraries
//Global constants
const int COL=200;
//Function prototypes
void filAray(int [],int);
void filAray(vector<int> &,int);
void filAray(int [][COL],int,int);
void prntAry(const int [],int,int);
void prntAry(const vector<int> &,int,int);
void prntAry(const int [][COL],int,int);
//Execution Begins Here
int main(int argc, char** argv) {
//Seed the random number generator
srand(static_cast<unsigned int>(time(0)));
//Declare variables and arrays
const int ROW=200;
int pFilCol=1,pFilRow=200,perLine=5;
int array[COL]={};
int array2D[ROW][COL];
vector<int> varray(COL,0);
int arrayover [ROW];
//Fill the Arrays
filAray(array,pFilCol);
filAray(varray,pFilCol);
filAray(array2D,pFilRow,pFilCol);
filAray(arrayover, 659);
//Print the Arrays
//prntAry(array,pFilCol,perLine);
//prntAry(varray,pFilCol,perLine);
//prntAry(array2D,pFilRow,pFilCol);
arrayover[777] = 99;
//prntAry(arrayover, pFilRow, perLine);
cout<<arrayover[777]<<endl;
//filAray(arrayover, 159);
//prntAry(arrayover, pFilRow, perLine);
//Exit stage right
exit(0);
}
//Print perLine Columns for the array output by row
void prntAry(const vector<int> &a,int n,int perLine){
cout<<endl;
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
if(i%perLine==(perLine-1))cout<<endl;
}
cout<<endl;
}
//Print perLine Columns for the array output by row
void prntAry(const int a[],int n,int perLine){
cout<<endl;
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
if(i%perLine==(perLine-1))cout<<endl;
}
cout<<endl;
}
//Print a 2 Dimensional array
void prntAry(const int a[][COL],int r,int c){
cout<<endl;
for(int row=0;row<r;row++){
for(int col=0;col<c;col++){
cout<<a[row][col]<<" ";
}
cout<<endl;
}
cout<<endl;
}
//Randomly fill a 2 Dimensional array
void filAray(int a[][COL],int r,int c){
for(int row=0;row<r;row++){
for(int col=0;col<c;col++){
a[row][col]=rand()%90+10;
}
}
}
//Randomly fill a vector with 2-digit numbers
void filAray(vector<int> &a,int n){
for(int i=0;i<n;i++){
a[i]=rand()%90+10;
}
}
//Randomly fill the array with 2-digit numbers
void filAray(int a[],int n){
for(int i=0;i<n;i++){
a[i]=rand()%90+10;
if (i%199==0){
    prntAry(a, 600, 500);
    cout<<endl;


}
}
}