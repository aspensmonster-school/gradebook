/*
 * setValues.cpp
 *
 *  Created on: Sep 9, 2011
 *      Author: preston
 */
#include<iostream>

using namespace std;

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
