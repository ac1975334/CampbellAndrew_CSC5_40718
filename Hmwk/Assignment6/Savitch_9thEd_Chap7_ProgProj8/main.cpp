/*
* File:   main.cpp
* Author: Andrew Campbell
*
* Created on February 1, 2015, 4:13 AM
//Purpose: Savitch 9thEd Chap7 ProgProj8
*/
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants

//Function Prototypes

int letter(char[], char);
void markSrt(const int a[], int b[], int n);
void swap(int &a,int &b);


//Execution begins here

int main(int argv, char *argc[]) {
  //Declare variables
  char txtin[300];
  int occured[25] = {}, order[25] = {};
  int word = 0;

  cout << "Please write a sentence: " << endl;
  cin.getline(txtin, 300);

  for (int i = 0; i != 25; i++) {
    occured[i] = letter(txtin, (65 + i));

    // initialize the index array
    order[i] = i;
  }

  // sort the indices
  markSrt(occured, order, 25);

  for (int n = 0; n != 25; n++) {
    // get the sorted index
    int index = order[n];

    if (occured[index] > 0) {
      cout << char(index + 65) << " " << occured[index] << " times." << endl;
    }
  }


}

int letter(char txtin[], char l) {
  int count = 0;

  for (int i = 0; txtin[i] != '\0'; i++) {
    if ((txtin[i] == l) || (txtin[i] == l + 32) || (txtin[i] == l - 32)) {
      count++;
    }
  }

  return count;
}

void markSrt(const int a[],int indx[],int n){
    //Apply swapMin from beginning to end
    for(int i=0;i<n-1;i++){
        //Swap elements at the top of the list
        //with the minimum
        for(int j=i+1;j<n;j++){
            //Swap individual elements with smaller
            if(a[indx[i]]<a[indx[j]])
                swap(indx[i],indx[j]);
        }
    }
}

void swap(int &a,int &b){
    //In place swap using logical exclusive or's
    a=a^b;
    b=a^b;
    a=a^b;
}