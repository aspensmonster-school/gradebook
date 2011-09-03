/*
 * main.cpp
 *
 *  Created on: Aug 31, 2011
 *      Author: preston
 */


#include <iostream> 	//required for cout cin
#include <string>		//required for strings
#include "functions.h"

using namespace std;

//All sorts of badness here. Global vars defined in a header. Functions defined in a header. Ick ick ick.

//Let's see if this is actually gonna push or not...

//push more.

//I'm gonna need to learn more about git. It's addicting :)

//Be sure to set build mode to release.

//Looks like I can't have separate projects for different architectures. Will have to work with different build-configs. Which is fine
//but I'll need to be careful about which save/build/run grouping I'm using.

int main()
{

	//cout << "JACKASS!" << endl;
	setValues();
	getValues();

	return 0;

}

