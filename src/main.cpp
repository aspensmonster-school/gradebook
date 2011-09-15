/*
 * main.cpp
 *
 *  Created on: Aug 31, 2011
 *      Author: preston
 */

#include "functions.h" //contains vars and functions

//Declare our externs from functions.h
double testOneGrade, testTwoGrade, finalExamGrade, grade;
std::string studentName, studentSocial;


int main()
{
	//set the values by prompting user for them
	setValues();
	//output the values and final grade to screen
	outputValues();

	return 0;
}
