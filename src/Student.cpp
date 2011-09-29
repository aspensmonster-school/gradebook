/*
 * Student.cpp
 *
 *  Created on: Sep 23, 2011
 *      Author: preston
 */

#include "Student.h"


using namespace std;

Student::Student()
{
	//Dummy constructor
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
	setLetterGrade(grade);

}

void Student::setLetterGrade(float finalNumericGrade)
{
	if(finalNumericGrade < 60 && finalNumericGrade >= 0)
	{
		letterGrade = "F";
	}
	else if(finalNumericGrade < 70)
	{
		letterGrade = "D";
	}
	else if(finalNumericGrade < 80)
	{
		letterGrade = "C";
	}
	else if(finalNumericGrade < 90)
	{
		letterGrade = "B";
	}
	else if(finalNumericGrade <= 100)
	{
		letterGrade = "A";
	}
	else if(finalNumericGrade > 100 || finalNumericGrade < 0)
	{
		letterGrade = "Nice try. Run the program again.";
	}
}

string* Student::getInfo()
{
	string temp [] = {studentName,studentSocial};
	for (int i = 0 ; i < 2 ; i++)
	{
		infoArray[i]=temp[i];
	}
	return infoArray;
}

float* Student::getGrades()
{
	float temp [] = {testOneGrade,testTwoGrade,finalExamGrade,grade};
	for(int i = 0; i < 4 ; i++)
	{
		gradesArray[i]=temp[i];
	}
	return gradesArray;
}

string Student::getLetterGrade()
{
	return letterGrade;
}
