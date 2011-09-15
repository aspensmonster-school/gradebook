/*
 * main.cpp
 *
 *  Created on: Aug 31, 2011
 *      Author: preston
 *     Purpose: Obtains user input for some student info and related grades for the student, crunches a final grade,
 *              then outputs the student info, component grades, and FINAL grade.
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
