/*
 * functions.cpp
 *
 *  Created on: Sep 12, 2011
 *      Author: preston
 */


#include<iostream>
#include "functions.h"

using namespace std;

//This function will output the values of the variables.
void outputValues()
{

	cout << "\nName of Student: " << studentName << endl;
	cout << "Student Social: " << studentSocial << endl;
	cout << "Test 1: " << testOneGrade << endl;
	cout << "Test 2: " << testTwoGrade << endl;
	cout << "Final Exam: " << finalExamGrade << endl;
	grade = testOneWeight*testOneGrade + testTwoWeight*testTwoGrade + finalExamWeight*finalExamGrade;
	cout << "\nAccording to my calculations you earned a: " << grade;

}

//This function will set the values of the variables.
void setValues()
{
	cout << "Welcome to the grade calculator!" << endl;
	cout << "Provide student name (First-last): " ;
		cin >> studentName;
	cout << "Provide student social security number (XXX-XX-XXXX): " ;
		cin >> studentSocial;
	cout << "\nProvide student first test grade: ";
		cin >> testOneGrade;
	cout << "\nProvide student second test grade: ";
		cin >> testTwoGrade;
	cout << "\nProvide student final exam grade: ";
		cin >> finalExamGrade;
}

