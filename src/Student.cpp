/*
 * Student.cpp
 *
 *  Created on: Sep 23, 2011
 *      Author: preston
 */

#include "Student.h"
#include<string>

using namespace std;

Student::Student()
{

}

//not currently used, but could come in handy.
Student::Student(string name, string social)
{

	studentName = name;
	studentSocial = social;

}

void Student::setInfo(string name, string social)
{
	studentName = name;
	studentSocial = social;
}

void Student::setGrades(float test1, float test2, float final)

{

	testOneGrade = test1;
	testTwoGrade = test2;
	finalExamGrade = final;
	grade = testOneWeight*testOneGrade + testTwoWeight*testTwoGrade + finalExamWeight*finalExamGrade;

	//still need to set letterGrade;

}

float* Student::getGrades()
{
	float temp [] = {testOneGrade,testTwoGrade,finalExamGrade,grade};
	for(int i = 0; i < 4 ; i++)
	{
		arr[i]=temp[i];
	}
	return arr;
}

string Student::getLetterGrade()
{
	return letterGrade;
}
