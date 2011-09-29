/*
 * functions.h
 *
 *  Created on: Sep 28, 2011
 *      Author: preston
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

//#include <iostream> //required for cout cin
//#include <string> //required for strings
#include<fstream>
#include "Student.h"

using namespace std;

//Declare functions
int counter(ifstream&);
void parseInput(ifstream&,Student*);
void sortInput(Student*,int);
void parseOutput(ofstream&,Student*,int);

#endif /* FUNCTIONS_H_ */
