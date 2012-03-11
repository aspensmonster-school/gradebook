/*
 * Student.cpp
 *
 *  Created on: Sep 23, 2011
 *      Author: preston
 */

#include "Student.h"
#include<iostream>

//vectors working

using namespace std;

Student::Student()
{
	//studentInfo si;
	//be sure to instantiate those vectors...
	//infoArray();
	//gradesArray();
}

//not currently used, but could come in handy.
Student::Student(string name, string social)
{

	studentName = name;
	studentSocial = social;
	si.studentName = name;
	si.studentSocial = social;

}

void Student::setInfo(string name, string social)
{
	studentName = name;
	studentSocial = social;
	si.studentName = name;
	si.studentSocial = social;
	//cout << "info set" << endl;
	//cout << studentName << " " << studentSocial << endl;
}

/*
void Student::setInfo(studentInfo si)
{

}
*/

void Student::setGrades(float test1, float test2, float final)

{

	testOneGrade = test1;
	testTwoGrade = test2;
	finalExamGrade = final;
	grade = testOneWeight*testOneGrade + testTwoWeight*testTwoGrade + finalExamWeight*finalExamGrade;
	setLetterGrade(grade);

	si.testOneGrade = test1;
	si.testTwoGrade = test2;
	si.finalExamGrade = final;
	si.grade = testOneWeight*testOneGrade + testTwoWeight*testTwoGrade + finalExamWeight*finalExamGrade;
	si.letterGrade = setLetterGrade(grade);

	//cout << "Grades set." << endl;
	//cout << testOneGrade << " " << testTwoGrade << " " << finalExamGrade << " " << grade << endl;

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

vector<string> Student::getInfo()
{
	string temp [] = {studentName,studentSocial};
	for (int i = 0 ; i < 2 ; i++)
	{
		infoArray.insert(infoArray.begin()+i,temp[i]);
	}
	return infoArray;
}

vector<float> Student::getGrades()
{
	float temp [] = {testOneGrade,testTwoGrade,finalExamGrade,grade};
	for(int i = 0; i < 4 ; i++)
	{
		gradesArray.insert(gradesArray.begin()+i,temp[i]);
	}
	return gradesArray;
}

string Student::getLetterGrade()
{
	return letterGrade;
}
