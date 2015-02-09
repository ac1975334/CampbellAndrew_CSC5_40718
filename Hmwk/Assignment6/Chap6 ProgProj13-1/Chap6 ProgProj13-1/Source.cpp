/*
* File:   main.cpp
* Author: Andrew Campbell
*
* Created on February 1, 2015, 4:13 AM
//Purpose: Savitch 9thEd Chap6 ProgProj4
*/
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//Global Constants

//Function Prototypes

void wordCount(ifstream &txtfile, int &word, int &letter);


//Execution begins here

int main(int argv, char *argc[]) {
	//Declare variables
	ifstream txtfile;
	char filenam[260];
	int word = 0, letter = 0;


	while (txtfile.is_open() == false){
		cout << "This program will determine the amount of words in a file." << endl;
		cout << "Enter the name of a file to be opened (ex. rand2.txt, rand50.txt, rand7.txt)" << endl;
		cin.getline(filenam, 260);
		txtfile.open(filenam);
	}

	wordCount(txtfile, word, letter);
	cout << "There are " << word << " words and " << letter << " letters." << endl;
	cout << "The average characters per word: " << 1.0f*letter / word;


	txtfile.close();
	system("PAUSE");
}

void wordCount(ifstream &txtfile, int &word, int &letter){
	char next;
	txtfile.get(next);
	while (!txtfile.eof()){
		while ((next != 32) && (next != ',') && (next != '.') && (next != '\n')){
			letter++;
			txtfile.get(next);
			if (txtfile.eof()) return;
		}
		word++;
		while (next == ' ' || next == ',' || next == '.' || next == '\n'){
			txtfile.get(next);
			if (txtfile.eof()) return;
		}
	}
}
