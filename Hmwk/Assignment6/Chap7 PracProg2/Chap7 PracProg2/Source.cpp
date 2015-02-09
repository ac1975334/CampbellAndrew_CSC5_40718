/*
* File:   main.cpp
* Author: Andrew Campbell
*
* Created on February 1, 2015, 4:13 AM
//Purpose: Savitch 9thEd Chap7 PracProg2
*/
//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(int array[], int);
int countNum2s(int array[], int);

//Execution begins here

int main(int argv, char *argc[]) {
	//random number gen
	srand (static_cast<unsigned int>(time(0)));
	//declare variables
	int const ROW = 1000;
	int array[ROW] = {};

	//filling array
	filAray(array, ROW);
	for (auto x : array)
		cout << x << ", ";
	cout << endl;
	cout << "The number of 2s in the array: " << countNum2s(array, ROW) << endl;




	system("PAUSE");

}
void filAray(int a[], int length){
	
	for (int i = 0; i < length; i++){
		a[i] = rand() % 90;
		
	}
}
int countNum2s(int a[], int length){
	int twos = 0;
	for (int i = 0; i < length; i++){
		if (a[i] == 2) twos++;
	}
	return twos;

}