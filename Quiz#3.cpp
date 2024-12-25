#include<iostream>
using namespace std;
class Employee{
	public:
		string name;
		string jobTitle;
		string dateOfJoining;
};
class Manager: public Employee{
	public:
		long int totalExperience;
};
class Teacher: public Employee{
	public:
		string qualification;
};
class RegularyTeacher: public Teacher{
	public:
		long int monthlySalary;
};
class VisitingTeacher: public Teacher{
	public:
		long int payRate;
		long int hoursWorked;
};
int main()
{
	system("pause");
	return 0;
}
