/*
 * Student.h
 *
 *  Created on: Sep 23, 2011
 *      Author: preston
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include<string>

class Student {

private:

	//grades themselves.
	float testOneGrade, testTwoGrade, finalExamGrade, grade;
	float gradesArray [4];

	//strings
	std::string studentName, studentSocial, letterGrade;
	std::string infoArray [2];

	//weights
	static const double testOneWeight = .25;
	static const double testTwoWeight = .25;
	static const double finalExamWeight = .50;

public:
	//Constructors
	Student(); //Default dummy constructor
	Student(std::string,std::string); //this one will take values.
	//Destructors
	//virtual ~Student();

	//Functions
	void setInfo(std::string,std::string);
	void setGrades(float,float,float);
	void setLetterGrade(float);
	std::string* getInfo();
	float* getGrades();
	std::string getLetterGrade();

};

#endif /* STUDENT_H_ */
