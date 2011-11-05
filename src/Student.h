/*
 * Student.h
 *
 *  Created on: Sep 23, 2011
 *      Author: preston
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include<string>
#include<vector>

using namespace std;

class Student {

private:

	//grades themselves.
	float testOneGrade, testTwoGrade, finalExamGrade, grade;
	vector<float> gradesArray;

	//strings
	string studentName, studentSocial, letterGrade;
	vector<string> infoArray;

	//weights
	static const double testOneWeight = .25;
	static const double testTwoWeight = .25;
	static const double finalExamWeight = .50;

public:
	//Constructors
	Student(); //Default dummy constructor
	Student(string,string); //this one will take values.
	//Destructors
	//virtual ~Student();

	//Functions
	void setInfo(string,string);
	void setGrades(float,float,float);
	void setLetterGrade(float);
	vector<string> getInfo();
	vector<float> getGrades();
	string getLetterGrade();

};

#endif /* STUDENT_H_ */
