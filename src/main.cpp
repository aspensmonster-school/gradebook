/*
 * main.cpp
 *
 *  Created on: Aug 31, 2011
 *      Author: preston (pmm50)
 *     Purpose: Obtains user input for some student info and related grades for the student, crunches a final grade,
 *              then outputs the student info, component grades, and FINAL grade. The user input is passed in the form
 *              of an input file (along with a call to the user to specify file paths).
 *              Columns are comma delimited, and rows are newline delimited. In other words, the input
 *              file basically has the contents of a table of students and their information and grades.
 *              The output file is parsed as per requests in the project assignment to make use of various iomanip fields.
 *              As an added bonus, the output is sorted alphabetically via first name.
 *     Project: 2
 *
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

	char loopType;
	cout << "Please provide type of looping. 0 for for, 1 for while, and 2 for do-while: ";
	cin >> loopType;

	//create our fstreams and open the files.
	ifstream ifs;
	ifs.open(fullPathInput.c_str());
	ofstream ofs;
	ofs.open(fullPathOutput.c_str());

	//determine size of Student object array
	int count = counter(ifs); //functions.h

	//Create an array of students, size determined previously.
	Student studentArray[count]; //Student.h

	//Cycle through the input file, creating the Student objects
	parseInput(ifs,studentArray,loopType); //functions.h

	//Sort the Array
	sortArray(studentArray,count); //functions.h

	//And now to output
	parseOutput(ofs,studentArray,count,loopType); //functions.h

	//arbitrary comment.

	return 0;
}
