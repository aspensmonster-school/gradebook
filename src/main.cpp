/*
 * main.cpp
 *
 *  Created on: Aug 31, 2011
 *      Author: preston
 *     Purpose: Obtains user input for some student info and related grades for the student, crunches a final grade,
 *              then outputs the student info, component grades, and FINAL grade.
 */

#include "Student.h" //contains vars and functions
#include<stdlib.h> //atof
#include<iostream> //cout and the like
#include<fstream> //ifstream and the like
#include<string> //for stringz
#include<iomanip> //for setw and setprecision

using namespace std;

int main()
{

	char fullPath [300];
	cout << "Please provide the input file's full path: ";
	cin >> fullPath;

	cout << "This is a test.";

	//create our ifstream

	ifstream ifs;
	ifs.open(fullPath);
	if (ifs.good())
		cout << "all-good" << endl;

	//determine how many students are in the input file.
	//assumes one student per-line.

	cout << "Before first for loop" << endl;
	int counter = 0;

	for(int i = 0 ; ifs.good() ; i++)
	{
		string temp;
		getline(ifs,temp);
		counter = i+1;
	}

	cout << "After first for loop" << endl;
	cout << counter << endl;
	cout << "made it past the first for loop." << endl;
	//ifs.close();
	//ifs.open("/home/preston/git/firstProject/src/inputs.txt");

	//put get pointer back to beginning of stream.
	ifs.seekg(0, ios::beg);

	//Create an array of students, size determined previously.

	Student studentArray[counter];

	//Cycle through the input file, creating the Student objects

	for(int i = 0 ; ifs.good() ; i++)
	{
		//using <string>'s getline. Easier to just convert a few strings
		//than to go through ifstream's POS member functions.

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

		//Output our student object's variables to file
/*
		ofs << setw(25) << fixed << showpoint << setprecision(2);
		ofs << setw(25) << fixed << showpoint << setprecision(2) << right << "Student Name: " << left << (studentArray[i].getInfo())[0] << "\n";
		ofs << setw(25) << fixed << showpoint << setprecision(2) << right << "Social: " << left << (studentArray[i].getInfo())[1] << endl;
		ofs << setw(25) << fixed << showpoint << setprecision(2) << right << "First Test: " << left <<  (studentArray[i].getGrades())[0] << endl;
		ofs << setw(25) << fixed << showpoint << setprecision(2) << right << "Second Test: " << left <<  (studentArray[i].getGrades())[1] << endl;
		ofs << setw(25) << fixed << showpoint << setprecision(2) << right << "Final Exam: " << left <<  (studentArray[i].getGrades())[2] << endl;
		ofs << setw(25) << fixed << showpoint << setprecision(2) << right << "Numeric Grade: " << left <<  (studentArray[i].getGrades())[3] << endl;
		ofs << setw(25) << fixed << showpoint << setprecision(2) << right << "Letter Grade: " << left << studentArray[i].getLetterGrade() << endl;
		ofs << setw(25) << fixed << showpoint << setprecision(2) << "==================================================" << endl;
*/
		/*
		cout << "Got inside last for loop." << endl;
		cout << "Student Name: " << (studentArray[i].getInfo())[0] << endl;
		cout << "Student Social: " << (studentArray[i].getInfo())[1] << endl;
		cout << "First grade: " << (studentArray[i].getGrades())[0] << endl;
		cout << "Second grade: " << (studentArray[i].getGrades())[1] << endl;
		cout << "Exam grade: " << (studentArray[i].getGrades())[2] << endl;
		cout << "Final grade: " << (studentArray[i].getGrades())[3] << endl;
		cout << "Letter grade: " << studentArray[i].getLetterGrade() << endl;
		*/

		//cout << "Done with iteration of for loop." << endl;
	}

	//And now we must sort our array via first name.
	//And yes, I know it's a shitty sort implementation but it's 3AM and it
	//fucking works.

	for(int i = 0 ; i < counter ; i++)
	{
		for(int j = i+1 ; j < counter ; j++)
		{
			//if ((studentArray[i].getInfo())[0] < (studentArray[j].getInfo())[0])
			if ((studentArray[i].getInfo())[0].compare((studentArray[j].getInfo())[0] ) > 0)
			{
				cout << "Alphabetize!";
				Student temp = studentArray[i];
				studentArray[i]=studentArray[j] ;
				studentArray[j]=temp;
			}
		}
		cout << "Initial plus one";
	}

	//And now to output

	ofstream ofs;
	ofs.open("/home/preston/git/firstProject/src/outputs.txt");

	for(int i = 0 ; i < counter ; i++)
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

	return 0;
}
