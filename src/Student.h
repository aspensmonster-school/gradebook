/*
 * Student.h
 *
 *  Created on: Sep 23, 2011
 *      Author: preston
 */

#ifndef STUDENT_H_
#define STUDENT_H_

class Student {

private:

	//grades themselves.
	float testOneGrade, testTwoGrade, finalExamGrade, grade;

	//strings
	std::string studentName, studentSocial;

	//weights
	const double testOneWeight = .25;
	const double testTwoWeight = .25;
	const double finalExamWeight = .50;

public:
	//Constructors
	Student(); //Default constructor will do old, cli method.
	Student(std::string,std::string); //this one will take values.
	//Destructors
	//virtual ~Student();

	//Functions
	float* getGrades();
	void setGrades(float,float,float);

};

#endif /* STUDENT_H_ */
