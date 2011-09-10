/*
 * getValues.cpp
 *
 *  Created on: Sep 9, 2011
 *      Author: preston
 */

#include<iostream>
#include "functions.h"

using namespace std;

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

