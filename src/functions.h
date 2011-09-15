/*
 * functions.h
 *
 *  Created on: Sep 1, 2011
 *      Author: preston
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <iostream> 	//required for cout cin
#include <string>		//required for strings

//Declare and initialize weights
static const double testOneWeight = .25;
static const double testTwoWeight = .25;
static const double finalExamWeight = .50;

//Declare strings
extern std::string studentName, studentSocial;

//Declare grades
extern double testOneGrade, testTwoGrade, finalExamGrade, grade;

//Declare functions
void setValues();
void outputValues();

#endif
