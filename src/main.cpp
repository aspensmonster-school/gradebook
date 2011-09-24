/*
 * main.cpp
 *
 *  Created on: Aug 31, 2011
 *      Author: preston
 *     Purpose: Obtains user input for some student info and related grades for the student, crunches a final grade,
 *              then outputs the student info, component grades, and FINAL grade.
 */

#include "Student.h" //contains vars and functions
#include<iostream> //cout and the like
#include<fstream> //ifstream and the like
#include<string> //for stringz

using namespace std;

int main()
{
	cout << "This is a test.";
	//create our ifstream
	ifstream ifs;
	ifs.open("inputs.txt");
	if (ifs.good())
		cout << "all-good";
	//determine how many students are in the input file.
	//assumes one student per-line.
	int counter;
	for(int i = 0 ; ifs.good() ; i++)
	{
		string temp;
		getline(ifs,temp);
		counter = i;
	}

	//Create an array of students, size determined previously.
	Student studentArray[counter];

	//Cycle through the input file, creating the Student objects
	//and outputting results to file.
	for(int i = 0 ; ifs.good() ; i++)
	{
		//we need ifs to basically grab all the data and place
		//it in temp vars so that we can use our set methods.

		string name = "preston";
		string social = "123";
		float test1 = 23.4;
		float test2 = 43.4;
		float final = 50.4;

		//initstantiation already done with creation of the array.
		//studentArray[i] = new Student(name,social);

		studentArray[i].setInfo(name,social);
		studentArray[i].setGrades(test1,test2,final);

		cout << (studentArray[i].getGrades())[1] << endl;
		//and output to file. We have most of what we need to
		//output at this point.
	}

	return 0;
}
