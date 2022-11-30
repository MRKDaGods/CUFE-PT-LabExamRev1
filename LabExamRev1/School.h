#pragma once

class School
{
private:
	int NumberOfTeachers;
	int* EmploymentType;

public:
	School(int num, int** employments);

	void setNumberOfTeachers(int num);
	int getNumberOfTeachers();

	void setEmploymentType(int* type);
	int* getEmploymentType();

	void PrintInfo();

	bool CompareSchool(School other);

	int* CheckEmployment();

	~School();
};