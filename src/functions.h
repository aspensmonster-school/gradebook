/*
 * functions.h
 *
 *  Created on: Sep 1, 2011
 *      Author: preston
 */

//testing more commits.

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

using namespace std;

//I'm actually not sure why this works. I didn't think you could declare vars in headers. Huh.

//Declare and initialize weights
const double testOneWeight = .25;
const double testTwoWeight = .25;
const double finalExamWeight = .50;

//Declare strings
string studentName, studentSocial;

//Declare grades
double testOneGrade, testTwoGrade, finalExamGrade, grade;

//Obtain strings and grades

//test new branch.

//merge looked successful. continuing on master.

//another feature!

//more on master.

//more blank commits -__-

//added branch anotherbranch.

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

void getValues()
{
	cout << "\nName of Student: " << studentName << endl;
	cout << "Student Social: " << studentSocial << endl;
	cout << "Test 1: " << testOneGrade << endl;
	cout << "Test 2: " << testTwoGrade << endl;
	cout << "Final Exam: " << finalExamGrade << endl;
	grade = testOneWeight*testOneGrade + testTwoWeight*testTwoGrade + finalExamWeight*finalExamGrade;
	cout << "\nAccording to my calculations, you're a faggot-- I mean you earned a: " << grade;
}

#endif
