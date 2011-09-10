/*
 * functions.h
 *
 *  Created on: Sep 1, 2011
 *      Author: preston
 */

//testing more commits.

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

//using namespace std;

//I'm actually not sure why this works. I didn't think you could declare vars in headers. Huh.

//A completely different comment

//Declare and initialize weights
//const double testOneWeight = .25;
//const double testTwoWeight = .25;
//const double finalExamWeight = .50;

//Declare strings
//string studentName, studentSocial;

//Declare grades
//double testOneGrade, testTwoGrade, finalExamGrade, grade;

//Obtain strings and grades

//test new branch.

//merge looked successful. continuing on master.

//another feature!

//more on master.

//more blank commits

//wtf.

//yeah. I've got a long way to go.

void setValues();
/*
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
*/
void getValues();
/*
{

	cout << "\nName of Student: " << studentName << endl;
	cout << "Student Social: " << studentSocial << endl;
	cout << "Test 1: " << testOneGrade << endl;
	cout << "Test 2: " << testTwoGrade << endl;
	cout << "Final Exam: " << finalExamGrade << endl;
	grade = testOneWeight*testOneGrade + testTwoWeight*testTwoGrade + finalExamWeight*finalExamGrade;
	cout << "\nAccording to my calculations, you're a faggot-- I mean you earned a: " << grade;

}
*/
#endif
