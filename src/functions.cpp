/*
 * functions.cpp
 *
 *  Created on: Sep 28, 2011
 *      Author: preston
 */

#include<iostream>
#include<stdlib.h> //atof
#include<iomanip> //for setw and setprecision
#include "functions.h"

using namespace std;

int counter(ifstream& ifs)
{
	int count = 0;
	for(int i = 0 ; ifs.good() ; i++)
	{
		string temp;
		getline(ifs,temp);
		count = i+1;
	}
	//put get pointer back to beginning of stream.
	ifs.seekg(0, ios::beg);
	return count;
}

void parseInput(ifstream& ifs,Student* studentArray)
{
	for(int i = 0 ; ifs.good() ; i++)
		{
			//using <string>'s getline.
			//get all data in string format

			string name, social, test1string, test2string, finalstring;
			getline(ifs,name,',');
			getline(ifs,social,',');
			getline(ifs,test1string,',');
			getline(ifs,test2string,',');
			getline(ifs,finalstring,'\n');

			//get our numbers converted to floats

			float test1, test2, final;
			test1 = atof(test1string.c_str());
			test2 = atof(test2string.c_str());
			final = atof(finalstring.c_str());

			//Set our student object's variables

			studentArray[i].setInfo(name,social);
			studentArray[i].setGrades(test1,test2,final);

		}
}

void sortArray(Student* studentArray,int count)
{
	for(int i = 0 ; i < count ; i++)
		{
			for(int j = i+1 ; j < count ; j++)
			{
				if ((studentArray[i].getInfo())[0].compare((studentArray[j].getInfo())[0] ) > 0)
				{
					Student temp = studentArray[i];
					studentArray[i]=studentArray[j] ;
					studentArray[j]=temp;
				}
			}
		}
}

void parseOutput(ofstream& ofs,Student* studentArray,int count)
{
	for(int i = 0 ; i < count ; i++)
		{
			ofs << setw(25) << fixed << showpoint << setprecision(2);
			ofs << setw(25) << fixed << showpoint << setprecision(2) << right << "Student Name: " << left << (studentArray[i].getInfo())[0] << "\n";
			ofs << setw(25) << fixed << showpoint << setprecision(2) << right << "Social: " << left << (studentArray[i].getInfo())[1] << endl;
			ofs << setw(25) << fixed << showpoint << setprecision(2) << right << "First Test: " << left <<  (studentArray[i].getGrades())[0] << endl;
			ofs << setw(25) << fixed << showpoint << setprecision(2) << right << "Second Test: " << left <<  (studentArray[i].getGrades())[1] << endl;
			ofs << setw(25) << fixed << showpoint << setprecision(2) << right << "Final Exam: " << left <<  (studentArray[i].getGrades())[2] << endl;
			ofs << setw(25) << fixed << showpoint << setprecision(2) << right << "Numeric Grade: " << left <<  (studentArray[i].getGrades())[3] << endl;
			ofs << setw(25) << fixed << showpoint << setprecision(2) << right << "Letter Grade: " << left << studentArray[i].getLetterGrade() << endl;
			ofs << setw(25) << fixed << showpoint << setprecision(2) << "==================================================" << endl;
		}
}





