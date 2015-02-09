/*
* File:   main.cpp
* Author: Andrew Campbell
*
* Created on February 1, 2015, 4:13 AM
//Purpose: Savitch 9thEd Chap6 ProgProj14
*/
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here

int main(int argv, char *argc[]) {
	//declare variables
	ifstream words;
	char search[20], temp[20];
	int searchSize = 0, tPos = 0, line = 0;

	words.open("words.txt");
	cin.getline(search, 20);
	for (int i = 0; search[i] != '\0'; i++){
		searchSize++;
	}
	words >> temp;
	words.beg;
	cout << words.is_open();
	while (!words.eof()){

		string lineout;
		words >> temp;

		for (int i = 0; temp[i + searchSize] != '\0'; i++){
			for (int j = 0; j != searchSize; j++){
				if (temp[j + i] != search[j]) break;
				if (j == searchSize - 1){
					words.getloc;
					getline(words, words.getloc);
					cout << lineout;
				}

			}
		}

		words.close();
		system("PAUSE");
	}
}