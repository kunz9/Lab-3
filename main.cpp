/*	
	Dakota Kunz
	C++
	Due: September 28, 2022
	Lab: This lab is to creat a program to calculate a set of 4 values for 
	Mean and Population Standard Deviation that the use user inputs and 
	inputs from a file. 
*/
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
void userinput();
float mean();
float pop();
float FileCalculation();
float fileinput();
float m;  float sd;
int a; int b; int c; int d;
string inputlab = "inMeanStd.dat";
string output = "outMeanStd.dat";
ofstream outfile;

int main()
{
	outfile.open(output);

	userinput();
	cout << "Mean:" << mean() << endl;
	cout << "Population Standard Deviation: " << pop();

	fileinput();
	FileCalculation();

	return 0;
}

//Values imputted by the user with a limit of 4 values
void userinput()
{
	cout << "Enter the value #1:\n";
	cin >> a;
	cout << "Enter the value #2:\n";
	cin >> b;
	cout << "Enter the value #3:\n";
	cin >> c;
	cout << "Enter the value #4:\n";
	cin >> d;
}
//Calculates mean from 4 values
float mean()
{
	return (a + b + c + d) / 4.0 ;
}
//Calculates population standard deviation
float pop()
{
	float m = mean();
	return sqrt((pow(a - m, 2.0) + pow(b - m, 2.0) + pow(c - m, 2.0) + pow(d - m, 2.0)) / 4.0); 
}

//File calculations for the 4 values that are in the file
float FileCalculation()
{
	outfile << "Mean:" << mean() << endl;
	outfile << "Population Standard Deviation: " << pop();
	return 0;
}

//Opening and reading in the file to find the 4 values 
float fileinput()
{
	ifstream infile;
	infile.open(inputlab);

	if (!infile)
		cout << "\nCan't find file!";

	string readin;

	infile >> a >> b >> c >> d;

	return 0;
}
