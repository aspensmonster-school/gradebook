/*
 * main.cpp
 *
 *  Created on: Aug 31, 2011
 *      Author: preston
 */


#include <iostream> 	//required for cout cin
#include <string>		//required for strings
#include "functions.h"

//All sorts of badness here. Global vars defined in a header. Functions defined in a header. Ick ick ick.

int main()
{

	setValues();
	getValues();

	return 0;

}

