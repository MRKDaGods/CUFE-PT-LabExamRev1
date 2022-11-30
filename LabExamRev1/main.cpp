#include <iostream>

#include "School.h"

using namespace std;

int main() {
	int numOfTeachers1;
	cout << "Enter number of teachers: ";
	cin >> numOfTeachers1;

	int* employmentTypes1 = new int[numOfTeachers1];
	cout << "Enter employment types: ";
	for (int i = 0; i < numOfTeachers1; i++) {
		cin >> employmentTypes1[i];
	}

	School s1(numOfTeachers1, &employmentTypes1);

	int numOfTeachers2;
	cout << "Enter number of teachers of second: ";
	cin >> numOfTeachers2;

	int* employmentTypes2 = new int[numOfTeachers2];
	cout << "Enter employment types of second: ";
	for (int i = 0; i < numOfTeachers2; i++) {
		cin >> employmentTypes2[i];
	}

	School s2(numOfTeachers2, &employmentTypes2);

	s1.PrintInfo();
	s2.PrintInfo();

	bool result = s1.CompareSchool(s2);
	cout << "S1 compared to S2 result: " << result << endl;

	int* halfEmployedInS1 = s1.CheckEmployment();

	int numOfHalfEmployedInS1 = 0;
	for (int i = 0; i < s1.getNumberOfTeachers(); i++) {
		if (s1.getEmploymentType()[i] == 0) {
			numOfHalfEmployedInS1++;
		}
	}

	cout << "IDs of Half employed teachers: ";
	for (int i = 0; i < numOfHalfEmployedInS1; i++) {
		cout << halfEmployedInS1[i] << " ";
	}

	cout << endl;

	delete[] employmentTypes1;
	delete[] employmentTypes2;
	delete[] halfEmployedInS1;

	return 0;
}