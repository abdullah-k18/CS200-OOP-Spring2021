#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	public:
		string Name;
		string jobTitle;
		string dateOfJoining;
};
class Manager : public Employee
{
	public:
		string totalExperience;
};
class Teacher : public Employee
{
	public:
		string Qualification;
};
class RegularyTeacher : public Teacher
{
	public:
		long int monthlySalary;
};
class VisitingTeacher : public Teacher
{
	public:
		long int payRate;
		long int hoursWorked;
};
int main()
{
	return 0;
	system("pause");
}
