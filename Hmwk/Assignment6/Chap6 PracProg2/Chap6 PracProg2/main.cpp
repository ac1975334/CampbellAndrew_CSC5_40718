/*
* File:   main.cpp
* Author: Andrew Campbell
*
* Created on February 1, 2015, 4:13 AM
// Purpose: Savitch Chap6 PracProg1
*/
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//Global Constants

//Function Prototypes



//Execution begins here

int main(int argv, char *argc[]) {
	ifstream numbers;
	numbers.open("numbers.txt");
	float small = 0, large = 0, count = 0, sum = 0, next;
	numbers >> small;  //establish a number in the file
	numbers >> large;
	numbers.seekg(0);
	while (numbers >> next){
		if (next < small) small = next;
		if (next > large) large = next;
		sum += next;
		count++;
	}

	cout << "There are " << count << " numbers in the file" << endl;
	cout << "The smallest number is " << small << " and the largest is " << large << endl;
	cout << "The average of all the numbers in the file is: " << setprecision(7) << sum / count << endl;

	numbers.close();
	system("PAUSE");
}
