/*
 * main.cpp
 *
 *  Created on: Aug 31, 2011
 *      Author: preston
 */

#include "functions.h"

double testOneGrade, testTwoGrade, finalExamGrade, grade;
std::string studentName, studentSocial;

//using namespace std;

//All sorts of badness here. Global vars defined in a header. Functions defined in a header. Ick ick ick.

//Let's see if this is actually gonna push or not...

//push more.

//I'm gonna need to learn more about git. It's addicting :)

//Be sure to set build mode to release.

//Looks like I can't have separate projects for different architectures. Will have to work with different build-configs. Which is fine
//but I'll need to be careful about which save/build/run grouping I'm using.

//Gonna try to commit from winbloze at school now.

int main()
{

	//cout << "JACKASS!" << endl;
	//cout << "NO." << endl;
	//cout << "I'm confused." << endl;
	setValues();
	getValues();

	return 0;

	//testing after some tweaks in winbloze.

}

//in theory this should be a local branch.

//and this could be another feature on the branch.

//and now I've commited the feature to the remote branch, switched to master branch, pulled from remote master, and now i've merged from remote branch.
