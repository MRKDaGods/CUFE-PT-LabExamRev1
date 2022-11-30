#include "School.h"

#include <iostream>

using namespace std;

School::School(int num, int** employments) {
	NumberOfTeachers = num;
	EmploymentType = *employments;
}

void School::setNumberOfTeachers(int num) {
	NumberOfTeachers = num;
}

int School::getNumberOfTeachers() {
	return NumberOfTeachers;
}

void School::setEmploymentType(int* type) {
	EmploymentType = type;
}

int* School::getEmploymentType() {
	return EmploymentType;
}

void School::PrintInfo() {
	cout << "Number of Teachers: " << NumberOfTeachers << endl;
	cout << "Type of Employment: [ "; //Type of Employment: [ 0 1 2 3 ]
	for (int i = 0; i < NumberOfTeachers; i++) {
		cout << EmploymentType[i] << " ";
	}

	cout << "]" << endl;
}

bool School::CompareSchool(School other) {
	return NumberOfTeachers > other.getNumberOfTeachers();
}

int* School::CheckEmployment()
{
	int numOfHalfEmployed = 0;
	for (int i = 0; i < NumberOfTeachers; i++) {
		if (EmploymentType[i] == 0) {
			numOfHalfEmployed++;
		}
	}

	int* IDsOfHalfEmployed = new int[numOfHalfEmployed];
	int idx = 0;

	for (int i = 0; i < NumberOfTeachers; i++) {
		if (EmploymentType[i] == 0) {
			IDsOfHalfEmployed[idx++] = i;
		}
	}

	return IDsOfHalfEmployed;
}

School::~School()
{
}