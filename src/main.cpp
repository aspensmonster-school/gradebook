/*
 * main.cpp
 *
 *  Created on: Aug 31, 2011
 *      Author: preston
 *     Purpose: Obtains user input for some student info and related grades for the student, crunches a final grade,
 *              then outputs the student info, component grades, and FINAL grade.
 */

#include "Student.h" //contains student object definition
#include "functions.h" //contains operational functions
#include<iostream> //cout and the like
#include<fstream> //ifstream and the like
#include<string> //for strings

using namespace std;

int main()
{

	//prompt for the input path and output

	string fullPathInput;
	cout << "Please provide the input file's full path. " << endl;
	cout << "Be sure to escape backslashes with another backslash if necessary: ";
	cin >> fullPathInput;

	string fullPathOutput;
	cout << "Please provide the output file's full path. " << endl;
	cout << "Be sure to escape backslashes with another backslash if necessary: ";
	cin >> fullPathOutput;

	//create our ifstream and open the file.
	ifstream ifs;
	ifs.open(fullPathInput.c_str());

	//determine size of Student object array
	int count = counter(ifs);

	//put get pointer back to beginning of stream.
	ifs.seekg(0, ios::beg);

	//Create an array of students, size determined previously.
	Student studentArray[count];

	//Cycle through the input file, creating the Student objects
	parseInput(ifs,studentArray);

	//Sort the Array
	sortInput(studentArray,count);

	//And now to output
	ofstream ofs;
	ofs.open(fullPathOutput.c_str());
	parseOutput(ofs,studentArray,count);

	return 0;
}
