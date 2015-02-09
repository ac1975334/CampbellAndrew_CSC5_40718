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


//Execution begins here

int main(int argv, char *argc[]) {
	//Declare variables
	char txtin[300];
	int occured[25] = {}, order[25] = {};
	int word = 0;

	cout << "Please write a sentence: " << endl;
	cin.getline(txtin, 300);
	for (int i = 0; i != 25; i++){
		occured[i] = letter(txtin, (65 + i));
	}
	for (int i = 300; i != 0; i--){
		for (int n = 0; n != 25; n++){
			if (occured[n] == i){
				cout << char(n + 65) << " " << i << " times." << endl;
			}
		}
	}




	system("PAUSE");
}
int letter(char txtin[], char l){
	int count = 0;
	for (int i = 0; i < 300; i++){
		if ((txtin[i] == l) || (txtin[i] == l + 32) || (txtin[i] == l - 32)){
			count++;
		}

	}
	return count;

}