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
	txtfile.open("randtext.txt");
	int word = 0, letter = 0;
	

	wordCount(txtfile, word, letter);
	cout <<"There are "<< word<<" words and " << letter <<" letter"<< endl;
	cout <<"The average characters per word: "<< 1.0f*letter / word;


	txtfile.close();
	system("PAUSE");
}

void wordCount( ifstream &txtfile, int &word, int &letter){
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
