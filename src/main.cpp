/*
 * main.cpp
 *
 *  Created on: Aug 31, 2011
 *      Author: preston
 */

#include "functions.h"

//Declare our externs from functions.h
double testOneGrade, testTwoGrade, finalExamGrade, grade;
std::string studentName, studentSocial;


int main()
{
	//set the values
	setValues();
	//output them to screen
	getValues();

	return 0;
}
